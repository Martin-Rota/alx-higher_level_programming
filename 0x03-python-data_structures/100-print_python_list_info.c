#include <Python.h>

/**
* print_python_list_info - Function prints information about a Python list
* @p: pointer to a PyObject
* Returns: no value
*/

void print_python_list_info(PyObject *p)
{
	long int len, alloc_len, index;

	len = PyList_Size(p);
	alloc_len = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %ld\n", len);
	printf("[*] Allocated = %ld\n", alloc_len);

	index = 0;
	while (index < len)
	{
		printf("Element %ld: %s\n",
		       index,
		       (Py_TYPE(PyList_GetItem(p, index)))->tp_name);
        index++;
	}
}
