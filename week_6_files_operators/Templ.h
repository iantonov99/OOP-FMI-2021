#pragma once

template<typename T>
class Templ {
private:
	T data;
public:
	Templ(T _data);
	void test() const;
	void print() const;
};

template<typename T>
inline Templ<T>::Templ(T _data)
{
	data = _data;
}

template<typename T>
inline void Templ<T>::test() const
{
	std::cout << data;
}

template<typename T>
inline void Templ<T>::print() const
{

}
