ifndef RANDOMEINTEGERGENERATOR_H
#define RANDOMEINTEGERGENERATOR_H


#include "HistogramBase.h"
namespace Hist {

	class RandomEintegerGenerator : public  RandomEintegerGeneratorBase
	{
		public:
			RandomEintegerGenerator();
			~RandomEintegerGenerator();

			// Returns a pseudo-random EInteger value
			EInteger operator() override;
	};
}
#endif