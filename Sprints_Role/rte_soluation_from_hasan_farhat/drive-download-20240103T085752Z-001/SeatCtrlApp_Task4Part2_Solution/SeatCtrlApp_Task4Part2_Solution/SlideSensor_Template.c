/**
 *
 * \file SlideSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/15/2020 12:14 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SlideSensor.h"


/**
 *
 * Runnable SlideSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideSensor_GetPosition
 *
 */

void SlideSensor_GetPosition (SensorPositionType* Position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType position;

	/* Server Call Points */
	status = Rte_Call_rpIOGetSlide_IOGet(&position);
	
}

