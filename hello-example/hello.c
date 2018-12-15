#include <Python.h>
#include "hello.h"

static PyObject* helloworld(PyObject* self) {
    return Py_BuildValue("s", print_hello());	
}

static char helloworld_docs[] = 
    "helloworld (): Any message you want to put here!!\n";

static PyMethodDef helloworld_funs[] = {
    {"helloworld", (PyCFunction) helloworld, METH_NOARGS, helloworld_docs},
    {NULL}
};

void inithelloworld(void) {
    Py_InitModule3("helloworld", helloworld_funs, "Extension module example.");
}
