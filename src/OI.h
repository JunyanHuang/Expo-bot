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
	const int LEFT_JOY_PORT = 0;
	const int RIGHT_JOY_PORT = 1;

};

#endif  // OI_H
