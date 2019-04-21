#ifndef BMW_KEY_H
#define BMW_KEY_H

#include "keybase.h"

class BmwKey : public KeyBase
{
public:
//	~BmwKey(void);
	void Init(void);
	void Detection(void);
	void Decode(void);
	void Match(void);
private:
	void Hitag2Algorithm(void);
	void Hitag2Send(char *data);
};

#endif 
