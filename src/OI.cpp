#include "OI.h"
#include <WPILib.h>

OI::OI()
:leftJoystick(new Joystick(0)), rightJoystick(new Joystick(1))
{
	// Process operator interface input here.
}

OI::~OI()
{
	delete leftJoystick;
	delete rightJoystick;
}

Joystick * OI::getLeftJoystick()
{
	return leftJoystick;
}

Joystick * OI::getRightJoystick()
{
	return rightJoystick;
}
