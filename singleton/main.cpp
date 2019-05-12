/*
Date: 2019.05.12
Author: Jan
*/

#include "singleton.h"

/*
垃圾回收 在main函数退出时 会调用gc的析构函数
gc的析构函数会删除m_Instance指针
*/
Singleton::GC Singleton::GC::gc; 

int main(int argc,char *argv[])
{
	Singleton *p;
	p = Singleton::GetInstance();
	p = Singleton::GetInstance();
	p = Singleton::GetInstance();

	return 0;
}
