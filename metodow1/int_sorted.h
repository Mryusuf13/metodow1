#pragma once
#include <cstdlib>
#include"int_buffer.h"

//SORTERAR dynamiska minnen

//sorted.h tar INTE hand om dynamisk minne. Det är Buffern som tar hand om det.



class int_sorted {

private:
	
	int_buffer sortedbuff; // en objekt/medlem eller attribut medlem från int_buffer

public:

	

	int_sorted();

	int_sorted(const int* source, size_t size);

	size_t size() const;

	int* insert(int value);

	const int* begin() const;


	const int* end() const;

	int_sorted merge(const int_sorted& merge_with) const;
	

};

