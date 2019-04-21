/*
Author: Jan
Date: 2019.04.21
*/

#ifndef BMW_VEHICLE_FACTORY_H
#define BMW_VEHICLE_FACTORY_H

#include "afactory.h"
#include "bmwcar.h"
#include "bmwkey.h"
#include "stdio.h"

class BmwVehicleFactory : public AFactory
{
public:
	BmwVehicleFactory(void){printf("-- BMW Vehicle Factory --\n");}
	KeyBase *CreateKey(void){
		printf("Bmw Vehicle Factory create a Key\n");
		return new BmwKey();
	}
	CarBase *CreateCar(void){
		printf("Bmw Vehicle Factory create a Car\n");
		return new BmwCar();
	}
};

#endif
