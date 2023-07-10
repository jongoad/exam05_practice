#include "ASpell.hpp"


class Fwoosh : public ASpell {
	public:
		Fwoosh() : ASpell("Fwoosh", "fwooshed") {};
		Fwoosh(const Fwoosh& other);
		~Fwoosh();

		Fwoosh* clone();

		const Fwoosh& operator=(const Fwoosh& rhs);
};