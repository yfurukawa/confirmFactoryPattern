/*
 * LEDDriverFreeBSD.h
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#ifndef LEDDRIVERFREEBSD_H_
#define LEDDRIVERFREEBSD_H_

#include "LEDDriver.h"

class LEDDriverFreeBSD: public LEDDriver {
public:
	LEDDriverFreeBSD();
	virtual ~LEDDriverFreeBSD();
	void turnON() const;
	void turnOFF() const;
};

#endif /* LEDDRIVERFREEBSD_H_ */
