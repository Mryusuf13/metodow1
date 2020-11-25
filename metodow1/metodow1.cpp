#include <iostream>
#include "int_buffer.h"
#include "int_sorted.h"



int main()
{
	/*funktionow(int_buffer (10));

    int_buffer a(3);
	int_buffer b(2);
	a[0] = 1;
	a[1] = 2;
	a[2] = 5;
	b[0] = 3;
	b[1] = 4;
	int_sorted a_sorted(a.begin(), a.size());
	int_sorted b_sorted(b.begin(), b.size());
	int_sorted c = a_sorted.merge(b_sorted);
	for (auto i : c) {
		std::cout << i << std::endl;
		}

  */
}

void funktionow(int_buffer buf) {
	
	int skek = 1;
	for (int* i = buf.begin(); i != buf.end(); i++)
	{
		*i = skek;
		++skek;
	}
	for (const int* i = buf.begin(); i != buf.end(); i++)
	{
		std::cout << *i << std::endl;
	}
}
