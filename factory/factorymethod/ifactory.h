/*
Author: Jan
Date: 2019.04.21
*/

#ifndef IFACTORY_H
#define IFACTORY_H

#include "keybase.h"

//工厂方法模式中的抽象工厂 所有的工厂都继承此类
class IFactory
{
public:
	//定义虚析构函数 子类调用自己的西沟函数 清理申请的资源
	virtual ~IFactory(void){};
	//所有子类工厂都需要实现这个借口 一个工厂生产一个钥匙流程
	virtual KeyBase *CreateKey(void)=0;
};

#endif

