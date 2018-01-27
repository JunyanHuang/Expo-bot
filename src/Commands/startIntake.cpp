#include "startIntake.h"

startIntake::startIntake() {
	Requires(takeIn);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void startIntake::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void startIntake::Execute() {
	intakePressed = oi-> getStartIntake()->Get();

	if(intakePressed == true)
	{
		CommandBase::takeIn->StartIntake();
	}
	else{
		CommandBase::takeIn-> StopIntake();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool startIntake::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void startIntake::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void startIntake::Interrupted() {

}
