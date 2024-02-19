#pragma once

class CMyString
{
public:
	CMyString();
	explicit CMyString(const char* param);
	CMyString(const CMyString& rhs);
	CMyString(CMyString&& rhs) noexcept;
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
	CMyString& operator=(const CMyString& rhs) {
		this->setData(rhs.getData());
	}
	CMyString& operator=(CMyString&& rhs) noexcept;
	operator const char* () const {
		return m_pszData;
	}

	CMyString operator+(const CMyString& rhs);

	CMyString& operator+=(const char* pParam);

	char operator[](int index) const;

	void resetmsCount() {
		msCount = 0;
	}
private:
	static int msCount;
	char* m_pszData = nullptr;
	size_t length = 0;
public:
	size_t append(const char* pParam);
};

CMyString operator+(const char* pLeft, const CMyString& rhs);