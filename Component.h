#ifndef _COMPONENT_H_
#define _COMPONENT_H_

/****************************
 * Component
 * 
 * Describe what the component does
 * Describe what functions this library supports
 * 
 * 
 * 
 ****************************/

// Only if needed
#include "TransactionalSPI.h"

const int SOME_CONST1 = 255;
const int SOME_CONST2 = 255;

class Component {

	public:
		Component(const int dataPin, const int enablePin);
		void on();
		void off();
		void setSomething(int value);
	private:
		const int m_dataPin;
		const int m_enablePin;
		int m_var1;
		bool m_var2;
};

#endif // _COMPONENT_H_
