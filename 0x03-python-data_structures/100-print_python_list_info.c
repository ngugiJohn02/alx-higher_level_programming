#include <Python.h>

/**
 * print_python_list_info - Prints some basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
    Py_ssize_t size, alloc, i;
    PyObject *item;

    /* Get the size of the list */
    size = PyList_Size(p);
    /* Get the allocated space of the list */
    alloc = ((PyListObject *)p)->allocated;

    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", alloc);

    /* Loop through each item in the list and print its type */
    for (i = 0; i < size; i++)
    {
        item = PyList_GetItem(p, i);
        printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

