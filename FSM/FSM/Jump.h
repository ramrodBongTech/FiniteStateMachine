#pragma once

#include "State.h"
class Animation;

class Jump : public State
{
public:
	Jump();
	~Jump();
	void idle(Animation* animation);
};