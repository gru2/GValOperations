#include <GValOperations.h>

GVal add(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs.asInt() + rhs.asInt());
}

GVal sub(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs.asInt() - rhs.asInt());
}

GVal uneg(const GVal &x)
{
	return GVal(-x.asInt());
}

GVal mul(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs.asInt() * rhs.asInt());
}

GVal div(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs.asInt() / rhs.asInt());
}

GVal mod(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs.asInt() % rhs.asInt());
}

GVal eq(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs == rhs);
}

GVal unot(const GVal &x)
{
	return GVal(!x.asBool());
}

GVal lt(const GVal &lhs, const GVal &rhs)
{
	return GVal(lhs < rhs);
}

GVal operator +(const GVal &lhs, const GVal &rhs) { return add(lhs, rhs); }
GVal operator -(const GVal &lhs, const GVal &rhs) { return sub(lhs, rhs); }
GVal operator -(const GVal &x) { return uneg(x); }
GVal operator *(const GVal &lhs, const GVal &rhs) { return mul(lhs, rhs); }
GVal operator /(const GVal &lhs, const GVal &rhs) { return div(lhs, rhs); }
GVal operator %(const GVal &lhs, const GVal &rhs) { return mod(lhs, rhs); }
GVal operator !(const GVal &x) { return unot(x); }
