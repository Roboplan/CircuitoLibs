#ifndef _LED_H
#define _LED_H

#include "Switchable.h"

class LED : public Switchable
{
	public:
		LED(const int pin);
};

#endif //__LED_H
