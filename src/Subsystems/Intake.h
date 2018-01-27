#ifndef Intake_H
#define Intake_H
#include <WPILib.h>
#include <Commands/Subsystem.h>
#include "ctrlib/CANTalon.h"
#include "Commands/startIntake.h"

class Intake : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* talonIntaker;
public:
	Intake();
	~Intake();
	void InitDefaultCommand();
	void StartIntake();
	void StopIntake();
};

#endif  // Intake_H
