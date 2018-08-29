/**
-Création: 28/08/2018
-Classe représentant la base du joueur
**/
#ifndef BASE_HPP
#define BASE_HPP
#include <vector>
#include <memory>
#include "buildings/building.hpp"
#include "achievement.hpp"

class Achievement;

class Base
{
public:
    //Methods
    explicit Base();

    void addAchievement(Achievement const& achievement);
    void notifyObs();

    //Attributes
    /*There the vector of buildings is public because if it's private you can't call the ctor of each inherited class*/
    std::vector<std::unique_ptr<Building>> buildings;

private:
    std::vector<Achievement> _observers;
};

#endif // BASE_HPP
