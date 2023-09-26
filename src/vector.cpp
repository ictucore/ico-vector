#include "ico/vector/vector.hpp"

namespace ico {

	namespace vector {

		vec2::vec2() : x(0.0f), y(0.0f) {}
		vec2::vec2(double x, double y) : x(x), y(y) {}

		double vec2::dot(const vec2 & vec) const { return x * vec.x + y * vec.y; }

		vec2 vec2::reflectX() const { return vec2(-x, y); }
		vec2 vec2::reflectY() const { return vec2(x, -y); }

		vec2 operator + (const vec2 & lhs, const vec2 & rhs) { return vec2(lhs.x + rhs.x, lhs.y + rhs.y); }
		vec2 operator - (const vec2 & lhs, const vec2 & rhs) { return vec2(lhs.x - rhs.x, lhs.y - rhs.y); }
		vec2 operator * (const vec2 & vec, double scalar) { return vec2(vec.x * scalar, vec.y * scalar); }
		vec2 operator * (double scalar, const vec2 & vec) { return vec2(vec.x * scalar, vec.y * scalar); }
		vec2 operator / (const vec2 & vec, double scalar) {

			if (scalar != 0.0f)
				return vec2(vec.x / scalar, vec.y / scalar);
			
			return vec2();
		}

		double & vec2::operator [] (int index) { return (index == 0) ? x : y; }
		const double & vec2::operator [] (int index) const { return (index == 0) ? x : y; }

		vec3::vec3() : x(0.0f), y(0.0f), z(0.0f) {}
		vec3::vec3(double x, double y, double z) : x(x), y(y), z(z) {}

		double vec3::dot(const vec3 & vec) const { return x * vec.x + y * vec.y + z * vec.z; }
		vec3 vec3::cross(const vec3 & vec) const { return vec3(y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x); }

		vec3 vec3::reflectX() const { return vec3(-x, y, z); }
		vec3 vec3::reflectY() const { return vec3(x, -y, z); }
		vec3 vec3::reflectZ() const { return vec3(x, y, -z); }

		vec3 operator + (const vec3 & lhs, const vec3 & rhs) { return vec3(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z); }
		vec3 operator - (const vec3 & lhs, const vec3 & rhs) { return vec3(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z); }
		vec3 operator * (const vec3 & vec, double scalar) { return vec3(vec.x * scalar, vec.y * scalar, vec.z * scalar); }
		vec3 operator * (double scalar, const vec3 & vec) { return vec3(vec.x * scalar, vec.y * scalar, vec.z * scalar); }
		vec3 operator / (const vec3 & vec, double scalar) {
			
			if (scalar != 0.0f)
				return vec3(vec.x / scalar, vec.y / scalar, vec.z / scalar);
			
			return vec3();
		}

		double & vec3::operator [] (int index) { 

			switch (index) {

				case 0: return x;
				case 1: return y;
				case 2: return z;
				default: return z;
			}
		}

		const double & vec3::operator [] (int index) const {

			switch (index) {

				case 0: return x;
				case 1: return y;
				case 2: return z;
				default: return z;
			}
		}

		vec4::vec4() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}
		vec4::vec4(double x, double y, double z, double w) : x(x), y(y), z(z), w(w) {}

		double vec4::dot(const vec4 & vec) const { return x * vec.x + y * vec.y + z * vec.z + w * vec.w; }

		vec4 vec4::reflectX() const { return vec4(-x, y, z, w); }
		vec4 vec4::reflectY() const { return vec4(x, -y, z, w); }
		vec4 vec4::reflectZ() const { return vec4(x, y, -z, w); }
		vec4 vec4::reflectW() const { return vec4(x, y, z, -w); }

		vec4 operator + (const vec4 & lhs, const vec4 & rhs) { return vec4(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w); }
		vec4 operator - (const vec4 & lhs, const vec4 & rhs) { return vec4(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z, lhs.w - rhs.w); }
		vec4 operator * (const vec4 & vec, double scalar) { return vec4(vec.x * scalar, vec.y * scalar, vec.z * scalar, vec.w * scalar); }
		vec4 operator * (double scalar, const vec4 & vec) { return vec4(vec.x * scalar, vec.y * scalar, vec.z * scalar, vec.w * scalar); }
		vec4 operator / (const vec4 & vec, double scalar) {
			
			if (scalar != 0.0f)
				return vec4(vec.x / scalar, vec.y / scalar, vec.z / scalar, vec.w / scalar);
			
			return vec4();
		}

		double & vec4::operator [] (int index) { 

			switch (index) {

				case 0: return x;
				case 1: return y;
				case 2: return z;
				case 3: return w;
				default: return w;
			}
		}
		
		const double & vec4::operator [] (int index) const {

			switch (index) {

				case 0: return x;
				case 1: return y;
				case 2: return z;
				case 3: return w;
				default: return w;
			}
		}
	}
}
