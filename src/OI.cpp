#include "OI.h"
#include <WPILib.h>

OI::OI()
:leftJoystick(new Joystick(0)), rightJoystick(new Joystick(1)), winchJoystick(new Joystick (5))
{
	ShooterButton = new JoystickButton(rightJoystick, 1);// Process operator interface input here.
}

OI::~OI()
{
	delete leftJoystick;
	delete rightJoystick;
	delete ShooterButton;
	delete winchJoystick;
	delete StartIntake;
	delete StopIntake;
}

Joystick * OI::getLeftJoystick()
{
	return leftJoystick;
}

Joystick * OI::getRightJoystick()
{
	return rightJoystick;
}
Joystick * OI::getWinchJoystick()
{
	return winchJoystick;

}
Button * OI::getStartIntake()
{
	return StartIntake;
}
Button * OI::getStopIntake()
{
	return StopIntake;
}
