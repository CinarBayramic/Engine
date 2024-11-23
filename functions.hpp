#pragma once

#include "types.hpp"
namespace cgl {
	//self explanatory
	cgl::vec2 perspectiveproject(vec3 vec, double fov, double aspectratio, double far, double near);
}
