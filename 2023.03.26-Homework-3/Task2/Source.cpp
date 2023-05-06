#include <iostream>

struct Student
{
	std::string Name;
	std::string Surname;
	int mathpoint;
	int fisicspoint;
	int infpoint;

	Student(std::string Name = "", std::string Surname = "", int mpoint = 0, int fpoint = 0, int ipoint = 0) : 
		Name(Name), Surname(Surname), mathpoint(mpoint), fisicspoint(fpoint), infpoint(ipoint) {};

	Student(const Student& st) :
		Name(st.Name), Surname(st.Surname), mathpoint(st.mathpoint), fisicspoint(st.fisicspoint), infpoint(st.infpoint) {};

	~Student() {};

	Student& operator=(const Student& st)
	{
		Name = st.Name;
		Surname = st.Surname;
		mathpoint = st.mathpoint;
		fisicspoint = st.fisicspoint;
		infpoint = st.infpoint;

		return *this;
	}

	int AvaragePoint()
	{
		return (mathpoint + fisicspoint + infpoint);
	}

	void PrintInfo()
	{
		std::cout << Name << " " << Surname << std::endl;
	}
};

int main(int argc, char* argv[])
{
	int NumberOfStudents = 0;
	Student sta[100];

	std::cin >> NumberOfStudents;

	for (int i = 0; i < NumberOfStudents; i++)
	{
		std::cin >> sta[i].Name;
		std::cin >> sta[i].Surname;
		std::cin >> sta[i].mathpoint;
		std::cin >> sta[i].fisicspoint;
		std::cin >> sta[i].infpoint;
	}

	for (int i = 0; i < NumberOfStudents; i++)
	{
		for (int j = NumberOfStudents - 1; j > 0; j--)
		{
			if (sta[j].AvaragePoint() > sta[j - 1].AvaragePoint())
			{
				Student st;
				st = sta[j - 1];
				sta[j - 1] = sta[j];
				sta[j] = st;
			}
		}
	}

	for (int i = 0; i < NumberOfStudents; i++)
	{
		sta[i].PrintInfo();
	}

	return EXIT_SUCCESS;
}