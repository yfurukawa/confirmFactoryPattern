/*
 * LEDDriverFreeBSD.cpp
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#include <iostream>
#include "LEDDriverFreeBSD.h"

LEDDriverFreeBSD::LEDDriverFreeBSD() {
	// TODO �����������ꂽ�R���X�g���N�^�[�E�X�^�u

}

LEDDriverFreeBSD::~LEDDriverFreeBSD() {
	// TODO Auto-generated destructor stub
}

void LEDDriverFreeBSD::turnON() const {
	std::cout << "LED ON on FreeBSD" << std::endl;
}

void LEDDriverFreeBSD::turnOFF() const {
	std::cout << "LED OFF on FreeBSD" << std::endl;
}
