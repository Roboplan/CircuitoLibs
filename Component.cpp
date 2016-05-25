#include <Arduino.h>
#include "Component.h"

// Explain each function and every parameter
Component::Component(const int dataPin, const int enablePin) : m_dataPin(dataPin) , m_enablePin(enablePin)
{
	pinMode(enablePin, OUTPUT);  // sets the digital pin as output	
	off();                       // default state is off
}

// Explain each function and every parameter
void Component::on()
{

}

// Explain each function and every parameter
void Component::off()
{

}

// more functions here