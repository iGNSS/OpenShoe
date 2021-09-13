﻿
/** \file
	\authors John-Olof Nilsson
	\copyright Copyright (c) 2014 OpenShoe, Cre­ative Com­mons Attri­bu­tion 4.0 License
*/

#ifndef CONF_MIMU22BT_H_
#define CONF_MIMU22BT_H_

// SETTINGS BUFFERS
#define LOG2N 8u
#define N (1<<LOG2N)
#define LOG2M 3u
#define M (1<<LOG2M)
#define ZAZU_OFFSET 0
//#define ZAZU_OFFSET (N/2-M/2)

// SQRT TRACKING LIMIT
#define SQRT_TRK_C 2047

// SETTINGS STATIONARITY DETECTION
#define BIT_REDU_F 13u
#define BIT_REDU_G 13u
#define SR 1u
#define G2 67108864u
#define TWOG 16384u
#define TH_ZUPT 1000000u
#define TH_ZARU 1500u

// SETTINGS BIAS EST. AND COMP.
#define NLOG2Q 0
#define LOG2R 20
#define R_BIAS (1<<LOG2R)
#define LOG2PMAX (LOG2R-3)
#define PMAX ((1<<LOG2PMAX)-1)
#define LOG2GS (32-LOG2PMAX)
#define GS (1<<LOG2GS)
#define LOG2BS 5
#define BS (1<<LOG2BS)

#define BIAS_TIME_SCALE (0.003f)
#define RF (0.02f)
#define QF (BIAS_TIME_SCALE*BIAS_TIME_SCALE*RF)

// SETTINGS/CALIBRATION MIMU
#define NR_IMU_SLOTS 32
#define FLOG2_NR_IMU 2u
#define NR_IMUS 4

#define GSCALE (3.24775742e-8f)
#define FSCALE (1.46180391e-7f)

#define ACC_BIAS  { 0, 0, 0 }
#define GYRO_BIAS { 0, 0, 0 }
#define CALIBRATION_MATRIX \
{ \
	{  32768,      0,      0,      0,  32768,      0,      0,      0,  32768,  32768,      0,      0,      0,  32768,      0,      0,      0,  32768 },\
	{      0, -32768,      0, -32768,      0,      0,      0,      0, -32768,      0, -32768,      0, -32768,      0,      0,      0,      0, -32768 },\
	{  32768,      0,      0,      0,  32768,      0,      0,      0,  32768,  32768,      0,      0,      0,  32768,      0,      0,      0,  32768 },\
	{      0, -32768,      0, -32768,      0,      0,      0,      0, -32768,      0, -32768,      0, -32768,      0,      0,      0,      0, -32768 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },\
	{      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 }\
}


#define NR_OF_INITIAL_ALIGNMENT_SAMPLES (N)

#define KALMAN_SIGMA_2_ACC (0.7f*0.7f)
#define KALMAN_SIGMA_2_GYRO (0.017f*0.017f)
#define KALMAN_SIGMA_2_ZUPT (0.1f*0.1f)
#define RESET_COV_THRESHOLD 0.0001f

#endif /* CONF_MIMU22BT_H_ */
