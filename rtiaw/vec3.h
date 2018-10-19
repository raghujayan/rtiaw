#include <cmath>
#include <stdlib.h>
#include <iostream>


using namespace std;

template<typename T>
class vec3{

public:
vec3(){}
vec3(T e0,T e1,T e2):e{e0,e1,e2}{};
inline T x() const {return e[0];}
inline T y() const {return e[1];}
inline T z() const {return e[2];}
inline T r() const {return e[0];}
inline T g() const {return e[1];}
inline T b() const {return e[2];}


inline const vec3& operator+() const {return *this;}
inline vec3 operator-() const {return vec3(-e[0],-e[1],-e[2]);}
inline T operator[](int i) const {return e[i];}
inline T& operator[](int i) {return e[i];}

inline T& operator+=(const vec3<T> &v2);
inline T& operator-=(const vec3<T> &v2);
inline T& operator*=(const vec3<T> &v2);
inline T& operator/=(const vec3<T> &v2);
inline T& operator*=(const T b);
inline T& operator/=(const T b);

inline T length() const {return sqrt<T>(e[0]*e[0]+e[1]*e[1]+e[2]*e[2]);}
inline T squared_length() const {return e[0]*e[0]+e[1]*e[1]+e[2]*e[2];}
inline void make_unit_vector();

private:
T e[3];


};