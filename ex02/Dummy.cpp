#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {
};

Dummy::Dummy(const Dummy& other) : ATarget(other.type) {
	*this = other;
};

Dummy::~Dummy() {

};

const Dummy& Dummy::operator=(const Dummy& rhs) {
	this->type = rhs.type;
	return *this;
};

ATarget* Dummy::clone() {
	Dummy* copy = new Dummy(*this);
	return copy;
};


