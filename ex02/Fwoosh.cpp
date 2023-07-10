#include "Fwoosh.hpp"

Fwoosh* Fwoosh::clone() {
	Fwoosh* res = new Fwoosh(*this);
	return res;
};