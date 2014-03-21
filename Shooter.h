#ifndef shooter
#define shooter

#include <CANJaguar.h>
#include <DoubleSolenoid.h>
#include <Talon.h>
#include <ADXL345_I2C.h>
#include <AnalogChannel.h>

class Shooter
{
enum clampPos{
    UP,
    DOWN
};
public:
    Shooter();
    void toggleClamp();
    void grab();
    void repel();
    void stopRollers()
    void engageClutch();
    void disengageClutch();
    void energize(float speed);
    void fire();
    void move(float angle, float speed);
    void move(float speed);
    void clampUp();
    void clampDown();
    
    static const float POWER = 0.6;

    clampPos position;
    
    DoubleSolenoid* clamp;
    DoubleSolenoid* clutch;
    
    AnalogChannel* infared;
    
    Talon* grabber;
    CANJaguar* tilt;
    CANJaguar* wormdrive;
    ADXL345_I2C* accel;
};

#endif
