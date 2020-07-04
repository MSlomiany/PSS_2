/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "generacja_kodu.h"            /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL_generacja_kodu_T generacja_kodu_M_;
static RT_MODEL_generacja_kodu_T *const generacja_kodu_MPtr = &generacja_kodu_M_;/* Real-time model */
static DW_generacja_kodu_T generacja_kodu_DW;/* Observable states */

/* '<Root>/h_zadane' */
static real_T generacja_kodu_U_h_zadane;

/* '<Root>/h' */
static real_T generacja_kodu_U_h;

/* '<Root>/teta' */
static real_T generacja_kodu_U_teta;

/* '<Root>/q' */
static real_T generacja_kodu_U_q;

/* '<Root>/ROC' */
static real_T generacja_kodu_U_ROC;

/* '<Root>/serwo' */
static real_T generacja_kodu_Y_serwo;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_generacja_kodu_T *const generacja_kodu_M);
void rt_OneStep(RT_MODEL_generacja_kodu_T *const generacja_kodu_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(generacja_kodu_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */
  /*
    Tutaj przypisujemy zmiennym wartości z czujników
    np.
    generacja_kodu_U_teta = pomiar_z_czujnika_teta;
  */

  /* Step the model */
  generacja_kodu_step(generacja_kodu_M, generacja_kodu_U_h_zadane,
                      generacja_kodu_U_h, generacja_kodu_U_teta,
                      generacja_kodu_U_q, generacja_kodu_U_ROC,
                      &generacja_kodu_Y_serwo);

  /* Get model outputs here */
  /*
    Tutaj przypisujemy wartość wychylenia mechanizmu wykonawczego do podpiętego serwa
    czyli zadajemy sygnał pwm o odpowiednim wypełnieniu
    PWM(pin,wypełnienie)
    PWM(pin,generacja_kodu_Y_serwo)
  */


  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL_generacja_kodu_T *const generacja_kodu_M = generacja_kodu_MPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  generacja_kodu_M->dwork = &generacja_kodu_DW;

  /* Initialize model */
  generacja_kodu_initialize(generacja_kodu_M, &generacja_kodu_U_h_zadane,
    &generacja_kodu_U_h, &generacja_kodu_U_teta, &generacja_kodu_U_q,
    &generacja_kodu_U_ROC, &generacja_kodu_Y_serwo);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.001 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(generacja_kodu_M);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(generacja_kodu_M) == (NULL)) {
    /*  Perform other application tasks here */
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  generacja_kodu_terminate(generacja_kodu_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
