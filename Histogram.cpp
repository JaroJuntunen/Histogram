// ----------------- Histogram.cpp ---------------
#include "Histogram.h"

namespace Hist
{
	void Histogram::add(EInteger value)
	{
		if (value == Zero
			|| value == One
			|| value == Two
			|| value == Three
			|| value == Four)
		{
			this->list[int(value)]++;
		}
	}

	EInteger Histogram::getMode() const
	{
		int most = 0;
		EInteger mode = Zero;
		for (int i = 0; i < this->list.size(); i++)
		{
			if (this->list[i] > most)
			{
				most = this->list[i];
				mode = EInteger(i);
			}
		}
		return EInteger(mode);
	}

	EInteger Histogram::getMinValue() const
	{
		for (int i = 0; i < this->list.size(); i++)
		{
			if (this->list[i] != 0)
				return EInteger(i);
		}
	}

	EInteger Histogram::getMaxValue() const
	{
		for (int i = this->list.size() - 1; i > 0; i--)
		{
			if (this->list[i] != 0)
				return EInteger(i);
		}
	}
	
}