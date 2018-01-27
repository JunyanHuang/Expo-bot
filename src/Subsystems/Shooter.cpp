#include "shooter.h"
#include "../RobotMap.h"
#include "../Commands/shootBall.h"
Shooter::Shooter():

		frc::Subsystem("Shooter"),
		talonShooter(new CANTalon(1)){


}
Shooter::~Shooter()
{
	delete talonShooter;

}

void Shooter::ShootBall(double ShootSpeed)
{
	talonShooter -> Set(ShootSpeed);

}
void Shooter::ShootStop()
{
	talonShooter -> Set(0);

}
void Shooter::()
{
	SetDefaultCommand(new ShootStop());
};

