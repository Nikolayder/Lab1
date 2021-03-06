
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "MotorCntrl.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Motor1(struct FB_Motor1* inst)
{
	REAL temp;
	temp = inst->u / inst->ke;
	temp = temp - inst->w;
	temp = temp * inst->dt / inst->Tm;
	inst->integrator.in = temp;
	inst->integrator.dt = inst->dt;
	inst->integrator1.dt = inst->dt;
	FB_Integrator(&inst->integrator);
	temp = inst->integrator.out;
	inst->w = temp;
	temp = inst->w;
	inst->integrator1.in = temp;
	FB_Integrator(&inst->integrator1);
	inst->phi = inst->integrator1.out;
}
