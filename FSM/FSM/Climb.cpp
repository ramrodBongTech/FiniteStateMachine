#include "stdafx.h"
#include "Idle.h"
#include "Climb.h"
#include "Animation.h"

Climb::Climb(){}
Climb::~Climb(){}
void Climb::idle(Animation* animation)
{
	std::cout << "Going From Climb To Idle" << std::endl;
	animation->setCurrent(new Idle());
	delete this;
}