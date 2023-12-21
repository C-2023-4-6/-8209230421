//#include<iostream>
//using namespace std;
//class student {
//private:
//	int num;
//	float grade;
//
//
//public:
//
//	student(int num = 0, float grade = 0)
//	{
//		this->num = num;
//		this->grade = grade;
//
//
//		
//	}
//	void max(student*p)
//	{
//		int max=p->grade;
//		int n = p->num;
//		for (int i=0; i < 4; i++,p++)
//		{
//			if (max > (p+1)->grade)
//			{
//				max = p->grade;
//				n = p->num;
//
//			}
//			else
//			{
//				max = (p+1)->grade;
//				n = (p + 1)->num;
//			}
//
//
//		}
//
//		cout << max << endl;
//		cout << n << endl;
//
//
//
//	}
//
//
//
//};
//int main()
//{
//
//
//	student stu[5] = { student(20,60),student(21,70),student(22,80),student(23,90),student(24,100) };//数组可看作指针
//	stu->max(stu);
//
//
//
//
//}