#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>

class Inventory {
public:
    void addItem(const std::string &item);
    void removeItem(const std::string &item);
    bool hasItem(const std::string &item) const;
    void showItems() const;

private:
    std::vector<std::string> items;
};

#endif // INVENTORY_H
