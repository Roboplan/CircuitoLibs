#ifndef POTENTIOMETER
#define POTENTIOMETER

#include "AnalogReader.h"

class Potentiometer : public AnalogReader
{
	public:
		Potentiometer(int pin);

};
#endif //POTENTIOMETER
