/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/11/2020 01:16 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	MultiStateBtnType HeightBtnState;

	(void)Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	
	if(HeightBtnState == MULTI_STATE_BTN_MINUS)
	{
		(void)Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
	}
	else if(HeightBtnState == MULTI_STATE_BTN_PLUS)
	{
		(void)Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	}
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	MultiStateBtnType InclineBtnState;

	(void)Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	
	if(InclineBtnState == MULTI_STATE_BTN_MINUS)
	{
		(void)Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
	}
	else if(InclineBtnState == MULTI_STATE_BTN_PLUS)
	{
		(void)Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
	}
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	MultiStateBtnType SlideBtnState;

	(void)Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	
	if(SlideBtnState == MULTI_STATE_BTN_MINUS)
	{
		(void)Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	}
	else if(SlideBtnState == MULTI_STATE_BTN_PLUS)
	{
		(void)Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	}
}

