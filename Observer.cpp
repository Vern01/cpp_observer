#include "Observer.hpp"

Observer::Observer() : next(NULL) {
}

Observer::Observer(Observer const &src) {
    *this = src;
}

Observer::~Observer() {
}

Observer& Observer::operator=(Observer const &src) {
    this->next = src.next;
    return *this;
}

void    Observer::update(void *subject) {
    Subject s = subject;
    std::cout << "Observer being updated." << std::endl;
    s->remove_observer(this);
}