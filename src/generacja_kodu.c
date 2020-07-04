/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: generacja_kodu.c
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

#include "generacja_kodu.h"
#include "generacja_kodu_private.h"

/* Model step function */
void generacja_kodu_step(RT_MODEL_generacja_kodu_T *const generacja_kodu_M,
  real_T generacja_kodu_U_h_zadane, real_T generacja_kodu_U_h, real_T
  generacja_kodu_U_teta, real_T generacja_kodu_U_q, real_T generacja_kodu_U_ROC,
  real_T *generacja_kodu_Y_serwo)
{
  DW_generacja_kodu_T *generacja_kodu_DW = ((DW_generacja_kodu_T *)
    generacja_kodu_M->dwork);
  real_T rtb_Sum;
  real_T rtb_Sum2;

  /* Sum: '<S1>/Sum' incorporates:
   *  Inport: '<Root>/h'
   *  Inport: '<Root>/h_zadane'
   */
  rtb_Sum = generacja_kodu_U_h_zadane - generacja_kodu_U_h;

  /* Sum: '<S1>/Sum2' incorporates:
   *  DiscreteIntegrator: '<S1>/Discrete-Time Integrator'
   *  Gain: '<S1>/Gain'
   *  Gain: '<S1>/Gain2'
   *  Gain: '<S2>/Gain1'
   *  Inport: '<Root>/ROC'
   *  Inport: '<Root>/teta'
   *  Sum: '<S1>/Sum1'
   */
  rtb_Sum2 = ((3.0181E-6 * rtb_Sum +
               generacja_kodu_DW->DiscreteTimeIntegrator_DSTATE) + 1.3566E-5 *
              generacja_kodu_U_ROC) * 0.017453292519943295 -
    generacja_kodu_U_teta;

  /* Outport: '<Root>/serwo' incorporates:
   *  DiscreteIntegrator: '<S1>/Discrete-Time Integrator1'
   *  Gain: '<S1>/Gain3'
   *  Gain: '<S1>/Gain5'
   *  Inport: '<Root>/q'
   *  Sum: '<S1>/Sum3'
   *  Sum: '<S1>/Sum4'
   */
  *generacja_kodu_Y_serwo = (-10.2433 * rtb_Sum2 +
    generacja_kodu_DW->DiscreteTimeIntegrator1_DSTATE) - -0.73308 *
    generacja_kodu_U_q;

  /* Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S1>/Gain1'
   */
  generacja_kodu_DW->DiscreteTimeIntegrator_DSTATE += 0.0002204 * rtb_Sum *
    0.001;

  /* Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' incorporates:
   *  Gain: '<S1>/Gain4'
   */
  generacja_kodu_DW->DiscreteTimeIntegrator1_DSTATE += -32.0531 * rtb_Sum2 *
    0.001;
}

/* Model initialize function */
void generacja_kodu_initialize(RT_MODEL_generacja_kodu_T *const generacja_kodu_M,
  real_T *generacja_kodu_U_h_zadane, real_T *generacja_kodu_U_h, real_T
  *generacja_kodu_U_teta, real_T *generacja_kodu_U_q, real_T
  *generacja_kodu_U_ROC, real_T *generacja_kodu_Y_serwo)
{
  DW_generacja_kodu_T *generacja_kodu_DW = ((DW_generacja_kodu_T *)
    generacja_kodu_M->dwork);

  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)generacja_kodu_DW, 0,
                sizeof(DW_generacja_kodu_T));

  /* external inputs */
  *generacja_kodu_U_h_zadane = 0.0;
  *generacja_kodu_U_h = 0.0;
  *generacja_kodu_U_teta = 0.0;
  *generacja_kodu_U_q = 0.0;
  *generacja_kodu_U_ROC = 0.0;

  /* external outputs */
  (*generacja_kodu_Y_serwo) = 0.0;
}

/* Model terminate function */
void generacja_kodu_terminate(RT_MODEL_generacja_kodu_T *const generacja_kodu_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(generacja_kodu_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
