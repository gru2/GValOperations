#include <Sutf.h>
#include <GValOperations.h>

SUTF_TEST(testAdd)
{
	GVal r = add(GVal(4), GVal(3));
	Sutf::test(r.asInt() == 7);
}

SUTF_TEST(testSub)
{
	GVal r = sub(GVal(4), GVal(3));
	Sutf::test(r.asInt() == 1);
}

SUTF_TEST(testUNeg)
{
	GVal r = uneg(GVal(4));
	Sutf::test(r.asInt() == -4);
}

SUTF_TEST(testMul)
{
	GVal r = mul(GVal(4), GVal(3));
	Sutf::test(r.asInt() == 12);
}

SUTF_TEST(testDiv)
{
	GVal r = div(GVal(16), GVal(3));
	Sutf::test(r.asInt() == 5);
}

SUTF_TEST(testMod)
{
	GVal r = mod(GVal(16), GVal(3));
	Sutf::test(r.asInt() == 1);
}

SUTF_TEST(testEq)
{
	GVal r = eq(GVal(16), GVal(3));
	Sutf::test(r.asBool() == false);
}

SUTF_TEST(testUNot)
{
	GVal r = unot(GVal(true));
	Sutf::test(r.asBool() == false);
}

SUTF_TEST(testLt)
{
	GVal r = lt(GVal(16), GVal(3));
	Sutf::test(r.asBool() == false);
}

int main(int argc, char *argv[])
{
	Sutf::runTests(argc, argv);
	return 0;
}
