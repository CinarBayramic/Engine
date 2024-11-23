#include "functions.hpp"
#include "types.hpp"
#include "math.h"

namespace cgl {

	cgl::vec2 perspectiveproject(vec3 vec, double fov, double aspectratio, double far, double near) {
		double projectionmatrix[4*4] = {
			1/(aspectratio*tan(fov/2)),0,0,0,
			0,1/(tan(fov/2)),0,0,
			0,0,-((far+near)/(far-near)),(2*far*near)/(far-near),
			0,0,-1,0
		}; //#TODO implement matrix multiplication for the function to do its thing.

	};
}