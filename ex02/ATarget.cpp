#include "ATarget.hpp"

ATarget::ATarget(const std::string& type) {
	this->type = type;
};

ATarget::ATarget(const ATarget& other) {
	*this = other;
};

ATarget::~ATarget() {

};

const ATarget& ATarget::operator=(const ATarget& rhs) {
	this->type = rhs.type;
	return *this;
};

const std::string& ATarget::getType(void) const {
	return type;
};

void ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
};