#include <iostream>

void Sort(int input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (input[i] > input[j])
			{
				int temp{ input[i] };
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

void Sort(float input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (input[i] > input[j])
			{
				float temp{ input[i] };
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

void Sort(double input[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (input[i] > input[j])
			{
				double temp{ input[i] };
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

// �Ȱ��� �ݺ��Ǵ� ���� ����
// Ʋ�� �����ʹ�!

int main()
{
	int array[]{ 1,2,3,4,5 };
	Sort(array, 5);
}