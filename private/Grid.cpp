//
// Created by Emily Peregrine on 16/10/2016.
//

#include <Grid.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <Game.hpp>

Grid::Grid(int x, int y, unsigned int height, unsigned int width) {
    this->x = x;
    this->y = y;
    this->height = height;
    this->width = width;
    this->_grid = std::vector<std::vector<bool> >((unsigned long)width);

    for (int x = 0; x < _grid.size(); ++x) {
        _grid[x] = std::vector<bool>(height);
        for (int y = 0; y < _grid[x].size(); ++y) {
            _grid[x][y] = false;
            if (x == 1 && y == 3) {
                _grid[x][y] = true;
            }
        }
    }
}

void Grid::runTurn() {
    std::vector<std::vector<bool> > newGrid = _grid;
    for (int x = 0; x < _grid.size(); ++x) {
        for (int y = 0; y < _grid[x].size(); ++y) {
            bool cellAlive = _grid[x][y];
            if (cellAlive) {
                //check above below right left
                //if none have life die
            } else {
                //check above below right left
                //if any have life, come to life
            }
        }
    }
}

void Grid::draw(sf::RenderWindow* win) const {
    for (int x = 0; x < _grid.size(); ++x) {
        for (int y = 0; y < _grid[x].size(); ++y) {
            sf::RectangleShape tile(sf::Vector2f(GRID_PX_SIZE, GRID_PX_SIZE));
            tile.setPosition(sf::Vector2f(x*GRID_PX_SIZE + x, y*GRID_PX_SIZE + y));

            tile.setFillColor(_grid[x][y] ? ALIVE_COLOUR : DEAD_COLOR);

            win->draw(tile);
        }
    }
}

void Grid::giveLifeToCell(int x, int y) {
    _grid[x][y] = true;
}

void Grid::killCell(int x, int y) {
    _grid[x][y] = false;
}

bool Grid::hasLifeAroundPoint(int x, int y) const{
    return false;
}
