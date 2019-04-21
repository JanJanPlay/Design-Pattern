#ifndef VW_KEY_H
#define VW_KEY_H

#include "keybase.h"

class VwKey : public KeyBase
{
public:
//	~VwKey(void);
	void Init(void);
	void Detection(void);
	void Decode(void);
	void Match(void);
private:
	void MegamosAlgorithm(void);
};

#endif
