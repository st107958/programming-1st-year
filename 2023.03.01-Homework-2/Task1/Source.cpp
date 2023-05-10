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

	friend void Fight(Animal animal1, Animal animal2);

public:
	AnimalName m_name;

	Animal(AnimalType type = None, AnimalName name = Noname) 
    {
		this->m_type = type;
		this->m_name = name;
		this->m_health = 100;

		int x = 0;

		srand(time(NULL));

		x = rand() % 20;
		
		if(m_type == Antelope)
		{
			m_strength = 10 + x;
		}

		else if(m_type == Hare)
		{
			m_strength = x;
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
			m_strength = 30 + x;
		}
	}

	Animal(const Animal& animal) :
		m_type(animal.m_type), 
		m_name(animal.m_name), 
		m_strength(animal.m_strength), 
		m_health(animal.m_health) {}

	~Animal() {}

	Animal operator=(const Animal& animal)
	{
		m_type = animal.m_type;
		m_name = animal.m_name;
		m_strength = animal.m_strength;
		m_health = animal.m_health;
	}

	void Printinfo()
	{
		std::cout << "тип: " << m_type <<  " " <<  "имя: " << m_name << " " << "сила: " << m_strength << std::endl;
	}

	int GetType() { return m_type; }

	int GetName() { return m_name; }

	int GetStrength() { return m_strength; }

	int GetHealth() { return m_health; }

	void Mighter() { m_strength = m_strength + 10; }

	void SetCharacteristics(Surrounding sur, AnimalType type)
	{
		if(sur == Forrest)
		{
			if(m_type == Hare || m_type == Snake || m_type == Antelope || m_type == Jackal)
			{
				m_strength = m_strength + 10;
			}
		}

		if(sur == Desert)
		{
			if(m_type == Lion || m_type == Antelope || m_type == Snake)
			{
				m_strength = m_strength + 10;
			}
		}

		if(sur == Highlands)
		{
			if(m_type == Jackal || m_type == Antelope || m_type == Snake)
			{
				m_strength = m_strength + 10;
			}
		}
	}
};

void Fight(Animal animal1, Animal animal2)
{
	animal1.m_health = animal1.m_health - (animal2.m_health() / 10);
};

int randombattlefield()
{
	int x = 0;

	srand(time(NULL));

	x = rand() % 4;

	if(x == 0) { x++; };

	return x;
};

void vers(Animal animal1, Animal animal2)
{
	Surrounding sur = Surrounding(randombattlefield());

	animal1.SetCharacteristics(sur, AnimalType(animal1.GetType()));
	animal2.SetCharacteristics(sur, AnimalType(animal2.GetType()));
	
	int x = 0;

	srand(time(NULL));

	x = rand() % 2;

	if((animal2.GetHealth() > animal1.GetHealth()) || ((animal2.GetHealth() = animal1.GetHealth()) & (x == 0))
	{
		Fight(animal1, animal2);

			if(animal1.GetHealth < 0)
			{
				animal2.Mighter();
			};

			else if(animal1.GetHealth > 0)
			{
				Fight(animal2, animal1);

				if(animal2.GetHealth < 0)
				{
					animal1.Mighter();
				};
			};
	};

	else if((animal1.GetHealth() > animal2.GetHealth()) || ((animal2.GetHealth() = animal1.GetHealth()) & (x == 1))
	{
		Fight(animal2, animal1);

			if(animal2.GetHealth < 0)
			{
				animal1.Mighter();
			};

			else if(animal2.GetHealth > 0)
			{
				Fight(animal1, animal2);

				if(animal1.GetHealth < 0)
				{
					animal2.Mighter();
				};
			};
	};

}

int main(int argc, char argv[])
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	int n = 100;

	Animal *A = new Animal[n] {0, 0};

	for (int i = 0; i < n; i++)
	{
		int x = 0;
		int y = 0;

		x = rand();
		y = rand();

		A[i](AnimalType(x), AnimalName(y));
	}

	int i = 0;

	while (n > 1)
	{
		vers(A[i], A[i + 1]);

		if (A[i].GetHealth() < 0)
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

		if (i > n - 1)
		{
			i = 0;
		}
	}

	A[1].Printinfo();

	delete[] A;

	return EXIT_SUCCESS;
}