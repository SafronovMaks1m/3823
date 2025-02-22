#include "iostream"
#pragma once

template <class Tkey, class Tval>
class ITable {
public:
    virtual Tkey insert(Tval value) = 0;
    virtual void insert(Tkey key, Tval value) = 0;
    virtual void erase(Tkey key) = 0;
    virtual Tval find(Tkey key) = 0;
    virtual const TPair<Tkey, Tval>& operator[](const size_t index) const = 0;
    virtual TPair<Tkey, Tval>& operator[](const size_t index) = 0;
};