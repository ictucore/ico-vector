#ifndef ICO_VECTOR_VEC3_HPP
#define ICO_VECTOR_VEC3_HPP

namespace ico {

	namespace vector {

		class vec3 {
		
			public:
			
			double x;
			double y;
			double z;

			vec3();
			vec3(double x, double y, double z);

			double dot(const vec3& vec) const;
			vec3 cross(const vec3& vec) const;

			vec3 reflectX() const;
			vec3 reflectY() const;
			vec3 reflectZ() const;

			friend vec3 operator+(const vec3& lhs, const vec3& rhs);
			friend vec3 operator-(const vec3& lhs, const vec3& rhs);
			friend vec3 operator*(const vec3& vec, double scalar);
			friend vec3 operator*(double scalar, const vec3& vec);
			friend vec3 operator/(const vec3& vec, double scalar);

			double & operator [] (int index);
    		const double & operator [] (int index) const;
		};
	}
}

#endif