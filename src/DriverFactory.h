/*
 * DriverFactory.h
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#ifndef DRIVERFACTORY_H_
#define DRIVERFACTORY_H_

#include "LEDDriver.h"

class DriverFactory;
class LEDDriver;

class DriverFactory {
public:
	inline virtual ~DriverFactory() {
	}
	static DriverFactory* getInstance();
	virtual LEDDriver* createLEDDriver() const = 0;
	virtual void displayName() const = 0;

};

#endif /* DRIVERFACTORY_H_ */
