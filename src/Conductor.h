/*
 * Conductor.h
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#ifndef CONDUCTOR_H_
#define CONDUCTOR_H_

#include "DriverFactory.h"
#include "LEDDriver.h"

class Conductor {
public:
	Conductor();
	virtual ~Conductor();

	void execute();

private:
	DriverFactory* driverFactory_;
	LEDDriver* LEDDriver_;
};

#endif /* CONDUCTOR_H_ */
