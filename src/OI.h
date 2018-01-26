#ifndef OI_H
#define OI_H
#include <WPILib.h>

class OI {
public:
	OI();
	~OI();
	Joystick * getRightJoystick();
	Joystick * getLeftJoystick();

private:
	Joystick * leftJoystick;
	Joystick * rightJoystick;

};

#endif  // OI_H
