/*
 * LEDDriverCentOS.cpp
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#include <iostream>
#include "LEDDriverCentOS.h"

LEDDriverCentOS::LEDDriverCentOS() {
	// TODO �����������ꂽ�R���X�g���N�^�[�E�X�^�u

}

LEDDriverCentOS::~LEDDriverCentOS() {
	// TODO Auto-generated destructor stub
}

void LEDDriverCentOS::turnON() const {
	std::cout << "LED ON on CentOS" << std::endl;
}

void LEDDriverCentOS::turnOFF() const {
	std::cout << "LED OFF on CentOS" << std::endl;
}
