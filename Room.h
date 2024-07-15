#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <unordered_map>

class Room {
public:
    Room(const std::string &description);

    void setDescription(const std::string &description);
    std::string getDescription() const;

    void addExit(const std::string &direction, Room *room);
    Room* getExit(const std::string &direction) const;

private:
    std::string description;
    std::unordered_map<std::string, Room*> exits;
};

#endif // ROOM_H
