#ifndef drive_H
#define drive_H

#include <WPILib.h>
#include "CommandBase.h"

class drive : public CommandBase {
public:
	drive();
	~drive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // drive_H
