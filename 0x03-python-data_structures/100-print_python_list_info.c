#include <object.h>
#include <listobject.h>

/**
* print_python_list_info - Function prints information about a Python list
* @p - pointer to a PyObject
* Returns: no value
*/

void print_python_list_info(PyObject *p)
{
	Py_ssize_t len, alloc_len, index;

	len = PyList_Size(p);
	alloc_len = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %ld\n", len);
	printf("[*] Allocated = %ld\n", alloc_len);

	index = 0;
	while (index < size)
	{
		printf("Element %ld: %s\n",
		       idx,
		       (PY_TYPE(PyList_GetItem(p, idx)))->tp_name);
        index++;
	}
}

