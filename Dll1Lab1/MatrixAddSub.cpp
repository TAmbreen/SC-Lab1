#include "stdafx.h"
#include "MathLibrary.h"
#include<iostream>
#include<conio.h>


using namespace std;

namespace MathLibrary
{
	void sum()
	{
		int m, n, c, d, first[10][10], second[10][10], sum[10][10];

		cout << ".................Sum..............." << endl;
		cout << "Enter the number of rows of matrices ";
		cin >> m ;
		cout << "Enter the number of columns of matrices ";
		cin >> n;
		cout << "Enter the elements of first matrix\n";

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				cin >> first[c][d];
		    }
			
	    }
		cout << "Enter the elements of second matrix\n";

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				cin >> second[c][d];
			}

		}

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				sum[c][d] = first[c][d] + second[c][d];
			}

		}

		cout << "Sum of entered matrices:-\n";

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				cout << sum[c][d] << "\t";
			}
				
			cout << endl;
		}
	}

	void subtract()
	{
		int m, n, c, d, first[10][10], second[10][10], diff[10][10];

		cout << ".................Subtraction..............." << endl;
		cout << "Enter the number of rows of matrices ";
		cin >> m;
		cout << "Enter the number of columns of matrices ";
		cin >> n;

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				cin >> first[c][d];
			}

		}
		cout << "Enter the elements of second matrix\n";

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				cin >> second[c][d];
			}

		}

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				diff[c][d] = first[c][d] - second[c][d];
			}

		}

		cout << "Difference of entered matrices:-\n";

		for (c = 0; c < m; c++)
		{
			for (d = 0; d < n; d++)
			{
				cout << diff[c][d] << "\t";
			}

			cout << endl;
		}
	}
}