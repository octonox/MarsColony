#include "base.hpp"

namespace gmpl{
Base::Base()
{
    //ctor
}

void Base::addAchievement(Achievement const& achievement)
{
    _observers.push_back(achievement);
}

void Base::notifyObs()
{
    //Call for every observer the method "notify" unless if the achievement has been already done
    for(auto& p: _observers)
    {
        if(!p.isDone())
            p.notify(*this);
    }
}
}
