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
	void operator=(const CMyString& rhs) {
		this->setData(rhs.getData());
	}
	void operator=(CMyString&& rhs) noexcept;
	operator const char* () const {
		return m_pszData;
	}
	void resetmsCount() {
		msCount = 0;
	}
private:
	static int msCount;
	char* m_pszData = nullptr;
	size_t length = 0;
};