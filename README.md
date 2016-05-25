Circuito Library Generation Guide
=================================

This guide contains all the information you need to create libraries for new parts on circuito.

Our library coding principles:
* Encapsulation - every component has it's own c++ class.
* Modularity - code is often reused. We have create base classes which contain frequently used patterns.
* Readbility - our code must always be clear and readable to newcomers.


Repo Structure
==============
*   libs - base clases and libraries
    *   AnalogReader - for components like potentiometers, with a single analog read pin.
    *   BaseSpeaker - for components that generate sounds, like buzzers and speakers.
    *   Switchable - for components that are turned on and of by single digital pin.
    *   TransactionalSPI - a library which encapsulates SPI communication protecting multiple components sharing a single bus
*   examples - examples of component libraries we have in our system.
    *   LED - using Switchable
    *   Potentiomenter - using AnalogReader
    *   DCMotor - Simple control
    *   ADXL345 - using TransactionalSPI
*   component.h & component.cpp - a boilerplate for every new component.


Submission Process
==================
We currently only accept submissions by email, at hello at circuito.io
