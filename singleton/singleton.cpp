#include "singleton.h"
#include <iostream>
using namespace std;

/*
定义为private 的static变量和内部类可以通过作用域运算符::来指定
*/
Singleton *Singleton::m_Instance = NULL;

Singleton::Singleton(void)
{
	return;
}
 
Singleton::~Singleton(void)
{
	if(m_Instance){
		/*此处不能调用delete m_Instance 否则会出现段错误*/
		cout << "delete" << endl;
	}
	cout << "~Singleton()" << endl;
	return;
}

Singleton *Singleton::GetInstance(void)
{
	if(m_Instance==NULL){
		cout << "Create new Instance." << endl;
		m_Instance = new Singleton();
		return m_Instance;
	}
	cout << "Instance has already exist." << endl;
	return m_Instance;
}

Singleton::GC::~GC(void)
{
	if(m_Instance!=NULL){
		delete m_Instance;
		m_Instance = NULL;
		cout << "GC delete m_Instance." << endl;
	}
}
