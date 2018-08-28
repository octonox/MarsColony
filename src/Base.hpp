/**
-Création: 28/08/2018
-Classe représentant la base du joueur
**/
#ifndef BASE_HPP
#define BASE_HPP
#include <vector>
#include <memory>
#include "buildings/building.hpp"

class Base
{
public:
    //Methods
    explicit Base();

    //Attributes
    /*There the vector of buildings is public because if it's private you can't call the ctor of each inherited class*/
    std::vector<std::unique_ptr<Building>> buildings;
};

#endif // BASE_HPP
