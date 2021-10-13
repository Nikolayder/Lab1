/* Automation Studio generated header file */
/* Do not edit ! */
/* MotorCntrl  */

#ifndef _MOTORCNTRL_
#define _MOTORCNTRL_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct FB_Integrator
{
	/* VAR_INPUT (analog) */
	float in;
	/* VAR_OUTPUT (analog) */
	float out;
	/* VAR (analog) */
	float dt;
	float oldval;
} FB_Integrator_typ;

typedef struct FB_Motor
{
	/* VAR_INPUT (analog) */
	float u;
	float Tm;
	/* VAR_OUTPUT (analog) */
	float w;
	float phi;
	/* VAR (analog) */
	struct FB_Integrator integrator1;
	struct FB_Integrator integrator;
	float ke;
	float dt;
} FB_Motor_typ;

typedef struct FB_Regulator
{
	/* VAR (analog) */
	float e;
	float u;
	float k_p;
	float k_i;
	struct FB_Integrator integrator;
	float iyOld;
	float max_abs_value;
	float dt;
} FB_Regulator_typ;

typedef struct FB_Motor1
{
	/* VAR_INPUT (analog) */
	float u;
	float Tm;
	/* VAR_OUTPUT (analog) */
	float w;
	float phi;
	/* VAR (analog) */
	float ke;
	struct FB_Integrator integrator;
	struct FB_Integrator integrator1;
	float dt;
} FB_Motor1_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FB_Integrator(struct FB_Integrator* inst);
_BUR_PUBLIC void FB_Motor(struct FB_Motor* inst);
_BUR_PUBLIC void FB_Regulator(struct FB_Regulator* inst);
_BUR_PUBLIC void FB_Motor1(struct FB_Motor1* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MOTORCNTRL_ */

