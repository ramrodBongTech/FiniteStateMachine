#pragma once

#include "State.h"
class Animation;

class Idle : public State
{
public:
	Idle();
	~Idle();
	void jump(Animation* animation);
	void climb(Animation* animation);
};