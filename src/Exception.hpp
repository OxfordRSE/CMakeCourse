//
// This file is part of the Oxford RSE CMake Course
// (https://github.com/OxfordRSE/CMakeCourse) which is released under the MIT
// license. See accompanying LICENSE for copyright notice and full details.
//


#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#include <stdexcept>

namespace cpp_template {

class Exception : public std::runtime_error {
public:
  explicit Exception(const std::string &arg) : std::runtime_error(arg){};
};

} // namespace cpp_template

#endif // _EXCEPTION_H_
