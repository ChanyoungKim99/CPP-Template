#include <iostream>

template <typename T>		// ���ø�(Ʋ) �� ����
void Sort(T input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (input[i] > input[j])
			{
				T temp{ input[i] };
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}


template <typename T>
void PrintArray(T input[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << input[i] << std::endl;
	}
}

int main()
{
	int array[]{ 1,2,3,4,5 };
	Sort<int>(array, 5);		// T�� int�� ġȯ (<int>�� ��������)

	float array2[]{ 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	Sort<float>(array2, 5);		// T�� float�� ġȯ	(<float>�� ��������)

	PrintArray(array, 5);
	PrintArray(array2, 5);
}