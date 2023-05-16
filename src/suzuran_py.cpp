#include <pybind11/pybind11.h>
namespace py = pybind11;

int test_factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return test_factorial(x-1)*x;
}

PYBIND11_MODULE(suzuran, handle)
{
    handle.doc() = "SuzuranRenderer v1.0.";
    handle.def("fast_factorial", &test_factorial);
}