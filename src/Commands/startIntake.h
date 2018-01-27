#ifndef startIntake_H
#define startIntake_H
#include <WPILib.h>
#include "CommandBase.h"
#include "Subsystems/Intake.h"
#include "OI.h"

class startIntake : public CommandBase {
public:
	startIntake();
	~startIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool intakePressed;

};

#endif  // startIntake_H
