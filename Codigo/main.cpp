#include <iostream>
#include"KeyboardFactory.h"
#include"E433Factory.h"
#include"YPTFactory.h"
#include"PSRFactory.h"
#include "Speakers.h"
#include "Screen.h"
#include "Keys.h"

using namespace std;
//Creacion de objetos de prueba

int main() {

	KeyboardFactory* E433s = new E433Factory();
	KeyboardFactory* PSRs = new PSRFactory();
	KeyboardFactory* YPTs = new YPTFactory();

	
	Speakers* PSRSpeakers = PSRs->CreateSpeakers();
	Keys* PSRScreen = PSRs->CreateScreen();
	Screen* PSRKeys = PSRs->CreateKeys();

	Speakers* E433Speakers = E433s->CreateSpeakers();
	Keys* E433Screen = E433s->CreateScreen();
	Screen* E433Keys = E433s->CreateKeys();

	Speakers* YPTSpeakers = YPTs->CreateSpeakers();
	Keys* YPTScreen = YPTs->CreateScreen();
	Screen* YPTKeys = YPTs->CreateKeys();
	return 0;
}