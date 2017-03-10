// hand movement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class digits//this class declares integers assigned to individual fingers
{
	int thumb=0;//thumbs integer
	int index=0;//index integer
	int middle=0;//middle finger integer
	int ring=0;//ring finger integer
	int pinkie=0;//pinkie integer
};
class movement: public digits
{
	//this class declares methods for basic finger motions
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
class gestures : public movement
{
public:
	void getGestures()
	{
		gestures g;//object used to call to methods
		string gesture;
		cout << "Input gesture";
		cin >> gesture;
		while (gesture == "thumbsup" || "thumbs up")
		{
			&movement::thumbs_up;
		}
		while (gesture == "indexup" || "index up")
		{
			&movement::index_up;
		}
		while (gesture == "middleup" || "middle up")
		{
			&movement::middle_up;
		}
		while (gesture == "ringup" || "ring up")
		{
			&movement::ring_up;
		}
		while (gesture == "pinkieup" || "pinkie up")
		{
			&movement::pinkie_up;
		}
	}
	int main()
	{
		gestures gg;
		gg.getGestures();


	}
};


