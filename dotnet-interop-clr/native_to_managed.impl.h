#pragma once
#include "native_to_managed.h"

#include <gcroot.h>
#include <msclr/marshal_cppstd.h>

using namespace dotnet_interop_net_lib;

class native_to_managed::impl
{
public:
    void write_to_console(const std::string &message)
    {
        managed_->WriteToConsole(msclr::interop::marshal_as<System::String ^>(message));
    }

private:
    gcroot<ManagedClass ^> managed_;
};
