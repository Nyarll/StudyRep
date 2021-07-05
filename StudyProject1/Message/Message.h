#pragma once

#ifndef MESSAGE_DEFINED
#define MESSAGE_DEFINED

#include <string>

// Message class
class Message
{
private:
	// <Message>
	std::string m_value;

public:
	Message();
	Message(std::string fmt_str, ...);
	~Message() = default;

	// <文字列設定>
	void SetString(std::string fmt_str, ...);
	
	// <文字列の取得>
	std::string& GetValue();
};

#endif // Message class