/*
 * DriverFactoryCentOS.cpp
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */
#include <new>
#include <iostream>
#include "DriverFactoryCentOS.h"

bool DriverFactoryCentOS::destroyed_ = false;

DriverFactory* DriverFactory::getInstance() {
	static DriverFactoryCentOS theFactory;
	if(DriverFactoryCentOS::isDestroyed()) {
		(void) new(&theFactory) DriverFactoryCentOS;
	}
	return &theFactory;
}
DriverFactoryCentOS::~DriverFactoryCentOS() {
	// TODO Auto-generated destructor stub
	destroyed_ = true;
}

//virtual void DriverFactoryCentOS::displayName() {
//	std::cout << "DriverFactoryCentOS" << std::endl;
//}
