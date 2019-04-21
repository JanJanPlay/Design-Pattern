/*
Author:Jan
Date:2019.04.20
*/
#include "bmwkey.h"
#include "vwkey.h"
#include "string.h"
#include "stdio.h"

class SimpleFactory
{
public:
	enum KEY_TYPE{
		BMW_KEY,
		VW_KEY
	};
	SimpleFactory(void){printf("-- Simple Factory --\n");};
	static KeyBase *CreateKey(KEY_TYPE type){
		KeyBase *pkey = NULL;
		switch(type){
			case BMW_KEY:
				pkey = new BmwKey();
			break;
			case VW_KEY:
				pkey = new VwKey();
			break;
		}
		return pkey;
	}
};
