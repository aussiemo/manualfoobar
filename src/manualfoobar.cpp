#include <iostream>
#include <string>

#include "manualfoo/manualfoo.h"
#include "manualbar/manualbar.h"

int main(int argc, char* argv[])
{
	int foo = foo::foo(10);
	int bar = bar::bar(10);
	std::cout << "foo of 10 is " << foo << std::endl;
	std::cout << "bar of 10 is " << bar << std::endl;
	return 0;
}
