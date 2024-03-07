#include "pybind11/embed.h"

namespace py = pybind11;

int main(int argc, char** argv) {
  py::scoped_interpreter guard{};
  py::dict globals = py::globals();
  py::eval_file("print('Hello world!')", globals);
  return 0;
}
