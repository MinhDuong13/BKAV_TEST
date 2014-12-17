//
//Name: Workers
//Description: Name, Date of birth, salary
//
class Worker {
	string m_sName;
	int m_nDateOfBirth;
	int m_nMonthOfBirth;
	int m_nYearOfBirth;
	int m_nSalary;
public:
	Worker(string, int, int, int);
	string getName(void);
	int getDateOfBirth(void);
	int getMonthOfBirth(void);
	int getYearOfBirth(void);
	int getSalary(int, int(*)(int));
	~Worker();
};