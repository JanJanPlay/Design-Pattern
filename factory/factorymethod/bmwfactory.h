/*
Author: Jan
Date: 2019.04.21
*/

#ifndef BMW_FACTORY_H
#define BMW_FACTORY_H

#include "ifactory.h"
#include "bmwkey.h"
#include "stdio.h"

class BmwFactory : public IFactory
{
public:
	BmwFactory(void){printf("-- BMW Factory --\n");}
	KeyBase *CreateKey(void){
		return new BmwKey();
	}
};

#endif

