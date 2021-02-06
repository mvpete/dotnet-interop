#pragma once


#include <string>
#include <memory>

#ifdef DLL_EXPORT
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif



/// <summary>
/// This is your native side class, you need the impl to hide the GC class
/// </summary>

class DLL_API native_to_managed
{
public:
    native_to_managed();
    ~native_to_managed();
    void write_to_console(const std::string& message);

private:
    class impl;
    std::unique_ptr<impl> impl_;
};