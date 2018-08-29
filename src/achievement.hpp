/**
-Création: 29/08/2018
-Classe représentant un achievement
-Implémente le pattern Observer
**/

#ifndef ACHIEVEMENT_HPP
#define ACHIEVEMENT_HPP
#include "base.hpp"

class Base;

class Achievement
{
public:
    explicit Achievement();

    bool isDone() const;

    void notify(Base const& state); //Method that notify the achievement that there was a change in the base

private:
    //Methods
    bool verif_rules(Base const& state) const; //Return true if with this state the achievement is done

    //Attrs
    bool _done; //If the achievement is done or not
};

#endif // ACHIEVEMENT_HPP
