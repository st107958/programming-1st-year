#include <iostream>
#include <string>

struct Animal {
	std::string type;
	std::string name;
	int age;
	
	Animal(
		std::string type = "popugai",
		std::string name = "kesha",
		int age = 5)

	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal &ani)
	{
		this->type = ani.type;
		this->name = ani.name;
		this->age = ani.age;
	}

	void printAnimal()
	{
		std::cout << type << name << age << std::endl;
	}

	void elderAnimal()
	{
		age++;
	}

	~Animal()
	{

	}
};

int main(int argc, char* argv[])
{
	return EXIT_SUCCESS;
}