#pragma once
#include "KeyboardFactory.h"
#include "YPTSpeakers.h"
#include "YPTKeys.h"
#include "YPTScreen.h"

class YPTFactory : public KeyboardFactory {
public:
	Speakers* CreateSpeakers() const override {
		return new YPTSpeakers();
	}
	Keys* CreateKeys() const override {
		return new YPTKeys();
	}
	Screen* CreateScreen() const override {
		return new YPTScreen();
	}
};