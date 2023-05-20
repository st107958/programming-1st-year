#include <iostream>
#include <stdlib.h>
#include <time.h>

enum AnimalType 
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

	void losehealth(int n) { m_health = m_health - n; }

public:
	AnimalName m_name;

	Animal(AnimalType type = None) 
    {
		this->m_type = type;
		this->m_health = 100;
		this->m_strength = 0;

		int x = 0;
		int y = 0;

		x = rand() % 20;
		y = rand() % 11;

		if (y == 0) { y++; };

		this->m_name = AnimalName(y);

		if (m_type == None)
		{
			m_name = Noname;
			m_health = 0;
			m_strength = 0;
		}
		
		else if(m_type == Antelope)
		{
			m_strength = 30 + x;
		}

		else if(m_type == Hare)
		{
			m_strength = 10 + x;
		}

		else if(m_type == Jackal)
		{
			m_strength = 50 + x;
		}

		else if(m_type == Lion)
		{
			m_strength = 100 + x;
		}

		else if(m_type == Bear)
		{
			m_strength = 100 + x;
		}

		else if(m_type == Snake)
		{
			m_strength = 20 + x;
		}
	}

	Animal(const Animal& animal) :
		m_type(animal.m_type), 
		m_name(animal.m_name), 
		m_strength(animal.m_strength), 
		m_health(animal.m_health) {}

	~Animal() {}

	Animal& operator=(const Animal& animal)
	{
		m_type = animal.m_type;
		m_name = animal.m_name;
		m_strength = animal.m_strength;
		m_health = animal.m_health;

		return *this;
	}

	void Printinfo()
	{
		std::cout << "тип: " << m_type <<  " " <<  "имя: " << m_name << " " << "сила: " << m_strength << " " << "здоровье: " << m_health << std::endl;
	}

	int GetType() { return m_type; }

	int GetName() { return m_name; }

	int GetStrength() { return m_strength; }

	int GetHealth() { return m_health; }

	void Mighter() { m_strength = m_strength + 10; }

	friend Animal Fight(Animal& animal1, Animal& animal2);

	void SetCharacteristics(Surrounding sur, AnimalType type)
	{
		if (sur == Desert)
		{
			if (m_type == Lion || m_type == Antelope || m_type == Snake)
			{
				m_strength = m_strength + 20;
			}
		}

		if (sur == Highlands)
		{
			if (m_type == Jackal || m_type == Antelope || m_type == Snake)
			{
				m_strength = m_strength + 20;
			}
		}

		if (sur == Forrest)
		{
			if (m_type == Hare || m_type == Bear || m_type == Snake)
			{
				m_strength = m_strength + 20;
			}
		}
     }

};

Animal Fight(Animal& animal1, Animal& animal2)
{
	animal1.losehealth(animal2.GetStrength() / 10);

	return animal1;
};

int randombattlefield()
{
	int x = 0;

	x = rand() % 4;

	if(x == 0) { x++; };

	return x;
};

void vers(Animal& animal1, Animal& animal2)
{
	Surrounding sur = Surrounding(randombattlefield());

	animal1.SetCharacteristics(sur, AnimalType(animal1.GetType()));
	animal2.SetCharacteristics(sur, AnimalType(animal2.GetType()));

	/*
	animal1.Printinfo();
	std::cout << "------------VERS----------------" << std::endl;
	animal2.Printinfo();

	std::cout << std::endl;
	std::cout << std::endl;
	*/

	int x = 0;

	x = rand() % 2;

	if ((animal2.GetHealth() > animal1.GetHealth()) || ((animal2.GetHealth() == animal1.GetHealth()) && (x == 0)))
	{
		Fight(animal1, animal2);

		if (animal1.GetHealth() < 0)
		{
			animal2.Mighter();
		}

		else if (animal1.GetHealth() > 0)
		{
			Fight(animal2, animal1);

			if (animal2.GetHealth() < 0)
			{
				animal1.Mighter();
			}
		}
	}

	else if((animal1.GetHealth() > animal2.GetHealth()) || ((animal2.GetHealth() == animal1.GetHealth()) && (x == 1)))
	{
		Fight(animal2, animal1);

		if (animal2.GetHealth() < 0)
		{
			animal1.Mighter();
		}

		else if (animal2.GetHealth() > 0)
		{
			Fight(animal1, animal2);

			if (animal1.GetHealth() < 0)
			{
				animal2.Mighter();
			}
		}

	}
};

int main(int argc, char argv[])
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	int n = 100;

	Animal *A = new Animal[n] {AnimalType(0)};

	int x = 0;

	for (int i = 0; i < n; i++)
	{		
		x = rand() % 7;

		if(x == 0) { x++; };

		AnimalType k = AnimalType(x);

		Animal a(k);

		A[i] = a;
	}

	int i = 0;
	
	while (n > 1)
	{
		vers(A[i], A[i + 1]);

		if (A[i].GetHealth() <= 0)
		{
			for (int j = i; j < n - 1; ++j)
			{
				A[j] = A[j + 1];
			}
			n--;
		}

		if (A[i + 1].GetHealth() < 0) 
		{
			for (int j = i + 1; j < n - 1; ++j)
			{
				A[j] = A[j + 1];
			}
			n--;
		}

		++i;

		if (i >= n - 1)
		{
			i = 0;
		}
	}

	std::cout << std::endl;
	std::cout << "WINER: ";
	
	A[0].Printinfo();

	delete[] A;

	return EXIT_SUCCESS;
}