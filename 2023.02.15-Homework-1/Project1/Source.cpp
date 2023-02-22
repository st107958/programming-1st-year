#include <iostream>

class MM
{
public:
	int course;
	int difficulty;

	void information()
	{
		std::cout << this->course << this->difficulty << std::endl;
	}

	
};

struct mm
{
	int coursemm;
	int difficultymm;

	void informationmm()
	{
		std::cout << this->coursemm << this->difficultymm << std::endl;
	}

	~mm()
	{

	}
};

int main()
{
	MM pi;
	mm tp;

	pi.information();
	tp.informationmm();

	return EXIT_SUCCESS;
}