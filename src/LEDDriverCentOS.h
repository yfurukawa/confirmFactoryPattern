/*
 * LEDDriverCentOS.h
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#ifndef LEDDRIVERCENTOS_H_
#define LEDDRIVERCENTOS_H_

#include "LEDDriver.h"

class LEDDriverCentOS: public LEDDriver {
public:
	LEDDriverCentOS();
	virtual ~LEDDriverCentOS();
	void turnON() const;
	void turnOFF() const;
};

#endif /* LEDDRIVERCENTOS_H_ */
