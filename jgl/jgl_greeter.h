#ifndef INCLUDED_JGL_GREETER
#define INCLUDED_JGL_GREETER

struct jgl_Greeter;
typedef struct jgl_Greeter jgl_Greeter_t;

#ifdef __cplusplus
extern "C" {
#endif

jgl_Greeter_t* jgl_Greeter_create(const char* name);

void jgl_Greeter_destroy(jgl_Greeter_t *greeter);

void jgl_Greeter_greet(jgl_Greeter_t *greeter);

#ifdef __cplusplus
}

#include <string>

class Greeter
{
  private:
    std::string d_name;

  public:
    Greeter(const std::string& name);

    void greet() const;
};

#endif
#endif
