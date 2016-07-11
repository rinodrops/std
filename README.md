# std
**std** is a header file for C/C++ to include all standard header files.

## How to Use
Include `<std.h>` for C, `<std>` for C++.

```c
/* example for c */
#include <std.h>

int main() {
	printf("hello, world. pi is %lf\n", M_PI);
	return EXIT_SUCCESS;
}
```

```cpp
/* example for c++ */
#include <std>

int main() {
	auto pi = M_PI;
	std::cout << "hello, world. pi is " << pi << std::endl;
	return EXIT_SUCCESS;
}
```

## Supported Revision
**std** supports ISO/IEC 9899:1999/2011 and ISO/IEC 14882:1998/2003/2011/2014.

Test is conducted on `clang-800.0.31` for `x86_64-apple-darwin16.0.0`.
