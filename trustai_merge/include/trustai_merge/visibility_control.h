#ifndef TRUSTAI_MERGE__VISIBILITY_CONTROL_H_
#define TRUSTAI_MERGE__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TRUSTAI_MERGE_EXPORT __attribute__ ((dllexport))
    #define TRUSTAI_MERGE_IMPORT __attribute__ ((dllimport))
  #else
    #define TRUSTAI_MERGE_EXPORT __declspec(dllexport)
    #define TRUSTAI_MERGE_IMPORT __declspec(dllimport)
  #endif
  #ifdef TRUSTAI_MERGE_BUILDING_LIBRARY
    #define TRUSTAI_MERGE_PUBLIC TRUSTAI_MERGE_EXPORT
  #else
    #define TRUSTAI_MERGE_PUBLIC TRUSTAI_MERGE_IMPORT
  #endif
  #define TRUSTAI_MERGE_PUBLIC_TYPE TRUSTAI_MERGE_PUBLIC
  #define TRUSTAI_MERGE_LOCAL
#else
  #define TRUSTAI_MERGE_EXPORT __attribute__ ((visibility("default")))
  #define TRUSTAI_MERGE_IMPORT
  #if __GNUC__ >= 4
    #define TRUSTAI_MERGE_PUBLIC __attribute__ ((visibility("default")))
    #define TRUSTAI_MERGE_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TRUSTAI_MERGE_PUBLIC
    #define TRUSTAI_MERGE_LOCAL
  #endif
  #define TRUSTAI_MERGE_PUBLIC_TYPE
#endif
#endif  // TRUSTAI_MERGE__VISIBILITY_CONTROL_H_
// Generated 13-Nov-2023 19:11:41
// Copyright 2019-2020 The MathWorks, Inc.
