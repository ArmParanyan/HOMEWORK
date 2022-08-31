#include "singleton.h"

Singleton* Singleton::m_singleton = nullptr;

Singleton* Singleton::get_instance() {
    if  (m_singleton == nullptr) {
        m_singleton = new Singleton;
        return m_singleton;
    }
    return m_singleton;
}

Singleton::~Singleton() {
    Singleton::m_singleton = nullptr;
}

void Singleton::set_value(int value) {
    m_value = value;
}

int Singleton::get_value() {
    return this->m_value;
}
