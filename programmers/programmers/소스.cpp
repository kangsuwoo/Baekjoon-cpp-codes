#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n >= 1 || n <= 100)
	{
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << '*';
			}
			cout << "\n";
		}
	}

	return 0;
}
// ���� �˶��ð�
/*int h, m;


	//scanf("%d %d", h, m);
	scanf("%d %d", &h, &m);
	
	if (h >= 0 || h <= 23 && m >= 0 || m <= 59) // H �� �� M �� ��
	{
		m -= 45;

		if (m < 0) // 45�� ���� �︱�� �ð�
		{
			h -= 1;
			m += 60;
		}
		if (h < 0) h = 23;

		printf("%d %d", h, m);
		
	}
*/ // 
// C �� ǰ
// ���� ��и� ����
/*int x, y;

	scanf("%d %d", &x, &y);

	if    (x >= -1000 || x <= 1000 
		&& y >= -1000 || y <= 1000 
		&& y != 0 || x != 0 )
	{
		if (x < 0)
		{
			if (y > 0)
			{
				printf("2");
			}
			else if (y < 0)
			{
				printf("3");
			}		
		}
		else if (x > 0)
		{
			if (y > 0)
			{
				printf("1");
			}
			else if (y < 0)
			{
				printf("4");
			}
		}
	}
	return 0;*/
// C �� ǰ

// ���� for ��

// ���� A + B - 3(7, 8)
/*int  a, b, t;

1)
	 cin >> t;
	if (a > 0 || a < 10
		&& b > 0 || b < 10)
	{
		for (int i = 0; i < t; ++i)
		{
			cin >> a >> b;
			cout << a + b << endl;
		}
	} return 0;
2)
	int a, b, t;
	cin >> t;

	for (int i = 1; i < t + 1; ++i)
	{
		cin >> a >> b;
		if (a <= 10 || a >= 0
			&& b <= 10 || b >= 0)
		{
			a + b;
		}
		cout << "Case #" << i << ": " << a + b << endl;
	}	return 0;
3)
	int a, b, t;
	cin >> t;
	
	for (int i = 1; i < t + 1; ++i)
	{
		cin >> a >> b;
		if (a <= 10 || a >= 0
			&& b <= 10 || b >= 0)
		{
			a + b;
		}
		cout << "Case #" << i << ": " << a << " + "<< b << " = " << a + b << endl;
	}*/ 
// ���� ���� A + B
/*
ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, t;

	cin >> t;
	for (int i; i < t; ++i)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;*/
// ���� �� 
/*
ù��°

	int n;
	int sum = 0;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		sum = sum + i;
	}
	cout << sum;
	return 0;
�ι���
    int n;
	cin >> n;
	cout << n * (n + 1) / 2;

}*/
// ���� N ���
/*
ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; ++i)
	{
		cout << i << "\n";
	}

	return 0;*/
// ���� ���� N (������ �Ųٷ� ����)
/*ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = n; i > 0; --i)
	{
		cout << i << "\n";
	} 

	return 0;*/


