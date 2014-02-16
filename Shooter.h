#ifndef shooter
#define shooter

#include <CANJaguar.h>
#include <DoubleSolenoid.h>
#include <Talon.h>
#include <ADXL345_I2C.h>

class Shooter
{
public:
    Shooter();
    void toggleClamp();
    void grab(double power);
    void engageClutch();
    void disengageClutch();
    void energize(float speed);
    void fire();
    void move(float angle, float speed);
    void move(float speed);

    
    DoubleSolenoid* clamp;
    DoubleSolenoid* clutch;
    
    Talon* grabber;
    CANJaguar* tilt;
    CANJaguar* wormdrive;
    ADXL345_I2C* accel;
};

#endif