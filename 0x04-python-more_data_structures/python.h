#include <Python.h>

int main() {
	Py_Initialize();
	//void print_python_list(PyObject *p);
	Py_Finalize();
	return 0;
}
