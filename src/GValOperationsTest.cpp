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

int main(int argc, char *argv[])
{
	Sutf::runTests(argc, argv);
	return 0;
}
