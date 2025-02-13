#ifndef WHEEL_H
#define WHEEL_H
class Car;
class Wheel
{
    int m_speed;
    Car * m_car;
public:
    Wheel();
    void rotate(Car * car);
    void stop();
    ~Wheel();
};

#endif // WHEEL_H
