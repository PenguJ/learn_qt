#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);

    int value() const;

signals:
    void valueChanged(int newValue);

public slots:
    void setValue(int value);

private:
    int m_value;
};

#endif // COUNTER_HPP
