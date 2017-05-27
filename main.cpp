#include "Subject.hpp"

int     main()
{
    Subject subject;
    for(int i = 0; i < 3; i++) {
        Observer *observer = new Observer();
        subject.register_observer(*observer);
    }
    subject.notify_observer();
    subject.notify_observer();
}