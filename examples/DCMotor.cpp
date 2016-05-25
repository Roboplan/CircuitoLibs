#include <Arduino.h>
#include "DCMotor.h"

DCMotor::DCMotor(const int pin) : m_pin(pin)
{
	pinMode(m_pin, OUTPUT);      // sets the digital pin as output	
	off();                       // default state is off
	m_speed = DEFAULT_SPEED;     // set default speed on load
}

void DCMotor::on()
{
	analogWrite(m_pin, m_speed);
	m_state = true;
}

void DCMotor::off()
{
	digitalWrite(m_pin, 0);
	m_state = false;
}

// Set motor speed
void DCMotor::setSpeed(int speed)
{
	m_speed = speed;
	
	// If already running, update pin
	if (m_state)
	{
		analogWrite(m_pin, m_speed);
	}
}	
