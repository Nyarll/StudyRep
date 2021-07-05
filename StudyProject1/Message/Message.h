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

	// <������ݒ�>
	void SetString(std::string fmt_str, ...);
	
	// <������̎擾>
	std::string& GetValue();
};

#endif // Message class