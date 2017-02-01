#include "stdafx.h"
#include "Animation.h"
#include "State.h"
#include "Idle.h"

Animation::Animation(){ m_current = new Idle(); }
Animation::~Animation(){}

void Animation::idle(){ m_current->idle(this); }
void Animation::jump(){ m_current->jump(this); }
void Animation::climb(){ m_current->climb(this); }