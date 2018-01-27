#include "Winch.h"
#include "../RobotMap.h"

Winch::Winch() :
	frc::Subsystem("Winch"),
	talonWinch(new CANTalon(4)) {

}
Winch::~Winch(){
	delete talonWinch;
}
void Winch::moveWinch(double winchValue) {
	talonWinch -> Set(winchValue);
}
void Winch::InitDefaultCommand() {
	SetDefaultCommand(new MoveWinch());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
