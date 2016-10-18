//
// Created by Emily Peregrine on 12/10/2016.
//

#include <Game.hpp>

void Game::Start() {
    _grid = Grid();
}

void Game::Draw() {
    window->clear(sf::Color::Black);
    _grid.draw(window);
}