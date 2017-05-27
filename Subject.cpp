#include "Subject.hpp"

Subject::Subject() : _ob(NULL){
}

Subject::Subject(Subject const &src) {
    *this = src;
}

Subject::~Subject() {
    Observer *temp;
    while (_ob) {
        temp = _ob->next;
        delete _ob;
        _ob = temp;
    }
}

Subject& Subject::operator=(Subject const &src) {
    this->_ob = src._ob;
    return *this;
}

void    Subject::register_observer(Observer &o) {
    std::cout << "Observer has been registered." << std::endl;
    o.next = this->_ob;
    this->_ob = &o;
}

void    Subject::notify_observer() {
    Observer * temp = this->_ob;
    std::cout << "Observers are being notified." << std::endl;
    while (temp) {
        temp->update();
        temp = temp->next;
    }
}