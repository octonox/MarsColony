/**
-Contain the implementation of "building.hpp"
**/

#include "building.hpp"

Building::Building(int maxpv, int upgradeprice, std::pair<int, int> position) : _level(1), _pv(maxpv), _maxpv(maxpv), _upgradeprice(upgradeprice), _upgrading(false)
{
    _position = std::make_pair(position.first, position.second);
}

Building::Building(std::unique_ptr<Building> built)
{
    _level = built->getLevel();
    _pv = built->getPv();
    _maxpv = built->getMaxPv();
    _upgradeprice = built->getUpgradePrice();
    _upgrading = built->getUpgrading();
    _position = built->getPosition();
}

Building::Building(short int level, int pv, int maxpv,
             int upgradeprice, bool upgrading,
             std::pair<int, int> position) : _level(level), _pv(pv), _maxpv(maxpv), _upgradeprice(upgradeprice), _upgrading(upgrading), _position(position)
{
}

short int Building::getLevel()
{
    return _level;
}

int Building::getPv()
{
    return _pv;
}

int Building::getMaxPv()
{
    return _maxpv;
}

int Building::getUpgradePrice()
{
    return _upgradeprice;
}

bool Building::getUpgrading()
{
    return _upgrading;
}

std::pair<int, int> Building::getPosition()
{
    return _position;
}
