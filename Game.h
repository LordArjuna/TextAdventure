#ifndef GAME_H
#define GAME_H

#include "Room.h"
#include "Inventory.h"
#include <vector>
#include <string>

class Game {
public:
    Game();
    void start();

private:
    void createRooms();
    void showIntroduction() const;
    void showCurrentRoom() const;
    void processInput(const std::string &input);
    void movePlayer(const std::string &direction);
    void pickItem(const std::string &item);
    void showInventory() const;

    Room *currentRoom;
    std::vector<Room> rooms;
    Inventory inventory;
};

#endif // GAME_H
