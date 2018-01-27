#ifndef shooter_H
#define shooter_H

#include "ctrlib/CANTalon.h"
#include <Commands/Subsystem.h>
#include <WPILib.h>

class shooter : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon * talonShooter;
public:
	shooter();
	void InitDefaultCommand();
	void DoShoot(double speed);
};

#endif  // shooter_H
