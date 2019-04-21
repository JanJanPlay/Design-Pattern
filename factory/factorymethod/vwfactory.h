/*
Author: Jan
Date: 2019.04.21
*/

#ifndef VW_FACTORY_H
#define VW_FACTORY_H

#include "vwkey.h"
#include "stdio.h"

//vm工厂生产vm钥匙过程
class VwFactory : public IFactory
{
public:
	VwFactory(void){printf("-- VW Factory --\n");}
	KeyBase *CreateKey(void){
		return new VwKey();
	}
};

#endif
