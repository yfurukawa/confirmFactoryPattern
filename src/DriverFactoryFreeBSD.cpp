/*
 * DriverFactoryFreeBSD.cpp
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */
#include <new>
#include <iostream>
#include "DriverFactoryFreeBSD.h"

bool DriverFactoryFreeBSD::destroyed_ = false;

DriverFactory* DriverFactory::getInstance() {
	static DriverFactoryFreeBSD theFactory;
	if(DriverFactoryFreeBSD::isDestroyed()) {
		(void) new(&theFactory) DriverFactoryFreeBSD;
	}
	return &theFactory;
}
DriverFactoryFreeBSD::~DriverFactoryFreeBSD() {
	// TODO Auto-generated destructor stub
	destroyed_ = true;
}
