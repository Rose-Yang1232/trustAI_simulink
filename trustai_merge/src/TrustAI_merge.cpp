//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: TrustAI_merge.cpp
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
#include "TrustAI_merge.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "TrustAI_merge_types.h"

// Block signals (default storage)
B_TrustAI_merge_T TrustAI_merge_B;

// Block states (default storage)
DW_TrustAI_merge_T TrustAI_merge_DW;

// Real-time model
RT_MODEL_TrustAI_merge_T TrustAI_merge_M_ = RT_MODEL_TrustAI_merge_T();
RT_MODEL_TrustAI_merge_T *const TrustAI_merge_M = &TrustAI_merge_M_;

// Model step function
void TrustAI_merge_step(void)
{
  SL_Bus_TrustAI_merge_std_msgs_Float64 b_varargout_2;
  SL_Bus_TrustAI_merge_std_msgs_Float64 rtb_BusAssignment;
  real_T u0;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S5>/SourceBlock'
  b_varargout_1 = Sub_TrustAI_merge_9.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  // Start for MATLABSystem: '<S5>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S7>/In1'
    TrustAI_merge_B.In1 = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_TrustAI_merge_1.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S6>/Enable'

  // Start for MATLABSystem: '<S4>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S6>/In1'
    TrustAI_merge_B.In1_m = b_varargout_2;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/MATLAB Function' incorporates:
  //   Memory: '<Root>/Memory'
  //   SignalConversion generated from: '<Root>/Bus Selector2'

  if (!(TrustAI_merge_DW.Memory_PreviousInput != -1.0)) {
    TrustAI_merge_DW.Memory_PreviousInput = TrustAI_merge_B.In1.Data * 0.8;
  }

  // MinMax: '<Root>/Min' incorporates:
  //   Constant: '<Root>/Constant'
  //   SignalConversion generated from: '<Root>/Bus Selector'

  if ((TrustAI_merge_B.In1_m.Data <= TrustAI_merge_P.Constant_Value_k) ||
      rtIsNaN(TrustAI_merge_P.Constant_Value_k)) {
    u0 = TrustAI_merge_B.In1_m.Data;
  } else {
    u0 = TrustAI_merge_P.Constant_Value_k;
  }

  // MATLAB Function: '<Root>/MATLAB Function' incorporates:
  //   MinMax: '<Root>/Min'
  //   SignalConversion generated from: '<Root>/Bus Selector2'

  u0 = (u0 - 3.0 * TrustAI_merge_B.In1.Data) * 0.01 +
    (TrustAI_merge_DW.Memory_PreviousInput - TrustAI_merge_B.In1.Data) * 0.3;

  // Saturate: '<Root>/Saturation'
  if (u0 > TrustAI_merge_P.Saturation_UpperSat) {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = TrustAI_merge_P.Saturation_UpperSat;
  } else if (u0 < TrustAI_merge_P.Saturation_LowerSat) {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = TrustAI_merge_P.Saturation_LowerSat;
  } else {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = u0;
  }

  // End of Saturate: '<Root>/Saturation'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_TrustAI_merge_23.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void TrustAI_merge_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_1[19];
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_0[11];
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_4[19] = "/car/state/sim_acc";

    // InitializeConditions for Memory: '<Root>/Memory'
    TrustAI_merge_DW.Memory_PreviousInput =
      TrustAI_merge_P.Memory_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S7>/In1' incorporates:
    //   Outport: '<S7>/Out1'

    TrustAI_merge_B.In1 = TrustAI_merge_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    TrustAI_merge_DW.obj_d.matlabCodegenIsDeleted = false;
    TrustAI_merge_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_TrustAI_merge_9.createSubscriber(&b_zeroDelimTopic[0], 1);
    TrustAI_merge_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S6>/In1' incorporates:
    //   Outport: '<S6>/Out1'

    TrustAI_merge_B.In1_m = TrustAI_merge_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    TrustAI_merge_DW.obj_n.matlabCodegenIsDeleted = false;
    TrustAI_merge_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_TrustAI_merge_1.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    TrustAI_merge_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    TrustAI_merge_DW.obj.matlabCodegenIsDeleted = false;
    TrustAI_merge_DW.obj.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Pub_TrustAI_merge_23.createPublisher(&b_zeroDelimTopic_1[0], 1);
    TrustAI_merge_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void TrustAI_merge_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!TrustAI_merge_DW.obj_d.matlabCodegenIsDeleted) {
    TrustAI_merge_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!TrustAI_merge_DW.obj_n.matlabCodegenIsDeleted) {
    TrustAI_merge_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!TrustAI_merge_DW.obj.matlabCodegenIsDeleted) {
    TrustAI_merge_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
