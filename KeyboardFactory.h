#pragma once
#include "Speakers.h"
#include "Keys.h"
#include "Screen.h"

class KeyboardFactory {
public:
	virtual Speakers* CreateSpeakers() const = 0;
	virtual Screen* CreateScreen() const = 0;
	virtual Keys* CreateKeys() const = 0;
};