#include<iostream>
#include<vector>
#include<list>
#include<random>


//Taask1 
		/*
		  � ��������� ����������� ���������� ���������� ����
		  ��������� ��� ������������� �������� � ������ ���������
		  ������� �������������� � ��������� ��������� �� ������ 
		  ��������� ��� �������� ���������
		*/

bool IsMore(int a, int b) // �������� �����������. ������� ��������� ���������
{	
	return a>b;
}

int maun()
{
	std::list<int>coll1;
	std::vector<int> coll2;
	std::vector<int> coll3;

	// ������� ���������� ��������� �����
	std::mt19937 generator(15);
	std::random_device rd;
	std::uniform_int_distribution<int> provider(10, 199);

	//��������� ���� ��������� ����� �������
	for (size_t i = 0; i < 20; ++i)
	{
		coll1.push_back(provider(generator));
		coll2.push_back(provider(generator));
		
	}

	int count{}; // ������� �������

	// ���� ���������� � ������ ���������
	for (const auto& node : coll1)
	{
		auto it = std::find_if(coll1.begin(), coll1.end(), node);
		if (it != coll1.end())
		{
			coll3.erase() = 
		}
	}

	// ���� ���������� � coll1


	return 0;
}