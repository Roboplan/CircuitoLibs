#include "ADXL345.h"

ADXL345::ADXL345(int csPin) : m_SPI(csPin, 400000, MSBFIRST, SPI_MODE3)
{
	dataForamt(); 	//set it to -+4g range as default
	powerControl(); //set it to measure mode as default
}

void ADXL345::update()
{
	m_SPI.begin();
	m_SPI.transfer(dataRegister | TRIGGER_MODE); //start reading from DATAX0 with stream mode(0x40)
	
	//reading and put the value in the right place
	x =  (int)m_SPI.transfer(0xFF);
	x |= ((int)m_SPI.transfer(0xFF)<<8);
	y =  (int)m_SPI.transfer(0xFF);
	y |= ((int)m_SPI.transfer(0xFF)<<8);
	z =  (int)m_SPI.transfer(0xFF);
	z |= ((int)m_SPI.transfer(0xFF)<<8);
	
	m_SPI.end();
}

//to consider create write register function instead of copy write register code each time.

void ADXL345::powerControl(char option) //Change the ADXL345 power control by changing POWER_CTL register
{ 
	m_SPI.begin();
	m_SPI.transfer(powerCTL);
	m_SPI.transfer(option);
	m_SPI.end();
}

void ADXL345::dataForamt(char option) //Change the ADXL345 power control by changing POWER_CTL register
{
	m_SPI.begin();
	m_SPI.transfer(dataFormat);
	m_SPI.transfer(option);
	m_SPI.end();
} 	 

//getters:	
int ADXL345::getX() {return x;}
int ADXL345::getY() {return y;}
int ADXL345::getZ() {return z;}


