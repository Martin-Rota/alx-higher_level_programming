#include <Python.h>

void print_python_list(PyObject *p) {
    if (!PyList_Check(p)) {
        fprintf(stderr, "Invalid Python List Object\n");
        return;
    }

    Py_ssize_t size = PyObject_Length(p);

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);

    printf("[*] Allocated = %zd\n", ((PyListObject *)p)->allocated);

    for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject *item = PyList_GET_ITEM(p, i);
        printf("Element %zd: %s\n", i, item->ob_type->tp_name);
    }
}

void print_python_bytes(PyObject *p) {
    if (!PyBytes_Check(p)) {
        fprintf(stderr, "[ERROR] Invalid Bytes Object\n");
        return;
    }

    Py_ssize_t size = PyObject_Length(p);
    const char *bytes_str = PyBytes_AS_STRING(p);

    printf("[.] bytes object info\n");
    printf("  [.] Size: %zd\n", size);
    printf("  [.] trying string: ");
    for (Py_ssize_t i = 0; i < size && i < 10; ++i) {
        printf("%02hhx", bytes_str[i]);
        if (i + 1 < size && i + 1 < 10) {
            printf(" ");
        }
    }
    printf("\n");
}

