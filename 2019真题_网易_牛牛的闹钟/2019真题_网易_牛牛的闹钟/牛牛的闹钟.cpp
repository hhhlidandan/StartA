//��Ŀ����
//ţţ����˯��ͷ�����������˺ܶ����ӣ�ֻ�����������ʱ�����Ż��ѹ������Ҿ������𴲡���������������ҪX���ӵ�����ң��Ͽ�ʱ��Ϊ�����AʱB�֣��������������ʲôʱ����
//�������� :
//ÿ���������һ������������
//ÿ�����������ĵ�һ�а���һ������������ʾ���ӵ�����N(N <= 100)��
//��������N��ÿ�а���������������ʾ������������ʱ��ΪHi(0 <= A<24)ʱMi(0 <= B<60)�֡�
//��������һ�а���һ����������ʾ������������ҪX(0 <= X <= 100)���ӵ�����ҡ�
//��������һ�а���������������ʾ�Ͽ�ʱ��ΪA(0 <= A<24)ʱB(0 <= B<60)�֡�
//���ݱ�֤������һ�����ӿ�����ţţ��ʱ������ҡ�
//������� :
//�������������ʾţţ������ʱ�䡣
//ʾ��1
//����
//3
//5 0
//6 0
//7 0
//59
//6 59
//���
//6 0
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int num = 0;//���ӵ�����
	int hour = 0, minite = 0;//ʱ��Ϊ����ʱ���ٷ�
	int way = 0;//·����Ҫ���
	int lesson = 0;//�Ͽε�ʱ��
	cin >> num;
	vector<int> start;
	start.resize(num);
	for (int i = 0; i<num; i++)
	{
		cin >> hour >> minite;
		start[i] = hour * 60 + minite;
	}
	sort(start.begin(), start.end());
	cin >> way;
	cin >> hour >> minite;
	lesson = hour * 60 + minite;

	for (int i = num - 1; i >= 0; --i)
	{
		if (lesson - start[i] >= way)
		{
			hour = start[i] / 60;
			minite = start[i] % 60;
			cout << hour << " " << minite << endl;
			break;
		}
	}
	return 0;
}