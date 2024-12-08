#ifndef TYPES_HPP
#define TYPES_HPP

namespace cgl {
	class vec2
	{
	public:
		vec2(double X, double Y);
		double x, y;
	};

	class vec3
	{
	public:
		vec3(double X, double Y, double Z);
		double x, y, z;
	};
	class intvec3 {
		intvec3(int X, int Y);
		int x, y, z;
	};
	class mesh
	{
	public:
		vec3* verticies;//köþeler (sorry for turkish commentation i will translate later)
		intvec3* indecies;//köþelere iþaret eden iþaretçiler
	};
}
#endif