// ----------------- Histogram.h ---------------
#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include "HistogramBase.h"
#include <vector>

namespace Hist
{
	class Histogram : public HistogramBase {
		public:
	
			//If EInteger will be modified from 0-4, this will not work. Hardcoded to 0-4.
			void add(EInteger value) override;

			// Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
			// If no values has been added, will return Zero 
			EInteger getMode() const override;

			// Return the smallest value in the data set, according to default ordering relation of integer numbers
			// If no values has been added, will return Zero 
			EInteger getMinValue() const override;

			// Return the largest value in the data set
			// If no values has been added, will return Zero 
			EInteger getMaxValue() const override;

		private:
			std::vector<int> list{ 0,0,0,0,0 };

	};
}
#endif