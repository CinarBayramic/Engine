#define TYPES_HPP
#ifdef TYPES_HPP

namespace cgl {
	class vec2
	{
	public:
		vec2(double X, double Y);
		double x, y;
		vec2::vec2(double X, double Y) : x(X), y(Y) { }
	};

	class vec3
	{
	public:
		vec3(double X, double Y, double Z);
		double x, y, z;
		vec3::vec3(double X, double Y, double Z) : x(X), y(Y), z(Z) { }
	};
}
#endif