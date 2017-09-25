#include <Sutf.h>
#include <GValOperations.h>

SUTF_TEST(testAdd)
{
	GVal r = add(GVal)
	Sutf::test(r.asInt() == 7);
}

int main(int argc, char *argv[])
{
	Sutf::runTests(argc, argv);
	return 0;
}


