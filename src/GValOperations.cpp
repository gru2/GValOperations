#include <GValOperations.h>

GVal add(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs.asInt() + rhs.asInt());
}

