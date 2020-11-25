#include<iostream>
#include<algorithm>
#include <string>

// tar hand om Dynamisk minne

class int_buffer {

private:
	size_t length; //size_t den används för att representera storleken på Objekt i klasser/variabler i bytes
	int* buffati;
	

public:
;
	explicit int_buffer(size_t size); 

	int_buffer(const int* source, size_t size);  
	
	int_buffer(const int_buffer& rhs); //kopierar construct
		
	int_buffer(int_buffer&& rhs); 
		
	int_buffer& operator =(const int_buffer&rhs); 
	
	int_buffer& operator =(int_buffer&& rhs);
	
	int& operator [](size_t index);
	
	const int& operator [](size_t index) const;
	
	size_t size() const;
	
	

	int* begin();
	
	int* end();
	
	const int* begin() const;
	
	const int* end() const;

	~int_buffer();
};