#pragma once

#include <string>
#include <iostream>
#include "ATarget.hpp"


class ASpell {
	public:
		ASpell(const std::string& name, const std::string& effects);
		ASpell(const ASpell& other);
		~ASpell();
		const ASpell& operator=(const ASpell& rhs);

		const std::string& getName(void) const;
		const std::string& getEffects(void) const;

		virtual ASpell* clone() = 0;

		void launch(const ATarget& target);


	protected:
		std::string name;
		std::string effects;		
};

