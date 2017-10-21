#ifndef __GVAL_OPERATIONS_H
#define __GVAL_OPERATIONS_H

#include <GVal.h>

GVal add(const GVal &lhs, const GVal &rhs);
GVal sub(const GVal &lhs, const GVal &rhs);
GVal uneg(const GVal &x);
GVal mul(const GVal &lhs, const GVal &rhs);
GVal div(const GVal &lhs, const GVal &rhs);
GVal mod(const GVal &lhs, const GVal &rhs);
GVal eq(const GVal &lhs, const GVal &rhs);
GVal unot(const GVal &x);
GVal lt(const GVal &lhs, const GVal &rhs);

GVal operator +(const GVal &lhs, const GVal &rhs);
GVal operator -(const GVal &lhs, const GVal &rhs);
GVal operator -(const GVal &x);
GVal operator *(const GVal &lhs, const GVal &rhs);
GVal operator /(const GVal &lhs, const GVal &rhs);
GVal operator %(const GVal &lhs, const GVal &rhs);
GVal operator !(const GVal &x);

#endif
