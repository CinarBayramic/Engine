#define TYPES_HPP
#ifdef TYPES_HPP

namespace cgl {
	class vec2
	{
	public:
		vec2(double X, double Y);
		vec2() {}
		double x, y;
	};

	class vec3
	{
	public:
		vec3(double X, double Y, double Z);
		double x, y, z;
	};
}
#endif