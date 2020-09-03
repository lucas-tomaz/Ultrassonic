#ifndef Ultrassonic_h
#define Ultrassonic_h
#include <LICENSE>

class Ultrassonic{
	public:
		Ultrassonic(int trigger,int echo);
		float Ranging(char c);
	private:
		int _trigger;
		int _echo;

};
#endif