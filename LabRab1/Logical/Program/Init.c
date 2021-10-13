
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	t = 0;
	fb_regulator.k_i = 0.16;
	fb_regulator.k_p = 0.0064;
	fb_motor.dt = 0.01;
	fb_motor.Tm = 0.004;
	fb_motor.ke = 0.0002;
	fb_regulator.dt = 0.01;
	fb_regulator.e = 0;
	fb_regulator.max_abs_value = 300;
	fb_motor1.u = 0;
	fb_motor1.dt = 0.01;
	fb_motor1.Tm = 0.01;
	fb_motor1.ke = 0.2;
	Enable  = 1;
}
