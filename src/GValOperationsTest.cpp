#include <Usutf.h>
#include <GValOperations.h>

USUTF_TEST(testAdd)
{
	GVal r = add(GVal(4), GVal(3));
	Usutf::test(r.asInt() == 7);
}

USUTF_TEST(testSub)
{
	GVal r = sub(GVal(4), GVal(3));
	Usutf::test(r.asInt() == 1);
}

USUTF_TEST(testUNeg)
{
	GVal r = uneg(GVal(4));
	Usutf::test(r.asInt() == -4);
}

USUTF_TEST(testMul)
{
	GVal r = mul(GVal(4), GVal(3));
	Usutf::test(r.asInt() == 12);
}

USUTF_TEST(testDiv)
{
	GVal r = div(GVal(16), GVal(3));
	Usutf::test(r.asInt() == 5);
}

USUTF_TEST(testMod)
{
	GVal r = mod(GVal(16), GVal(3));
	Usutf::test(r.asInt() == 1);
}

USUTF_TEST(testEq)
{
	GVal r = eq(GVal(16), GVal(3));
	Usutf::test(r.asBool() == false);
}

USUTF_TEST(testUNot)
{
	GVal r = unot(GVal(true));
	Usutf::test(r.asBool() == false);
}

USUTF_TEST(testLt)
{
	GVal r = lt(GVal(16), GVal(3));
	Usutf::test(r.asBool() == false);
}

int main(int argc, char *argv[])
{
	Usutf::runTests(argc, argv);
	return 0;
}
