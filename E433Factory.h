#pragma once
#include "KeyboardFactory.h"
#include "E433Speakers.h"
#include "E433Keys.h"
#include "E433Screen.h"

class E433Factory : public KeyboardFactory {
public:
	Speakers* CreateSpeakers() const override {
		return new E433Speakers();
	}
	Keys* CreateKeys() const override {
		return new E433Keys();
	}
	Screen* CreateScreen() const override {
		return new E433Screen();
	}
};