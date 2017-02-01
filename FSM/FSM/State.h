#pragma once

#include <iostream>

class Animation;

class State
{
public:
	virtual void idle(Animation* animation){ std::cout << "State::Idle" << std::endl; }
	virtual void jump(Animation* animation){ std::cout << "State::Jumping" << std::endl; }
	virtual void climb(Animation* animation){ std::cout << "State::Climbing" << std::endl; }
};