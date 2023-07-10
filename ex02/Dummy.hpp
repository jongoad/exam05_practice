#pragma once

#include "ATarget.hpp"

class Dummy : ATarget {
	public:
		Dummy();
		Dummy(const Dummy& other);
		~Dummy();

		const Dummy& operator=(const Dummy& rhs);

		ATarget* clone();

	private:
};