#ifndef OI_H
#define OI_H
#include <WPILib.h>
#include "ctrlib/CANTalon.h"

class OI {
public:
	OI();
	~OI();
	Joystick * getRightJoystick();
	Joystick * getLeftJoystick();
	Joystick * getWinchJoystick();
	Button * getStartIntake();
	Button * getStopIntake();

private:
	Joystick * leftJoystick;
	Joystick * rightJoystick;
	Joystick * winchJoystick;
	Button * ShooterButton;
	Button * StartIntake;
	Button * StopIntake;
	const int LEFT_JOY_PORT = 0;
	const int RIGHT_JOY_PORT = 0;
};

#endif  // OI_H
