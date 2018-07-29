/**
-Création: 29/07/2018 à 16:04
-Classe abstraite représentant un bâtiment
-Sera dérivée par les différentes catégories de bâtiment
**/

#ifndef __BUILDING__
#define __BUILDING__
#include <utility> //Header that contain "std::pair" class
#include <memory>

class Building
{
public:
    Building(int maxpv, int upgradeprice, std::pair<int, int> position); //To create a new building
    Building(std::unique_ptr<Building> built); //To copy buildings
    Building(short int level, int pv, int maxpv,
             int upgradeprice, bool upgrading,
             std::pair<int, int> position); //To create it with a file (when the game is launching)

    short int getLevel() const;
    int getPv() const;
    int getMaxPv() const;
    int getUpgradePrice() const;
    bool getUpgrading() const;
    std::pair<int, int> getPosition() const;

    virtual void upgrade() = 0;

protected:
    short int _level; //The level of the building
    int _pv; //Current PV
    int _maxpv; //Max PV
    int _upgradeprice; //The price to upgrade
    bool _upgrading; //Tell if it's upgrading (so if it can be used or not)
    std::pair<int, int> _position; //The position on the map (x;y)
};

#endif // __BUILDING__

