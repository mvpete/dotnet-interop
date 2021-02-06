#include "native_to_managed.h"
#include "native_to_managed.impl.h"

native_to_managed::native_to_managed()
    :impl_(std::make_unique<impl>())
{
}

// You need this in the compilation unit so it knows about the impl.
native_to_managed::~native_to_managed() = default;

void native_to_managed::write_to_console(const std::string &message)
{
    impl_->write_to_console(message);
}