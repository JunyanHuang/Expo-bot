#ifndef Winch_H
#define Winch_H

#include <Commands/Subsystem.h>
#include <ctrlib/CANTalon.h>
#include <Commands/MoveWinch.h>

class Winch : public Subsystem {
private:
	CANTalon * talonWinch;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Winch();
	~Winch();
	void moveWinch(double winchvalue);
	void InitDefaultCommand();
};

#endif  // Winch_H
