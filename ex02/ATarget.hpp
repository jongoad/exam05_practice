#pragma once 

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ATarget {
	public:
		ATarget(const std::string& type);
		ATarget(const ATarget& other);
		~ATarget();
		const ATarget& operator=(const ATarget& rhs);

		const std::string& getType(void) const;

		virtual ATarget* clone() = 0;

		void getHitBySpell(const ASpell& spell) const;


	protected:
		std::string type;
};