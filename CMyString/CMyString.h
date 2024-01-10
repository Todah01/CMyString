#pragma once

class CMyString
{
public:
	CMyString();
	~CMyString();

	const char* getData() const {
		return m_pszData;
	}
	void setData(const char* pParam);
	const size_t getLength() const {
		return this->length;
	}
	int getmsCount() const {
		return msCount;
	}
	void resetmsCount() {
		msCount = 0;
	}
private:
	static int msCount;
	char* m_pszData = nullptr;
	size_t length = 0;
};