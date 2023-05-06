#include <iostream>
#include <stdlib.h>
#include <time.h>

enum AnimalType // >2 - не хищники
{
	None, Antelope, Hare, Jackal, Lion, Bear, Snake
};

enum AnimalName
{
	Noname, Bob, Badi, Baki, Banny, Akira, Belka, Strelka, Gabi, Kaito, Kora
};

enum Surrounding
{
	Nowhere, Forrest, Desert, Highlands
};

class Animal
{
private:
	AnimalType m_type;
	int m_strength;
	int m_health;

public:
	AnimalName m_name;

	Animal(AnimalType type = None) 
    {
		this->m_type = type;
		if
	}

	Animal(const Animal& animal) :
		m_type(animal.m_type), 
		m_name(animal.m_name), 
		m_strength(animal.m_strength), 
		m_health(animal.m_health) {}

	~Animal() {}

	void Printinfo()
	{
		std::cout << "тип: " << m_type <<  " " <<  "имя: " << m_name << " " << "сила: " << m_strength << std::endl;
	}

	int GetType() { return m_type; }

	int GetName() { return m_name; }

	int GetStrength() { return m_strength; }

	void Mighter() { m_strength = m_strength + 10; }

	void LoseHealth() { m_health = m_health - 30; }

	/*void LoseStrength()
	{
		m_strength = m_strength - 5;
	}*/

	void SetCharacteristics(Surrounding sur, AnimalType type)
	{
		int x = 0;

		srand(time(NULL));

		x = rand() % 20;

		if (m_type == Antelope)
		{

		}

		if (sur == Forrest)
		{
			if (m_type == Hare || m_type == Snake || m_type == Antelope || m_type == Jackal)
			{
				m_strength = m_strength + 10;
			}
		}

		if (sur == Desert)
		{
			if (m_type == Lion || m_type == Antelope || m_type == Snake)
			{
				m_strength = m_strength + 10;
			}
		}

		if (sur == Highlands)
		{
			if (m_type == Jackal || m_type == Antelope || m_type == Snake)
			{
				m_strength = m_strength + 10;
			}
		}
	}
};

bool AnimalBehavioralType(Animal animal)
{
	int animaltype = 0;

	animaltype = animal.GetType();

	if (animaltype > 2)
	{
		return true;
	}

	else { return false; }
};

void createAnaimal()
{

}

int randombattlefield()
{
	int x = 0;

	srand(time(NULL));

	x = rand() % 4;

	if (x == 0) { x++; };

	return x;
};

void vers(Animal animal1, Animal animal2)
{
	Surrounding sur = Nowhere;

	sur = Surrounding(randombattlefield());

	animal1.SetCharacteristics(sur);
	animal2.SetCharacteristics(sur);

	if (AnimalBehavioralType(animal1))
	{
		if (AnimalBehavioralType(animal2))
		{
			if (animal1.GetStrength() > animal2.GetStrength())
			{

			}
		}
	}
};

int main(int argc, char argv[])
{
	setlocale(LC_ALL, "ru");

	Animal animal1(AnimalType(2),AnimalName(7), 27);
	Animal animal2(animal1);

	animal1.Printinfo();
	animal2.Printinfo();

	int x = 0;

	srand(time(NULL));

	x = rand();

	return EXIT_SUCCESS;
}