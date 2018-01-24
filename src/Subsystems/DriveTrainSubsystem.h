#ifndef DriveTrainSubsystem_H
#define DriveTrainSubsystem_H

#include <WPILib.h>
#include <Commands/Subsystem.h>

class DriveTrainSubsystem : public frc::Subsystem {
private:
	Talon* leftTalon;
	Talon* rightTalon;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	DriveTrainSubsystem();
	~DriveTrainSubsystem();
	void tankDrive(double leftVal, double rightVal);
	void InitDefaultCommand();
};

#endif  // DriveTrainSubsystem_H
