#include <algorithm>
#include <cstdlib>
#include "int_buffer.h"


int_buffer::int_buffer(size_t size) :buffati(new int[size]), length(size)
{}

int_buffer::int_buffer(const int* source, size_t size) : int_buffer(size)
{

	std::copy(source, source + length, buffati);

}

int_buffer::int_buffer(const int_buffer& rhs) :int_buffer(rhs.buffati, rhs.size())
	
{
}

int_buffer::int_buffer(int_buffer&& rhs) :length(0), buffati(nullptr)// flyttar 
{
	std::swap(rhs.buffati, buffati);          //Låter rhs.buffati peka där buffati pekar

	std::swap(rhs.length, length);    //Låter rhs.size_buffer vara av den storlek som size_buffer är.


}

int_buffer& int_buffer::operator=(const int_buffer& rhs)
{
	int_buffer temp(rhs);

	std::swap(temp.buffati, buffati);

	std::swap(temp.length, length);

	return *this;
}

int_buffer& int_buffer::operator=(int_buffer&& rhs)
{
	std::swap(rhs.buffati, buffati);
	std::swap(rhs.length, length);
	return *this;
	
}

int& int_buffer::operator[](size_t index)
{

	return buffati[index];
	
}

const int& int_buffer::operator[](size_t index) const
{
	return buffati[index];
}

size_t int_buffer::size() const
{
	return size_t();
}

int* int_buffer::begin()
{
	return nullptr;
}

int* int_buffer::end()
{
	return nullptr;
}

const int* int_buffer::begin() const
{
	return nullptr;
}

const int* int_buffer::end() const
{
	return nullptr;
}

int_buffer::~int_buffer()
{
}
