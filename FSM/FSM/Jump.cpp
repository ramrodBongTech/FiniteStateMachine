#include "stdafx.h"
#include "Idle.h"
#include "Jump.h"
#include "Animation.h"

Jump::Jump(){}

Jump::~Jump(){}

void Jump::idle(Animation* animation)
{
	std::cout << "Going From Jump To Idle" << std::endl;
	animation->setCurrent(new Idle());
	delete this;
}