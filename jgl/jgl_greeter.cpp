#include "jgl_greeter.h"

#include <iostream>

jgl_Greeter_t* jgl_Greeter_create(const char* name)
{
    return reinterpret_cast<jgl_Greeter_t*>(new Greeter(name));
}

void jgl_Greeter_destroy(jgl_Greeter_t *greeter)
{
    delete reinterpret_cast<Greeter*>(greeter);
}

void jgl_Greeter_greet(jgl_Greeter_t *greeter)
{
    reinterpret_cast<Greeter*>(greeter)->greet();
}

Greeter::Greeter(const std::string& name)
: d_name(name)
{
}

void Greeter::greet() const
{
    std::cout << "Welcome: " << d_name << std::endl;
}


