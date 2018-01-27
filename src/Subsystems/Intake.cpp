#include "Intake.h"
#include "../RobotMap.h"
#include <WPILib.h>
Intake::Intake() : Subsystem("Intake"), talonIntaker(new CANTalon(5)) {

}
Intake::~Intake() {
	delete talonIntaker;
}
void Intake::InitDefaultCommand() {
	SetDefaultCommand(new startIntake());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}
void Intake::StartIntake() {
	talonIntaker->Set(0.6);
}

void Intake::StopIntake() {
	talonIntaker->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
