//#include <iostream>
//using namespace std;
//
//void main()
//{
//#pragma region Task1
//	int original_number = 0;
//	int count = 1;
//	int count_null = 0;
//	int total = 0;
//
//	cout << "Enter your number: ";
//	cin >> original_number;
//
//	int number = original_number;
//
//	while (number /= 10)
//	{
//		count++;
//		if ((number % 10) == 0)
//		{
//			++count_null;
//		}
//	}
//	while (original_number > 0)
//	{
//		total += original_number % 10;
//		original_number /= 10;
//	}
//	float mean_number = total / count;
//
//	cout << "This is number of digits in number: " << count << endl << "This is number of nulls in number: " << count_null << endl << "This is total: " << total << endl << "This is mean: " << mean_number << endl;
//#pragma endregion
//#pragma region Task2
//	cout << "  -----------------\n" << "   a b c d e f g h \n" << " --------------------------- \n" << "8|a8|b8|c8|d8|e8|f8|g8|h8|8\n" << " --------------------------- \n" << "7|a7|b7|c7|d7|e7|f7|g7|h7|7\n" << " --------------------------- \n" << "6|a6|b6|c6|d6|e6|f6|g6|h6|6\n" << " --------------------------- \n" << "5|a5|b5|c5|d5|e5|f5|g5|h5|5\n" << " --------------------------- \n" << "4|a4|b4|c4|d4|e4|f4|g4|h4|4\n" << " --------------------------- \n" << "3|a3|b3|c3|d3|e3|f3|g3|h3|3\n" << " --------------------------- \n" << "2|a2|b2|c2|d2|e2|f2|g2|h2|2\n" << " --------------------------- \n" << "1|a1|b1|c1|d1|e1|f1|g1|h1|1\n" << " --------------------------- \n" << "   a b c d e f g h \n" << "  -----------------\n";
//#pragma endregion
//}