#include "stdafx.h"
#include "Idle.h"
#include "Jump.h"
#include "Climb.h"
#include "Animation.h"

Idle::Idle(){}
Idle::~Idle(){}

void Idle::jump(Animation* animation)
{
	std::cout << "Going From Idle To Jump" << std::endl;
	animation->setCurrent(new Jump());
	delete this;
}

void Idle::climb(Animation* animation)
{
	std::cout << "Going From Idle To Climb" << std::endl;
	animation->setCurrent(new Climb());
	delete this;
}