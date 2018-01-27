#include "MoveWinch.h"

MoveWinch::MoveWinch() {
	Requires(winchDrive);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void MoveWinch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveWinch::Execute() {
	double winchValue = oi->getWinchJoystick()->GetY();
	winchDrive -> moveWinch(winchValue);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveWinch::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveWinch::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveWinch::Interrupted() {

}
