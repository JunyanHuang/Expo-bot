#include "DriveTrainSubsystem.h"
#include "../RobotMap.h"
#include "Robot.cpp"
#include <WPILib.h>

DriveTrainSubsystem::DriveTrainSubsystem() :
frc::Subsystem("DriveTrainSubsystem"),
leftTalon(new Talon(0)),
rightTalon(new Talon(1))
{

}
DriveTrainSubsystem::~DriveTrainSubsystem()
{
	delete leftTalon;
	delete rightTalon;
}

void DriveTrainSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new drive());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void DriveTrainSubsystem::tankDrive(double leftVal, double rightVal)
{
	leftTalon->Set(leftVal);
	rightTalon->Set(rightVal);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
