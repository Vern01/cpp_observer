#ifndef OBSERVER_OBSERVER_CLASS_HPP
#define OBSERVER_OBSERVER_CLASS_HPP
#include <iostream>

class Observer
{
public:
    Observer(void);
    Observer(Observer const & src);
    ~Observer(void);
    Observer &operator=(Observer const & src);

    void        update(void);

    Observer    * next;
};

#endif //OBSERVER_OBSERVER_CLASS_HPP
