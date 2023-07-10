#pragma once 

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
	public:
		// Warlock();
		Warlock(const std::string& name, const std::string& title);
		Warlock(const Warlock& other);
		~Warlock();
		const Warlock& operator=(const Warlock& rhs);

		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& title);

		void introduce(void) const;

		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& spell);
		void launchSpell(const std::string& spell, const ATarget& target);

	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spellbook;
		
};