#include "stdafx.h"
#include <thread>
#include "Animation.h"
#include "State.h"

int main()
{
	Animation _fsm;
	int _i = 0;
	while (true)
	{
		if (_i == 0)
		{
			_fsm.jump();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			_i = 1;
		}
		else if (_i == 1)
		{
			_fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			_i = 2;
		}
		else if (_i == 2)
		{
			_fsm.climb();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			_i = 3;
		}
		else if (_i == 3)
		{
			_fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			_i = 0;
		}
	}
}

