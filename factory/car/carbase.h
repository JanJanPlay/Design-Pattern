/*
Author: Jan
Date: 2019.04.21
*/

#ifndef CAR_BASE_H
#define CAR_BASE_H

class CarBase
{
public:
	virtual ~CarBase(void){};
	virtual void Start(void)=0;
};

#endif
