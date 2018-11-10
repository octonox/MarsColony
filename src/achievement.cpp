#include "Achievement.hpp"

namespace gmpl{
Achievement::Achievement()
{
}

bool Achievement::isDone() const
{
    return _done;
}

void Achievement::notify(Base const& state)
{
    _done = verif_rules(state); //If verif_rules return true, the achievement is done so instead of doing "if blable" we basically affect the result to _done
}

//To implement
bool Achievement::verif_rules(Base const& state) const
{
    return true;
}
}
