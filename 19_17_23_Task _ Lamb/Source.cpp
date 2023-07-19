#include<iostream>
#include<vector>
#include<list>
#include<random>


//Taask1 
		/*
		  в коллекции заполненной случайными значени€ми надо
		  перенести все повтор€ющиес€ элементы в другую коллекцию
		  перенос осуществл€етс€ в единичном экземп€ре из первой 
		  коллекции все элементы удал€ютс€
		*/

bool IsMore(int a, int b) // —оздадим виртуальную. функцию сравнени€ элементов
{	
	return a>b;
}

int maun()
{
	std::list<int>coll1;
	std::vector<int> coll2;
	std::vector<int> coll3;

	// —оздали генераторы случайных чисел
	std::mt19937 generator(15);
	std::random_device rd;
	std::uniform_int_distribution<int> provider(10, 199);

	//заполнили наши коллекции этими числами
	for (size_t i = 0; i < 20; ++i)
	{
		coll1.push_back(provider(generator));
		coll2.push_back(provider(generator));
		
	}

	int count{}; // —оздали счетчик

	// »щем повторени€ в первой коллекции
	for (const auto& node : coll1)
	{
		auto it = std::find_if(coll1.begin(), coll1.end(), node);
		if (it != coll1.end())
		{
			coll3.erase() = 
		}
	}

	// ищем повторени€ в coll1


	return 0;
}