//Kiem tra co phai la so nguyen to hay khong
int TestSNT(int n){
	for (int i = 2; i<n; i++){
		if (n%i == 0 && n != 2){
			return 0;
			break;
		}
		else{
			if (i == n - 1){
				return n;
			}
		}
	}
}

//Phan tich 1 so thanh thua so nguyen to
void Dissociate() {
	int n;
	cout << "So nhap vao: ";
	cin >> n;
	cout << n << " = ";
	for (int j = 2; j <= n; j++){
		if (TestSNT(j) != 0){
			while (n % TestSNT(j) == 0) {
				n /= TestSNT(j);
				mystack.push(TestSNT(j));
			}
		}
	}
	cout << mystack.top();
	mystack.pop();
	while (!mystack.empty()) {
		cout << " * " << mystack.top();
		mystack.pop();
	}
}

//Thap phan - Thap luc phan
void Dec2Hex() {
	int n;
	cout << "So nhap vao: ";
	cin >> n;
	while (n >= 16) {
		mystack.push(n % 16);
		n /= 16;
	}
	mystack.push(n);
	cout << "Dang HEX: n = ";
	while (!mystack.empty()) {
		switch (mystack.top()) {
		case 10: cout << "A"; mystack.pop(); break;
		case 11: cout << "B"; mystack.pop(); break;
		case 12: cout << "C"; mystack.pop(); break;
		case 13: cout << "D"; mystack.pop(); break;
		case 14: cout << "E"; mystack.pop(); break;
		case 15: cout << "F"; mystack.pop(); break;
		default: cout << mystack.top(); mystack.pop(); break;
		}
	}
}

//Thap phan - Bat phan
void Dec2Oct() {
	int n;
	cout << "So nhap vao: ";
	cin >> n;
	while (n >= 8) {
		mystack.push(n % 8);
		n /= 8;
	}
	mystack.push(n);
	cout << "Dang OCT: n = ";
	while (!mystack.empty()) {
		cout << mystack.top();
		mystack.pop();
	}
}

//Thap phan - Nhi phan
void Dec2Bin() {
	int n;
	cout << "So nhap vao: ";
	cin >> n;
	while (n >= 2) {
		mystack.push(n % 2);
		n /= 2;
	}
	mystack.push(n);
	cout << "Dang BIN: n = ";
	while (!mystack.empty()) {
		cout << mystack.top();
		mystack.pop();
	}
}