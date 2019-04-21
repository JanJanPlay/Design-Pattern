/*
Author: Jan
Date: 2019.04.21
*/

#ifndef VW_VEHICLE_FACTORY_H
#define VW_VEHICLE_FACTORY_H

#include "afactory.h"
#include "vwcar.h"
#include "vwkey.h"
#include "stdio.h"

class VwVehicleFactory : public AFactory
{
public:
	VwVehicleFactory(void){printf("-- VW Vehicle Factory --\n");}
	KeyBase *CreateKey(void){
		printf("Vw Vehicle Factory create a key\n");
		return new VwKey();
	}
	CarBase *CreateCar(void){
		printf("Vw Vehicle Factory create a car\n");
		return new VwCar();
	}
};

#endif

