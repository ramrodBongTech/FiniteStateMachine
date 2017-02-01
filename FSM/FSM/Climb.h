#pragma once

#include "State.h"
class Animation;

class Climb : public State
{
public:
	Climb();
	~Climb();
	void idle(Animation* animation);
};