#ifndef EVENTLOOP_HPP
#define EVENTLOOP_HPP
#include <SFML/Graphics.hpp>
#include <functional>

/// A class that represent an event loop ///

namespace gmpl{
class EventLoop
{
public:
    explicit EventLoop(std::function<void(sf::RenderWindow&)>& callback);

    void start();

private:
    std::function<void(sf::RenderWindow&)> const& m_callback;
};
}

#endif // EVENTLOOP_HPP
