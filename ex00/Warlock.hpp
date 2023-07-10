#pragma once 

#include <string>
#include <iostream>

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

	private:
		std::string name;
		std::string title;
};