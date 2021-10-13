
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	if (Enable == 1) 
	{
		speed = 100;
	}
	if (Enable == 0)
	{
		speed = 0;
	}
	t = t + 0.01;
	fb_regulator.e = speed - fb_motor.w;
	FB_Regulator(&fb_regulator);
	fb_motor.u = fb_regulator.u;
	FB_Motor(&fb_motor);
	
	FB_Motor1(&fb_motor1);
	fb_motor1.u = speed - fb_motor1.w;
	
	if ((t > 2)){
		Enable = !Enable;
		t = 0;
	}
}
