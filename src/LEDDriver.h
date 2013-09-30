/*
 * LEDDriver.h
 *
 *  Created on: 2012/09/01
 *      Author: furukawayoshihiro
 */

#ifndef LEDDRIVER_H_
#define LEDDRIVER_H_

class LEDDriver {
public:
	LEDDriver();
	virtual ~LEDDriver();
	virtual void turnON() const = 0;
	virtual void turnOFF() const = 0;
};


#endif /* LEDDRIVER_H_ */
