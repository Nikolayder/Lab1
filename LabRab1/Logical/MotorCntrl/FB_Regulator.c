
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
void FB_Regulator(struct FB_Regulator* inst)
{
	REAL temp;
	temp = inst->e * inst->k_i * inst->dt;
	temp+=inst->iyOld;
	inst->integrator.in = temp;
	inst->integrator.dt = inst->dt;
	FB_Integrator(&inst->integrator);
	
	if (inst->e * inst->k_p > inst->max_abs_value)
	{
		temp = inst->integrator.out + inst->max_abs_value;
	}
	if (inst->e * inst->k_p < inst->max_abs_value)
	{
		temp = inst->integrator.out + inst->e * inst->k_p;
	}
	if (temp > inst->max_abs_value)
	{
		inst->u = inst->max_abs_value;
		inst->iyOld = temp - inst->max_abs_value;
	}
	else 
	{
		inst->u = temp;
		inst->iyOld = 0;
	} 
	
}
