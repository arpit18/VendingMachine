#include "Denomination.h"

#pragma once

class Coin {
	int denomination;

	public :
		Coin(Denomination denomination_) : denomination((int)denomination_) {}

		int getValue()
		{
			return denomination;
		}
};
