// hand movement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class digits
{
	int thumb=0;
	int index=0;
	int middle=0;
	int ring=0;
	int pinkie=0;
};
class movement: public digits
{
	//this class declares methods for basic hand motions
public:
	void thumbs_up()//thumbs finger up method
	{
		int thumb = thumb++;
	}
	void index_up()//index finger up method
	{
		int index = index++;
	}
	void middle_up()//middle finger up method
	{
		int middle = middle++;
	}
	void ring_up()//ring finger up method
	{
		int ring = ring++;
	}
	void pinkie_up()//pinkie finger up method
	{
		int pinkie = pinkie++;
	}
};
class gestures : public movement, public digits
{
	string gesture;
	cin >> gesture;
	if (gesture == thumbsup)
	{
	}
};


