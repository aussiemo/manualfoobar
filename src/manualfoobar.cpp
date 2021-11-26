#include <iostream>
#include <string>

#include "foo/foo.h"
#include "bar/bar.h"

int main(int argc, char* argv[])
{
	int foo = foo::foo(10);
	int bar = bar::bar(10);
	std::cout << "foo of 10 is " << foo << std::endl;
	std::cout << "bar of 10 is " << bar << std::endl;
	return 0;
}
