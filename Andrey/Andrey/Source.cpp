#include "Header.h"
void DataInitialization() {
	ofstream _buf("Buffer.txt");
	if (!_buf)
		cout << "������ �������� ��������� �����" << endl;
	_buf.close();
}
void DataEntry() {
	string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
	int _gender, _YearOfReceipt, RecordBook, n;
	cout << "������� ����������� ������: ";
	cin >> n;
	ofstream record("buffer.txt", ios::app);
	if (record) {
		record << n << endl;
		for (int i = 0; i < n; i++) {
			cout << "�������� ��� 1-�������, 0-�������: ";
			cin >> _gender;
			cout << "������� �������: ";
			cin >> _surnameF;
			cout << "������� ���: ";
			cin >> _surnameI;
			cout << "������� ��������: ";
			cin >> _surnameO;
			cout << "������� ���� ��������: ";
			cin >> _DOBDay;
			cout << "������� ����� ��������: ";
			cin >> _DOBMonth;
			cout << "������� ��� ��������: ";
			cin >> _DOBYear;
			cout << "������� ����� �������� ������ ��������: ";
			cin >> RecordBook;
			cout << "������� ������������ ����������: ";
			cin >> Fak;
			cout << "������� ������������ �������: ";
			cin >> Kaf;
			cout << "������� ����� ������: ";
			cin >> Group;
			cout << "������� ��� �����������: ";
			cin >> _YearOfReceipt;
			record << _gender << endl;
			record << _surnameF << endl;
			record << _surnameI << endl;
			record << _surnameO << endl;
			record << _DOBDay << endl;
			record << _DOBMonth << endl;
			record << _DOBYear << endl;
			record << RecordBook << endl;
			record << Fak << endl;
			record << Kaf << endl;
			record << Group << endl;

			if (i < n - 1)
				record << _YearOfReceipt << endl;
			else
				record << _YearOfReceipt;
			cout << "______________________________________" << endl;

		}
	}
	else
		cout << "������ �������� �����!" << endl;
	record.close();
}
void DataReading(string fileName) {
	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> _DOBDay;
				reading >> _DOBMonth;
				reading >> _DOBYear;
				reading >> RecordBook;
				reading >> Fak;
				reading >> Kaf;
				reading >> Group;
				reading >> _YearOfReceipt;
				record << _gender << endl;
				record << _surnameF << endl;
				record << _surnameI << endl;
				record << _surnameO << endl;
				record << _DOBDay << endl;
				record << _DOBMonth << endl;
				record << _DOBYear << endl;
				record << RecordBook << endl;
				record << Fak << endl;
				record << Kaf << endl;
				record << Group << endl;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
			cout << "������ �������!" << endl;

		}
		else
			cout << "������ �������� ������" << endl;
	}
	else
		cout << "������ �������� �����!" << endl;
	reading.close();
	record.close();
}
void Print() {
	ifstream reading("Buffer.txt");
	if (reading) {
		string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
		int _gender, _YearOfReceipt, RecordBook, n;
		reading >> n;
		cout << "����������� ������: " << n << endl << endl;
		for (int i = 0; i < n; i++) {
			cout << "������ �" << i + 1 << endl;
			reading >> _gender;
			cout << "���(1-���.;0-���.): " << _gender << endl;
			reading >> _surnameF;
			reading >> _surnameI;
			reading >> _surnameO;
			cout << "�.�.�: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
			reading >> _DOBDay;
			reading >> _DOBMonth;
			reading >> _DOBYear;
			cout << "���� ��������: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
			reading >> RecordBook;
			cout << "�������� ������: " << RecordBook << endl;
			reading >> Fak;
			cout << "���������: " << Fak << endl;
			reading >> Kaf;
			cout << "�������: " << Kaf << endl;
			reading >> Group;
			cout << "������: " << Group << endl;
			reading >> _YearOfReceipt;
			cout << "��� �����������: " << _YearOfReceipt << endl;
			cout << "__________________________________________" << endl;

		}
	}
	else
		cout << "������ ������ �����!" << endl;
	reading.close();

}
bool DataCleaning() {
	bool clear = false;
	fstream _buf("Buffer.txt", ios::out);
	ofstream reading("DivisionBoy.txt");
	ofstream reading_("DivisionGirl.txt");
	ofstream read("Division.txt");
	if (!_buf)
		cout << "������ �������� ��������� �����!" << endl;
	_buf.clear();
	if (_buf.peek() == EOF)
		clear = true;
	else
		clear = false;
	_buf.close();
	reading.close();
	reading_.close();
	read.close();
	remove("DivisionGirl.txt");
	remove("DivisionBoy.txt");
	remove("Division.txt");
	return clear;
}
void DataChange() {
	Copy();
	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n, _n;
			reading >> n;
			cout << "�������� ����� ����������� �������� (�� 1 ��" << n << "): ";
			cin >> _n;
			_n--;
			system("cls");
			record << n << endl;
			if (_n >= 0 && _n < n) {
				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _gender;
						record << _gender << endl;
						reading >> _surnameF;
						record << _surnameF << endl;
						reading >> _surnameI;
						record << _surnameI << endl;
						reading >> _surnameO;
						record << _surnameO << endl;
						reading >> _DOBDay;
						record << _DOBDay << endl;
						reading >> _DOBMonth;
						record << _DOBMonth << endl;
						reading >> _DOBYear;
						record << _DOBYear << endl;
						reading >> RecordBook;
						record << RecordBook << endl;
						reading >> Fak;
						record << Fak << endl;
						reading >> Kaf;
						record << Kaf << endl;
						reading >> Group;
						record << Group << endl;
						reading >> _YearOfReceipt;
						if (i < n - 1)
							record << _YearOfReceipt << endl;
						else
							record << _YearOfReceipt;
					}
					else {
						cout << "�������� ��� 1-�������, 0-�������: ";
						cin >> _gender;
						record << _gender << endl;
						cout << "������� �������: ";
						cin >> _surnameF;
						record << _surnameF << endl;
						cout << "������� ���: ";
						cin >> _surnameI;
						record << _surnameI << endl;
						cout << "������� ��������: ";
						cin >> _surnameO;
						record << _surnameO << endl;
						cout << "������� ���� ��������: ";
						cin >> _DOBDay;
						record << _DOBDay << endl;
						cout << "������� ����� ��������: ";
						cin >> _DOBMonth;
						record << _DOBMonth << endl;
						cout << "������� ��� ��������: ";
						cin >> _DOBYear;
						record << _DOBYear << endl;
						cout << "������� ����� �������� ������: ";
						cin >> RecordBook;
						record << RecordBook << endl;
						cout << "������� ������������ ����������: ";
						cin >> Fak;
						record << Fak << endl;
						cout << "������� ������������ �������: ";
						cin >> Kaf;
						record << Kaf << endl;
						cout << "������� ����� ������: ";
						cin >> Group;
						record << Group << endl;
						cout << "������� ��� �����������: ";
						cin >> _YearOfReceipt;
						if (i < n - 1)
							record << _YearOfReceipt << endl;
						else
							record << _YearOfReceipt;
						reading >> _gender;
						reading >> _surnameF;
						reading >> _surnameI;
						reading >> _surnameO;
						reading >> _DOBDay;
						reading >> _DOBMonth;
						reading >> _DOBYear;
						reading >> RecordBook;
						reading >> Fak;
						reading >> Kaf;
						reading >> Group;
						reading >> _YearOfReceipt;
					}
				}
				cout << "������ ��������!" << endl;
			}
			else
				cout << "����� ������ �� �����!" << endl;
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;
	record.close();
	reading.close();
	remove("Buffer_.txt");
}
void Copy() {
	ifstream reading("Buffer.txt");
	ofstream record("Buffer_.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;
	record.close();
	reading.close();
}
int AmountOfData() {
	ifstream _buf("Buffer.txt");
	int n;
	if (_buf) {
		_buf >> n;
	}
	else
		cout << "������ �������� ���������� �����!" << endl;
	_buf.close();
	return n;
}
void DeleteData() {
	Copy();
	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n, _n;
			reading >> n;
			int b = n - 1;
			cout << "�������� ����� ����������� �������� (�� 1 �� " << n << "): ";
			cin >> _n;
			_n--;
			system("cls");
			record << b << endl;
			if (_n >= 0 && _n < n) {
				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _gender;
						record << _gender << endl;
						reading >> _surnameF;
						record << _surnameF << endl;
						reading >> _surnameI;
						record << _surnameI << endl;
						reading >> _surnameO;
						record << _surnameO << endl;
						reading >> _DOBDay;
						record << _DOBDay << endl;
						reading >> _DOBMonth;
						record << _DOBMonth << endl;
						reading >> _DOBYear;
						record << _DOBYear << endl;
						reading >> RecordBook;
						record << RecordBook << endl;
						reading >> Fak;
						record << Fak << endl;
						reading >> Kaf;
						record << Kaf << endl;
						reading >> Group;
						record << Group << endl;
						reading >> _YearOfReceipt;
						if (i < n - 1)
							record << _YearOfReceipt << endl;
						else
							record << _YearOfReceipt;
					}
					else {
						reading >> _gender;
						reading >> _surnameF;
						reading >> _surnameI;
						reading >> _surnameO;
						reading >> _DOBDay;
						reading >> _DOBMonth;
						reading >> _DOBYear;
						reading >> RecordBook;
						reading >> Fak;
						reading >> Kaf;
						reading >> Group;
						reading >> _YearOfReceipt;
					}
				}
				cout << "������ �������!" << endl;
			}
			else
				cout << "����� ������ �� �����!" << endl;
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ ������� ��������� �����!" << endl;
	record.close();
	reading.close();
	remove("Buffer_.txt");
}
void AddData() {
	string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
	int _gender, _YearOfReceipt, RecordBook;
	int n = AmountOfData() + 1;
	ofstream record("Buffer.txt", ios::app);
	ofstream record_("Buffer.txt", ios::out | ios::in);
	if (record_) {
		record_ << n << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;
	if (record) {
		record << endl;
		cout << "�������� ��� 1-�������, 2-�������: ";
		cin >> _gender;
		cout << "������� �������: ";
		cin >> _surnameF;
		cout << "������� ���: ";
		cin >> _surnameI;
		cout << "������� ��������: ";
		cin >> _surnameO;
		cout << "������� ���� ��������: ";
		cin >> _DOBDay;
		cout << "������� ����� ��������: ";
		cin >> _DOBMonth;
		cout << "������� ��� ��������: ";
		cin >> _DOBYear;
		cout << "������� ����� �������� ������: ";
		cin >> RecordBook;
		cout << "������� ������������ ����������: ";
		cin >> Fak;
		cout << "������� ������������ �������: ";
		cin >> Kaf;
		cout << "������� ����� ������: ";
		cin >> Group;
		cout << "������� ��� �����������: ";
		cin >> _YearOfReceipt;
		record << _gender << endl;
		record << _surnameF << endl;
		record << _surnameI << endl;
		record << _surnameO << endl;
		record << _DOBDay << endl;
		record << _DOBMonth << endl;
		record << _DOBYear << endl;
		record << RecordBook;
		record << Fak;
		record << Kaf;
		record << Group;
		record << _YearOfReceipt;
	}
	else
		cout << "������ �������� �����!" << endl;
	record.close();
	record_.close();
}
void SaveData(string fileName) {
	ifstream reading("Buffer.txt");
	ofstream record(fileName, ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;

			}
			cout << "������ ��������� � ����� " << fileName << endl;
		}
		else
			cout << "������ �������� ��������� �����!" << endl;
	}
	else
		cout << "������ �������� �����" << endl;
	record.close();
	reading.close();

}
void CopyBoy(int _BOY) {
	ifstream reading("DivisionBoy_.txt");
	ofstream record("DivisionBoy.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook;
			int n = _BOY;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;
	record.close();
	reading.close();

}
void CopyGirl(int _GIRL) {
	ifstream reading("DivisionGirl_.txt");
	ofstream record("DivisionGirl.txt", ios::out);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook;
			int n = _GIRL;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				record << _gender << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				reading >> _DOBDay;
				record << _DOBDay << endl;
				reading >> _DOBMonth;
				record << _DOBMonth << endl;
				reading >> _DOBYear;
				record << _DOBYear << endl;
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> Fak;
				record << Fak << endl;
				reading >> Kaf;
				record << Kaf << endl;
				reading >> Group;
				record << Group << endl;
				reading >> _YearOfReceipt;
				if (i < n - 1)
					record << _YearOfReceipt << endl;
				else
					record << _YearOfReceipt;
			}
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;
	record.close();
	reading.close();

}
void DivisionGender() {
	ifstream reading("Buffer.txt");
	ofstream record("DivisionBoy_.txt", ios::out | ios::end);
	ofstream record_("DivisionGirl_.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
			int _gender, _YearOfReceipt, RecordBook, n;
			int _BOY = 0, _GIRL = 0;
			reading >> n;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				if (_gender != 1) {
					_GIRL++;
					record_ << _gender << endl;
					reading >> _surnameF;
					record_ << _surnameF << endl;
					reading >> _surnameI;
					record_ << _surnameI << endl;
					reading >> _surnameO;
					record_ << _surnameO << endl;
					reading >> _DOBDay;
					record_ << _DOBDay << endl;
					reading >> _DOBMonth;
					record_ << _DOBMonth << endl;
					reading >> _DOBYear;
					record_ << _DOBYear << endl;
					reading >> RecordBook;
					record_ << RecordBook << endl;
					reading >> Fak;
					record_ << Fak << endl;
					reading >> Kaf;
					record_ << Kaf << endl;
					reading >> Group;
					record_ << Group << endl;
					reading >> _YearOfReceipt;
					if (i < n - 1)
						record_ << _YearOfReceipt << endl;
					else
						record_ << _YearOfReceipt;

				}
				else {
					_BOY++;
					record << _gender << endl;
					reading >> _surnameF;
					record << _surnameF << endl;
					reading >> _surnameI;
					record << _surnameI << endl;
					reading >> _surnameO;
					record << _surnameO << endl;
					reading >> _DOBDay;
					record << _DOBDay << endl;
					reading >> _DOBMonth;
					record << _DOBMonth << endl;
					reading >> _DOBYear;
					record << _DOBYear << endl;
					reading >> RecordBook;
					record << RecordBook << endl;
					reading >> Fak;
					record << Fak << endl;
					reading >> Kaf;
					record << Kaf << endl;
					reading >> Group;
					record << Group << endl;
					reading >> _YearOfReceipt;
					if (i < n - 1)
						record << _YearOfReceipt << endl;
					else
						record << _YearOfReceipt;


				}
			}
			cout << "���������� �������: " << _GIRL << endl;
			cout << "���������� ������: " << _BOY << endl;
			CopyBoy(_BOY);
			CopyGirl(_GIRL);
			cout << "������� ���������!" << endl;

		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;

	record.close();
	reading.close();
	record_.close();
	remove("DivisionGirl_.txt");
	remove("DivisionBoy_.txt");
}
void PrintDivision() {
	ifstream reading("DivisionBoy.txt");
	ifstream reading_("DivisionGirl.txt");
	if (reading) {
		string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
		int _gender, _YearOfReceipt, RecordBook;
		int n, gen;
		cout << "������ ���������(1) ��� �������(0) �� ������ �������? > ";
		cin >> gen;
		system("cls");
		if (gen != 0) {
			cout << "������ ���������(1) " << endl;
			reading >> n;
			cout << "����������� ������: " << n << endl << endl;
			for (int i = 0; i < n; i++) {
				cout << "������ �" << i + 1 << endl;
				reading >> _gender;
				cout << "���(1-���.;0-���.): " << _gender << endl;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				cout << "�.�.�: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
				reading >> _DOBDay;
				reading >> _DOBMonth;
				reading >> _DOBYear;
				cout << "���� ��������: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
				reading >> RecordBook;
				cout << "����� �������� ������: " << RecordBook << endl;
				reading >> Fak;
				cout << "���������: " << Fak << endl;
				reading >> Kaf;
				cout << "�������: " << Kaf << endl;
				reading >> Group;
				cout << "������: " << Group << endl;
				reading >> _YearOfReceipt;
				cout << "��� �����������: " << _YearOfReceipt << endl;
				cout << "__________________________________________" << endl;
			}
		}
		else {
			cout << "������ �������(0) " << endl;
			reading_ >> n;
			cout << "����������� ������: " << n << endl << endl;
			for (int i = 0; i < n; i++) {
				cout << "������ �" << i + 1 << endl;
				reading_ >> _gender;
				cout << "���(1-���.;0-���.): " << _gender << endl;
				reading_ >> _surnameF;
				reading_ >> _surnameI;
				reading_ >> _surnameO;
				cout << "�.�.�: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
				reading_ >> _DOBDay;
				reading_ >> _DOBMonth;
				reading_ >> _DOBYear;
				cout << "���� ��������: " << _DOBDay << "." << _DOBMonth << "." << _DOBYear << endl;
				reading_ >> RecordBook;
				cout << "����� �������� ������: " << RecordBook << endl;
				reading_ >> Fak;
				cout << "���������: " << Fak << endl;
				reading_ >> Kaf;
				cout << "�������: " << Kaf << endl;
				reading_ >> Group;
				cout << "������: " << Group << endl;
				reading_ >> _YearOfReceipt;
				cout << "��� �����������: " << _YearOfReceipt << endl;
				cout << "__________________________________________" << endl;
			}
		}
	}
	else
		cout << "������ ������ �����!" << endl;
	reading.close();
	reading_.close();
}
void RecordsBooks() {
	ifstream reading("Buffer.txt");
	ofstream record("RecordsBooks.txt", ios::out | ios::end);
	string _surnameF, _surnameI, _surnameO, _DOBDay, _DOBMonth, _DOBYear, Fak, Kaf, Group;
	int _gender, _YearOfReceipt, RecordBook, n;
	if (reading) {
		if (record) {
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> _gender;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> _DOBDay;
				reading >> _DOBMonth;
				reading >> _DOBYear;
				reading >> RecordBook;
				reading >> Fak;
				reading >> Kaf;
				reading >> Group;
				reading >> _YearOfReceipt;
				record << RecordBook << endl;
				record << _surnameF << endl;
				record << _surnameI << endl;
				if (i < n - 1)
					record << _surnameO << endl;
				else
					record << _surnameO;

			}
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;
	reading.close();
	record.close();
}
void Marks() {
	RecordsBooks();
	ifstream reading("RecordsBooks.txt");
	ofstream record("Marks.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, Lesson;
			int RecordBook, _RecordBook;
			int n;
			int  _marks, session, kol;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> _surnameF;
				record << _surnameF << endl;
				reading >> _surnameI;
				record << _surnameI << endl;
				reading >> _surnameO;
				record << _surnameO << endl;
				cout << "������� ���������� ���������: ";
				cin >> kol;
				record << kol << endl;
				for (int j = 0; j < kol; j++) {
					cout << "������� �������� ��������: ";
					cin >> Lesson;
					record << Lesson << endl;
					for (int g = 0; g < 9; g++) {
						cout << "������� ������ �� " << g + 1 << "-�� ������: ";
						cin >> _marks;
						record << _marks << endl;
					}
				}
				cout << "______________________________________" << endl;
			}
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ ������� ��������� �����!" << endl;
	reading.close();
	record.close();
}
void PrintMarks() {
	ifstream reading("Marks.txt");
	if (reading) {
		string _surnameF, _surnameI, _surnameO, Lesson;
		int RecordBook, _RecordBook;
		int n;
		int  _marks, session, kol;
		reading >> n;

		for (int i = 0; i < n; i++) {
			reading >> RecordBook;
			cout << "����� �������� ������: " << RecordBook << endl;
			reading >> _surnameF;
			reading >> _surnameI;
			reading >> _surnameO;
			cout << "�.�.�: " << _surnameF << " " << _surnameI << " " << _surnameO << endl;
			reading >> kol;
			for (int j = 0; j < kol; j++) {
				reading >> Lesson;
				cout << "�������� ��������: " << Lesson << endl;
				for (int g = 0; g < 9; g++) {
					reading >> _marks;
					cout << "����� �� " << g + 1 << "-�� ������: " << _marks << endl;


				}
			}
			cout << "____________________________________" << endl;
		}
	}
	else
		cout << "������ ������� ��������� �����!" << endl;
	reading.close();
}
void Check2() {
	ifstream reading("KoafMarks1.txt");
	ofstream record("KoafMarks.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			int RecordBook, n, kol, ObshOcenki = 0, _25procentov = 0 ;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> kol;
				ObshOcenki = 9 * kol;
				_25procentov = ObshOcenki * 0.25;
				record << kol << endl;
				record << ObshOcenki << endl;
				record << _25procentov << endl;
			}
		}
		else
			cout << "������ ������ � ����" << endl;
	}
	else
		cout << "������ ������� ��������� �����!" << endl;
	reading.close();
	record.close();
	remove("KoafMarks1.txt");
}
void Check1() {
	ifstream reading("Marks.txt");
	ofstream record("KoafMarks1.txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			string _surnameF, _surnameI, _surnameO, Lesson;
			int RecordBook, _RecordBook;
			int n;
			int  _marks, kol;
			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++) {
				reading >> RecordBook;
				record << RecordBook << endl;
				reading >> _surnameF;
				reading >> _surnameI;
				reading >> _surnameO;
				reading >> kol;
				record << kol << endl;
				for (int j = 0; j < kol; j++) {
					reading >> Lesson;
					for (int g = 0; g < 9; g++) {
						reading >> _marks;
					}
				}
			}
		}
		else
			cout << "������ ������ � ����" << endl;
	}
	else
		cout << "������ ������� ��������� �����!" << endl;
	reading.close();
	record.close();
	Check2();
}
void Podschet25proc3ek() {
	ifstream reading("KoafMarks.txt");
	ifstream _reading("Marks.txt");
	ifstream read("Podhodashie3(Prom).txt");
	ifstream _read("Podhodashie3.txt");
	ofstream record("Podhodashie3.txt", ios::out | ios::end);
	ofstream _record("Podhodashie3(Prom).txt", ios::out | ios::end);
	if (reading) {
		if (record) {
			if (_reading) {
				int RecordBook, _RecordBook, n, n1, kol, ObshOcenki = 0, _25procentov = 0, _marks, t = 0;
				string _surnameF, _surnameI, _surnameO, Lesson;
				reading >> n;
				_reading >> n1;
				for (int i = 0; i < n1; i++) {
					t = 0;
					_reading >> _RecordBook;
					_reading >> _surnameF;
					_reading >> _surnameI;
					_reading >> _surnameO;
					_reading >> kol;
					for (int j = 0; i < kol; j++) {
						_reading >> Lesson;
						for (int g = 0; g < 9; g++) {
							_reading >> _marks;
							if (_marks == 3) {
								t++;
							}
						}
					}
					_record << _RecordBook << endl;
					_record << t << endl;
				}
				record << n << endl;
				for (int f = 0; f < n; f++) {
					read >> RecordBook;
					record << RecordBook << endl;
					read >> t;
					record << t << endl;
				}
				
				_read >> n;
				for (int b = 0; b < n; b++) {
					_read >> RecordBook;

					_read >> t;
					if ( )
				}


			}
			else
				cout << "������ ������ �����" << endl;
		}
		else
			cout << "������ ������ � ����" << endl;
	}
	else
		cout << "������ �������� ��������� �����" << endl;
	reading.close();
	_reading.close();
	read.close();
	_read.close();
	record .close();
	_record.close();
}