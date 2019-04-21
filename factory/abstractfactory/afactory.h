/*
Author: Jan
Date: 2019.04.21
*/

#ifndef AFACTORY_H
#define AFACTORY_H

#include "keybase.h"
#include "carbase.h"

class AFactory
{
public:
	virtual ~AFactory(void){};
	virtual KeyBase *CreateKey(void)=0;
	virtual CarBase *CreateCar(void)=0;	
};

#endif
