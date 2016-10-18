//
// Created by Emily Peregrine on 16/10/2016.
//

#ifndef GAMEOFLIFE_GRID_HPP
#define GAMEOFLIFE_GRID_HPP

#include <list>
#include <vector>
#include <SFML/Graphics/RenderWindow.hpp>

const sf::Color ALIVE_COLOUR = sf::Color::Green;
const sf::Color DEAD_COLOR = sf::Color::Red;

class Grid {
public:
    Grid(int x = 0 , int y = 0, unsigned int height = 10, unsigned int width = 10);
    void runTurn();
    void draw(sf::RenderWindow* win) const;
    void giveLifeToCell(int x, int y);
    void killCell(int x, int y);
private:
    std::vector<std::vector<bool> > _grid;
    int x;
    int y;
    unsigned int height;
    unsigned int width;
    bool hasLifeAroundPoint(int x, int y) const;
};

#endif //GAMEOFLIFE_GRID_HPP
