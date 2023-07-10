#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) {

};

ASpell::ASpell(const ASpell& other) {
	*this = other;
};

ASpell::~ASpell() {

};

const ASpell& ASpell::operator=(const ASpell& rhs) {
	this->name = rhs.name;
	this->effects = rhs.effects;
};

const std::string& ASpell::getName(void) const {
	return this->name;
};

const std::string& ASpell::getEffects(void) const {
	return this->effects;
};

void ASpell::launch(const ATarget& target) {
	target.getHitBySpell(*this);
};


