using namespace std;
void func() {
	cout << "Nhập vào một số nguyên: ";
	int a;
	cin >> a;
	cout << "Số nguyên vừa nhập là: " << a;

	if (a % 2 == 0)
		cout << "Số vừa nhập là số chẵn!";
	else
		cout << "Số vừa nhập không là số chẵn!";

	if (a % 2 == 1)
		cout << "Số vừa nhập là số lẻ";
	else
		cout << "Số vừa nhập không là số lẻ";
	
}
void main() {
	func();
}