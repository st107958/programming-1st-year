#include <iostream>

int main(int arg, char* argv[])
{
	int ban = 0;

	std::cin >> ban;

	int h = ban / 100;
	int t = (ban % 100) / 10;
	int o = ban % 10;

	switch (h)
	{
	case 1:
		std::cout << "sto ";
		break;
	case 2:
		std::cout << "dvesti ";
		break;
	case 3:
		std::cout << "trista ";
		break;
	case 4:
		std::cout << "chetirista ";
		break;
	case 5:
		std::cout << "pytsot ";
		break;
	case 6:
		std::cout << "sestsot ";
		break;
	case 7:
		std::cout << "semsot ";
		break;
	case 8:
		std::cout << "vosemsot ";
		break;
	case 9:
		std::cout << "devytsot ";
		break;
	case 0:
		break;
	}

	if (t == 1)
	{
		switch (o)
		{
		case 1:
			std::cout << "odinadcat bananov";
			break;
		case 2:
			std::cout << "dvenadcat bananov";
			break;
		case 3:
			std::cout << "trinadcat bananov";
			break;
		case 4:
			std::cout << "chetirnadcat bananov";
			break;
		case 5:
			std::cout << "pyatnadcat bananov";
			break;
		case 6:
			std::cout << "shestnadcat bananov";
			break;
		case 7:
			std::cout << "semnadcat bananov";
			break;
		case 8:
			std::cout << "vosemnadcat bananov";
			break;
		case 9:
			std::cout << "dvenadcat bananov";
			break;
		case 0:
			std::cout << "desyat bananov";
			break;
		}
	}

	else
	{
		switch (t)
		{
		case 2:
			std::cout << "dvadcat ";
			break;
		case 3:
			std::cout << "tridcat ";
			break;
		case 4:
			std::cout << "sorok ";
			break;
		case 5:
			std::cout << "pyadesat ";
			break;
		case 6:
			std::cout << "shesdesyat ";
			break;
		case 7:
			std::cout << "semdesyat ";
			break;
		case 8:
			std::cout << "vosemdesyat ";
			break;
		case 9:
			std::cout << "devyanosto ";
			break;
		case 0:
			break;
		}

		switch (o)
		{
		case 1:
			std::cout << "odin banan";
			break;
		case 2:
			std::cout << "dva banana";
			break;
		case 3:
			std::cout << "tri banana";
			break;
		case 4:
			std::cout << "chetire banana";
			break;
		case 5:
			std::cout << "pyat bananov";
			break;
		case 6:
			std::cout << "shest bananov";
			break;
		case 7:
			std::cout << "sem bananov";
			break;
		case 8:
			std::cout << "vosem bananov";
			break;
		case 9:
			std::cout << "devyat bananov";
			break;
		case 0:
			if (ban == 0)
			{
				std::cout << "nol bananov";
			}
			else
			{
				std::cout << "bananov";
			}
			break;
		}
	}

	return EXIT_SUCCESS;
}