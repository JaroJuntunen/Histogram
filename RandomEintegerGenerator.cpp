#include "RandomEintegerGenerator.h"

namespace Hist {
	RandomEintegerGenerator::RandomEintegerGenerator()
	{
	}

	RandomEintegerGenerator::~RandomEintegerGenerator()
	{
	}

	RandomEintegerGenerator::EInteger operator()() {
		return EInteger(rand() % 5);
	}
}