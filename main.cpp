#include "config.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "public/Game.hpp"

int main(int argc, char* argv[]) {

    std::cout << "Version " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;

    Game mainGame;

    sf::RenderWindow win(
            sf::VideoMode(Config::SCREEN_WIDTH, Config::SCREEN_HEIGHT), // Specify Resolution
            "Game Of Life", //Specify Window Title
            sf::Style::Titlebar + sf::Style::Close //Specify Window style,
    );

    mainGame.window = &win;

    mainGame.Start();

    while (win.isOpen()) {
        sf::Event Event;
        while (win.pollEvent(Event)) {
            if (Event.type == sf::Event::Closed)
                win.close();
        }

        mainGame.Draw();

        win.display();
    }
}