//---
//Name: Class String
//Description: 
//---
class String {
	char m_sMemberOfString;
	int m_nNumberOfString;
	char * m_nNext;
public:
	String();
	void setString();
	void getString();
	int getLengthOfString();
	void linkingStrings(String, String);
	void swappingString();
	~String();
};

