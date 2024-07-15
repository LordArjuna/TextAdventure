#include "Game.h"
#include <iostream>

Game::Game() {
    // TODO: Implement constructor
    createRooms();
}

void Game::start() {
    // TODO: Implement start
    showIntroduction();
    // Main game loop
    while (true) {
        showCurrentRoom();
        std::string input;
        std::getline(std::cin, input);
        processInput(input);
    }
}

void Game::createRooms() {
    // TODO: Implement createRooms
}

void Game::showIntroduction() const {
    // TODO: Implement showIntroduction
}

void Game::showCurrentRoom() const {
    // TODO: Implement showCurrentRoom
}

void Game::processInput(const std::string &input) {
    // TODO: Implement processInput
}

void Game::movePlayer(const std::string &direction) {
    // TODO: Implement movePlayer
}

void Game::pickItem(const std::string &item) {
    // TODO: Implement pickItem
}

void Game::showInventory() const {
    // TODO: Implement showInventory
}
