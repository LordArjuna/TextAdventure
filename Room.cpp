#include "Room.h"

Room::Room(const std::string &description) : description(description) {
    // TODO: Implement constructor
}

void Room::setDescription(const std::string &description) {
    // TODO: Implement setDescription
}

std::string Room::getDescription() const {
    // TODO: Implement getDescription
    return "";
}

void Room::addExit(const std::string &direction, Room *room) {
    // TODO: Implement addExit
}

Room* Room::getExit(const std::string &direction) const {
    // TODO: Implement getExit
    return nullptr;
}
