#ifndef ICO_VECTOR_VEC2_HPP
#define ICO_VECTOR_VEC2_HPP

namespace ico {

	namespace vector {

		class vec2 {
		
			public:
			
			double x;
			double y;

			vec2();
			vec2(double x, double y);

			double dot(const vec2 & vec) const;

			vec2 reflectX() const;
			vec2 reflectY() const;

			friend vec2 operator + (const vec2 & lhs, const vec2 & rhs);
			friend vec2 operator - (const vec2 & lhs, const vec2 & rhs);
			friend vec2 operator * (const vec2 & vec, double scalar);
			friend vec2 operator * (double scalar, const vec2 & vec);
			friend vec2 operator / (const vec2 & vec, double scalar);
			
			double & operator [] (int index);
    		const double & operator [] (int index) const;
		};
	}
}

#endif