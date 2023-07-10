#include "Warlock.hpp"

// Warlock::Warlock() {
// }

Warlock::Warlock(const std::string& name, const std::string& title) {
	this->name = name;
	this->title = title;

	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& other) {
	*this = other;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

const Warlock& Warlock::operator=(const Warlock& rhs) {
	this->name = rhs.name;
	this->title = rhs.title;
	return *this;
}

const std::string& Warlock::getName(void) const{
	return this->name;
}

const std::string& Warlock::getTitle(void) const {
	return this->title;
}

void Warlock::setTitle(const std::string& title) {
	this->title = title;
}


void	Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

