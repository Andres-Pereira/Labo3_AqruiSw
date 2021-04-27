#pragma once
#include "KeyboardFactory.h"
#include "PSRSpeakers.h"
#include "PSRKeys.h"
#include "PSRScreen.h"

class PSRFactory : public KeyboardFactory {
public:
	Speakers* CreateSpeakers() const override {
		return new PSRSpeakers();
	}
	Keys* CreateKeys() const override {
		return new PSRKeys();
	}
	Screen* CreateScreen() const override {
		return new PSRScreen();
	}
};
