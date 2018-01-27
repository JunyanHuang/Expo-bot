#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>
#include "Subsystems/Winch.h"
#include <Commands/Command.h>
#include "Subsystems/DriveTrainSubsystem.h"
#include "Subsystems/Shooter.h"
#include "OI.h"
#include "Subsystems/Intake.h"
/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public frc::Command {
public:
	CommandBase(const std::string& name);
	void initialize();
	CommandBase() = default;

	// Create a single static instance of all of your subsystems
	static DriveTrainSubsystem* Drive;
	static std::unique_ptr<OI> oi;
	static Winch * winchDrive;
	static Shooter * ballShooter;
	static Intake * takeIn;

};

#endif  // COMMAND_BASE_H
