#ifndef ICO_VECTOR_VEC4_HPP
#define ICO_VECTOR_VEC4_HPP

namespace ico {

	namespace vector {

		class vec4 {
		
			public:
			
			double x;
			double y;
			double z;
			double w;

			vec4();
			vec4(double x, double y, double z, double w);

			double dot(const vec4& vec) const;

			vec4 reflectX() const;
			vec4 reflectY() const;
			vec4 reflectZ() const;
			vec4 reflectW() const;

			friend vec4 operator+(const vec4& lhs, const vec4& rhs);
			friend vec4 operator-(const vec4& lhs, const vec4& rhs);
			friend vec4 operator*(const vec4& vec, double scalar);
			friend vec4 operator*(double scalar, const vec4& vec);
			friend vec4 operator/(const vec4& vec, double scalar);

			double & operator [] (int index);
    		const double & operator [] (int index) const;
		};
	}
}

#endif