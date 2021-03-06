#ifndef __xyz2606_memory
#define __xyz2606_memory
template<typename T>
void uninitialized_copy(const T * first, const T * last, T * dest)
{
	T * q = dest;
	for(const T * p = first; p != last; p++, q++)
	{
		new (q) T(*p);
	}
}
template<typename T>
void swp(T & a, T & b)
{
	T temp(a);
	a.~T();
	new (&a) T(b);
	b.~T();
	new (&b) T(temp);
}
unsigned long long int __seed = 12606991;
unsigned int random()
{
	__seed = __seed * 0x41C64E6Du + 0x6073u;
	return __seed & 0xffffffffu;
}
void srandom(unsigned long long int sed)
{
	__seed = sed;
}
template<typename T>
bool operator == (const T & a, const T & b)
{
	return !(a < b) and !(b < a);
}
#endif
