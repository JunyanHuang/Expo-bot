#include "OI.h"

#include <WPILib.h>

OI::OI()
:leftJoystick(new Joystick(LEFT_JOY_PORT)), rightJoystick(new Joystick(RIGHT_JOY_PORT))
{
	// Process operator interface input here.
}

OI::~OI()
{
	delete rightJoystick;
	delete leftJoystick;
}

Joystick * OI::getLeftJoystick()
{
	return leftJoystick;
}

Joystick * OI::getRightJoystick()
{
	return rightJoystick;
}
