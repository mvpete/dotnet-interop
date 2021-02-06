// dotnet-interop-cpp-console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <native_to_managed.h>

/// <summary>
/// In order to use the dotnet-interop-clr library, you have to point at the include directory. As
/// well you have to link the library manually.
/// </summary>
/// <returns></returns>

int main()
{
    native_to_managed ntm;
    ntm.write_to_console("Hello from native");
}

