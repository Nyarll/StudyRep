#pragma once

// Create : 2021/07/05
// Update : 2021/07/05
// Author : Nyarll Creative / UNLUCKY

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

	// <•¶Žš—ñÝ’è>
	void SetString(std::string fmt_str, ...);
	
	// <•¶Žš—ñ‚ÌŽæ“¾>
	std::string& GetValue();
};

#endif // Message class