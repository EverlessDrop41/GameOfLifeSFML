//
// Created by Emily Peregrine on 12/10/2016.
//

#ifndef GAMEOFLIFE_GAME_HPP
#define GAMEOFLIFE_GAME_HPP

#include <SFML/Graphics.hpp>
#include <Grid.hpp>

const int GRID_PX_SIZE = 100;

class Game {
public:
    sf::RenderWindow* window;
    void Start();
    void Draw();
    Grid _grid;
};

#endif //GAMEOFLIFE_GAME_HPP
