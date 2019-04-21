/*
Author: Jan
Date: 2019.04.20
*/
#ifndef KEY_BASE_H
#define KEY_BASE_H

class KeyBase
{
public:
	virtual ~KeyBase(void){};
	virtual void Init(void)=0;
	virtual void Detection(void)=0;
	virtual void Decode(void)=0;
	virtual void Match(void)=0;
};

#endif
