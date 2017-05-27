#ifndef OBSERVER_SUBJECT_HPP
#define OBSERVER_SUBJECT_HPP
#include "Observer.hpp"

class   Subject
{
public:
    Subject(void);
    Subject(Subject const & src);
    ~Subject(void);
    Subject &operator=(Subject const & src);

    void    register_observer(Observer & o);
    void    notify_observer();
    void    remove_observer();
private:
    Observer * _ob;
};

#endif //OBSERVER_SUBJECT_HPP
