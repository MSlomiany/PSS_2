/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: generacja_kodu.h
 *
 * Code generated for Simulink model 'generacja_kodu'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sat Jul  4 23:30:26 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_generacja_kodu_h_
#define RTW_HEADER_generacja_kodu_h_
#include <string.h>
#ifndef generacja_kodu_COMMON_INCLUDES_
# define generacja_kodu_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* generacja_kodu_COMMON_INCLUDES_ */

#include "generacja_kodu_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S1>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S1>/Discrete-Time Integrator1' */
} DW_generacja_kodu_T;

/* Real-time Model Data Structure */
struct tag_RTM_generacja_kodu_T {
  const char_T * volatile errorStatus;
  DW_generacja_kodu_T *dwork;
};

/* Model entry point functions */
extern void generacja_kodu_initialize(RT_MODEL_generacja_kodu_T *const
  generacja_kodu_M, real_T *generacja_kodu_U_h_zadane, real_T
  *generacja_kodu_U_h, real_T *generacja_kodu_U_teta, real_T *generacja_kodu_U_q,
  real_T *generacja_kodu_U_ROC, real_T *generacja_kodu_Y_serwo);
extern void generacja_kodu_step(RT_MODEL_generacja_kodu_T *const
  generacja_kodu_M, real_T generacja_kodu_U_h_zadane, real_T generacja_kodu_U_h,
  real_T generacja_kodu_U_teta, real_T generacja_kodu_U_q, real_T
  generacja_kodu_U_ROC, real_T *generacja_kodu_Y_serwo);
extern void generacja_kodu_terminate(RT_MODEL_generacja_kodu_T *const
  generacja_kodu_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'generacja_kodu'
 * '<S1>'   : 'generacja_kodu/autopilot'
 * '<S2>'   : 'generacja_kodu/autopilot/Degrees to Radians'
 */
#endif                                 /* RTW_HEADER_generacja_kodu_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
