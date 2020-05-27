/***********************************************************************
 * Module:  Operation.cpp
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Wednesday, May 27, 2020 1:05:54 AM
 * Purpose: Implementation of the class Operation
 ***********************************************************************/

#include "Process.h"
#include "Operation.h"
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
// Name:       Operation::getNumA()
// Purpose:    Implementation of Operation::getNumA()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operation::getNumA(void)
{
   return numA;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::setNumA(float newNumA)
// Purpose:    Implementation of Operation::setNumA()
// Parameters:
// - newNumA
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::setNumA(float newNumA)
{
   numA = newNumA;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::getDenB()
// Purpose:    Implementation of Operation::getDenB()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operation::getDenB(void)
{
   return denB;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::setDenB(float newDenB)
// Purpose:    Implementation of Operation::setDenB()
// Parameters:
// - newDenB
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::setDenB(float newDenB)
{
   denB = newDenB;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::getNumC()
// Purpose:    Implementation of Operation::getNumC()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operation::getNumC(void)
{
   return numC;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::setNumC(float newNumC)
// Purpose:    Implementation of Operation::setNumC()
// Parameters:
// - newNumC
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::setNumC(float newNumC)
{
   numC = newNumC;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::getNumD()
// Purpose:    Implementation of Operation::getNumD()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operation::getDenD(void)
{
   return denD;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::setDenD(float newDenD)
// Purpose:    Implementation of Operation::setDenD()
// Parameters:
// - newDenD
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operation::setDenD(float newDenD)
{
   denD = newDenD;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operation::Operation()
// Purpose:    Implementation of Operation::Operation()
// Return:     
////////////////////////////////////////////////////////////////////////

Operation::Operation()
{
   process = NULL;
}
