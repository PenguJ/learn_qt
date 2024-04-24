#include "counter.hpp"

Counter::Counter(QObject *parent)
    : QObject{parent}
    , m_value(0)
{}

int Counter::value() const
{
    return (m_value);
}

void Counter::setValue(int value)
{
    if (value != m_value)
    {
        m_value = value;
        emit valueChanged(value);
    }
}
