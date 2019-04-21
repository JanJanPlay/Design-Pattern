/*
Author: Jan
Date: 2019.04.21
实现了简单工厂 工厂方法 抽象工厂三种工厂模式 
分别通过参数-s -f -a调用
s for simplefactory
f for factorymethod
a for abstractfactory
*/

#include "simplefactory.h"

#include "bmwfactory.h"
#include "vwfactory.h"

#include "bmwkey.h"
#include "vwkey.h"

#include "bmwvehiclefactory.h"
#include "vwvehiclefactory.h"
#include "bmwcar.h"
#include "vwcar.h"

#include "stdio.h"
#include "stdlib.h"

int main(int argc,char *argv[])
{
	if(argc!=2){
		printf("Usage: Simulate [-s|-f|-a]\n");
		exit(1);
	}

	if(!strcmp(argv[1],"-s")){
		//创建工厂
		SimpleFactory *Factory = new SimpleFactory();

		//创建BMW钥匙模拟的实例 实现具体细节
		KeyBase *p = Factory->CreateKey(SimpleFactory::BMW_KEY);
		p->Init();
		p->Detection();
		p->Decode();
		p->Match();
		delete p;

		//创建VW钥匙模拟实例
		KeyBase *q = Factory->CreateKey(SimpleFactory::VW_KEY);
		q->Init();
		q->Detection();
		q->Decode();
		q->Match();
		delete q;

		delete Factory;
	}else if(!strcmp(argv[1],"-f")){
		//新建一个BMW工厂
		IFactory *bmw = new BmwFactory();
		KeyBase *p = bmw->CreateKey();
		p->Init();
		delete bmw;
		delete p;
		//新建一个VW工厂
		IFactory *vw = new VwFactory();
		KeyBase *q = vw->CreateKey();
		q->Init();
		delete vw;
		delete q;
	}else if(!strcmp(argv[1],"-a")){
		AFactory *bmw = new BmwVehicleFactory();
		KeyBase *pkey = bmw->CreateKey();
		pkey->Init();
		CarBase *pcar = bmw->CreateCar();
		pcar->Start();
		delete bmw;
		delete pkey;
		delete pcar;

		AFactory *vw = new VwVehicleFactory();
		KeyBase *qkey = vw->CreateKey();
		qkey->Init();
		CarBase *qcar = vw->CreateCar();
		qcar->Start();
		delete vw;
		delete qkey;
		delete qcar;
	}else{
		printf("para error.\n");
		exit(1);
	}
	return 0;
}
