#include "CommandBase.h"

#include <Commands/Scheduler.h>
#include <WPILib.h>

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
std::unique_ptr<OI> CommandBase::oi = nullptr;
DriveTrainSubsystem * CommandBase::Drive = nullptr;
Winch * CommandBase::winchDrive = nullptr;
Shooter * CommandBase::ballShooter = nullptr;
Intake * CommandBase::takeIn =nullptr;

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}
void CommandBase::initialize()
{
	takeIn = new Intake();
	Drive = new DriveTrainSubsystem();
	oi = std::make_unique<OI>();
	winchDrive = new Winch();
	ballShooter = new Shooter();
}
