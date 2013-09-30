/*
 * Conductor.cpp
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#include <iostream>
#include "Conductor.h"
//#include "DriverFactory.h"

using namespace std;

Conductor::Conductor() {
	// TODO 自動生成されたコンストラクター・スタブ
	driverFactory_ = DriverFactory::getInstance();
	LEDDriver_ = driverFactory_->createLEDDriver();
}

Conductor::~Conductor() {
	// TODO Auto-generated destructor stub
}

void Conductor::execute() {
	cout << "Execute Conductor" << endl;
	driverFactory_->displayName();
	LEDDriver_->turnON();
}
