/*
Date: 2019.05.12
Authot: Jan
*/

#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton *GetInstance(void);
	~Singleton(void);
private:
	Singleton(void);
	static Singleton *m_Instance;
	class GC
	{
	public:
		~GC(void);
		static GC gc;
	};
};

#endif
