#include<iostream>

using namespace std;

float Sqrt(float val) {
	int i = 0;
	float big, small, temp;
	for (; i*i < val; ++i) {}
	big = i;
	small = i - 1;
	for (;;) {
		if (big*big == val) return big;
		else if (small*small == val)return small;
		else {
			temp = (big + small) / 2;
			if (temp != big&&temp != small) {
				if (temp*temp > val)big = temp;
				else if (temp*temp < val)small = temp;
				else return temp;
			}
			else return temp;
		}
	}
}

int main() {
	float a = 8586;
	cout << Sqrt(a);
	system("pause");
	return 0;
}