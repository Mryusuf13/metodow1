#include <algorithm>
#include <iostream>
#include"int_sorted.h"


int_sorted::int_sorted() :sortedbuff(int_buffer(nullptr, 0)) // nullptr = pekare som säger en heltal blir till 0
{

}

int_sorted::int_sorted(const int* source, size_t size) : sortedbuff(int_buffer(source, size))
{

}

size_t int_sorted::size() const
{
    return sortedbuff.size();
}

int* int_sorted::insert(int value)
{
    return nullptr;
}

const int* int_sorted::begin() const
{
    return nullptr;
}

const int* int_sorted::end() const
{
    return nullptr;
}

int_sorted int_sorted::merge(const int_sorted& merge_with) const
{
	

	int_buffer nybuffow(this->size() + merge_with.size()); 


	const int* a = sortedbuff.begin(); //adressen till det första elementet (buffer)

	const int* b = merge_with.begin(); //till den andra elementen (Sorted)

	int* c = nybuffow.begin();    //


	//for(;a != end() && b != merge_with.end(); i++){
	while (a != sortedbuff.end() && b != merge_with.end()) {   //säger vilket värde som ska skrivas till 

		if (*a < *b)

		{
			*c = *a;

			a++;

			c++;
		}

		else

		{

			*c = *b;

			b++;

			c++;

		}

	}

	//Om det finns något kvar i en buffer så skriv över de värdena till den nya buffern

	while (a != sortedbuff.end()) {

		*c = *a;

		a++;

		c++;         

	}



	while (b != merge_with.sortedbuff.end()) {

		*c = *b;

		b++;

		c++;

	}

	int_sorted merged_buffer; // int_sorted lista skapa merge buffer värde innehåller noll

	merged_buffer.sortedbuff = std::move(nybuffow);    //flyttar till våran output med hjälp av move 



	return merged_buffer;

}
