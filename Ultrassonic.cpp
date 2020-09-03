#include Arduino.h
#include Ultrassonic.h

Ultrassonic::Ultrassonic(int trigger,int echo){
	pinMode(trigger,OUTPUT);
	pinMode(echo,INPUT);
	_trigger=trigger;
	_echo=echo;
}
float Ultrassonic::Ranging(char c){
	long tempo,distancia;
	digitalWrite(_trigger,LOW);
	delayMicroseconds(2);
	digitalWrite(_trigger,HIGH);
	delayMicroseconds(10);
	digitalWrite(_trigger,LOW);
	tempo=pulseIn(_echo,HIGH);
	distancia=(tempo/2)*0.0343;
	if(c=='C' or c=='c'){
		return distancia;

	}
	if(c=='M' or c=='m'){
		float metro=distancia/100;
		return metro;
	}
}