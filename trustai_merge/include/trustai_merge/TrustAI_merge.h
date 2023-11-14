//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: TrustAI_merge.h
//
// Code generated for Simulink model 'TrustAI_merge'.
//
// Model version                  : 1.3
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Mon Nov 13 19:11:34 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_TrustAI_merge_h_
#define RTW_HEADER_TrustAI_merge_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "TrustAI_merge_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_TrustAI_merge_T {
  SL_Bus_TrustAI_merge_std_msgs_Float64 In1;// '<S7>/In1'
  SL_Bus_TrustAI_merge_std_msgs_Float64 In1_m;// '<S6>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_TrustAI_merge_T {
  ros_slroscpp_internal_block_P_T obj; // '<S3>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S5>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S4>/SourceBlock'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
};

// Parameters (default storage)
struct P_TrustAI_merge_T_ {
  SL_Bus_TrustAI_merge_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S1>/Constant'

  SL_Bus_TrustAI_merge_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                                   //  Referenced by: '<S6>/Out1'

  SL_Bus_TrustAI_merge_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                            //  Referenced by: '<S4>/Constant'

  SL_Bus_TrustAI_merge_std_msgs_Float64 Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                     //  Referenced by: '<S7>/Out1'

  SL_Bus_TrustAI_merge_std_msgs_Float64 Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                            //  Referenced by: '<S5>/Constant'

  real_T Memory_InitialCondition;      // Expression: -1
                                          //  Referenced by: '<Root>/Memory'

  real_T Constant_Value_k;             // Expression: 50
                                          //  Referenced by: '<Root>/Constant'

  real_T Saturation_UpperSat;          // Expression: 0.5
                                          //  Referenced by: '<Root>/Saturation'

  real_T Saturation_LowerSat;          // Expression: -0.5
                                          //  Referenced by: '<Root>/Saturation'

};

// Real-time Model Data Structure
struct tag_RTM_TrustAI_merge_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_TrustAI_merge_T TrustAI_merge_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_TrustAI_merge_T TrustAI_merge_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_TrustAI_merge_T TrustAI_merge_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void TrustAI_merge_initialize(void);
  extern void TrustAI_merge_step(void);
  extern void TrustAI_merge_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_TrustAI_merge_T *const TrustAI_merge_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'TrustAI_merge'
//  '<S1>'   : 'TrustAI_merge/Blank Message'
//  '<S2>'   : 'TrustAI_merge/MATLAB Function'
//  '<S3>'   : 'TrustAI_merge/Publish'
//  '<S4>'   : 'TrustAI_merge/Subscribe'
//  '<S5>'   : 'TrustAI_merge/Subscribe1'
//  '<S6>'   : 'TrustAI_merge/Subscribe/Enabled Subsystem'
//  '<S7>'   : 'TrustAI_merge/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_TrustAI_merge_h_

//
// File trailer for generated code.
//
// [EOF]
//
