#pragma once

class State;

class Animation
{
class State* m_current = nullptr;
public:
	Animation();
	~Animation();
	void setCurrent(State* state){ m_current = state; }
	void idle();
	void jump();
	void climb();
};