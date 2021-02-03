#include <glad/glad.h> // libs.pri sets the right include path. glads.h may set GLAD_DEBUG

#include "Global/Macros.h"

GCC_DIAG_OFF(unused-parameter)
GCC_DIAG_OFF(missing-prototypes)
GCC_DIAG_OFF(unused-variable)

#ifdef GLAD_DEBUG
#include "gladDeb/src/glad.c"
#else
#include "gladRel/src/glad.c"
#endif
