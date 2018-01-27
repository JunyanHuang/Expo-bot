#ifndef MoveWinch_H
#define MoveWinch_H
#include "../CommandBase.h"
#include <WPILib.h>
#include "Subsystems/Winch.h"
#include "OI.h"

class MoveWinch : public CommandBase {
public:
	MoveWinch();
	~MoveWinch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MoveWinch_H
