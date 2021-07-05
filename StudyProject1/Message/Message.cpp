#include "Message.h"

#include <memory>
#include <cstdarg>

Message::Message()
	:m_value("")
{
}

Message::Message(std::string fmt_str, ...)
{
	int final_n, n = ((int)fmt_str.size()) * 2; /* fmt_str‚Ì‚Q”{‚ÌƒTƒCƒY‚ğ—\–ñ */
	std::unique_ptr<char[]> formatted;
	va_list ap;
	while (1)
	{
		formatted.reset(new char[n]); /* char”z—ñ‚ğunique_ptr‚Éƒ‰ƒbƒv */
		//strcpy(&formatted[0], fmt_str.c_str());
		strcpy_s(&formatted[0], n, fmt_str.c_str());
		va_start(ap, fmt_str);
		final_n = vsnprintf(&formatted[0], n, fmt_str.c_str(), ap);
		va_end(ap);
		if (final_n < 0 || final_n >= n)
			n += abs(final_n - n + 1);
		else
			break;
	}
	m_value = std::string(formatted.get());
}

void Message::SetString(std::string fmt_str, ...)
{
	int final_n, n = ((int)fmt_str.size()) * 2; /* fmt_str‚Ì‚Q”{‚ÌƒTƒCƒY‚ğ—\–ñ */
	std::unique_ptr<char[]> formatted;
	va_list ap;
	while (1)
	{
		formatted.reset(new char[n]); /* char”z—ñ‚ğunique_ptr‚Éƒ‰ƒbƒv */
		//strcpy(&formatted[0], fmt_str.c_str());
		strcpy_s(&formatted[0], n, fmt_str.c_str());
		va_start(ap, fmt_str);
		final_n = vsnprintf(&formatted[0], n, fmt_str.c_str(), ap);
		va_end(ap);
		if (final_n < 0 || final_n >= n)
			n += abs(final_n - n + 1);
		else
			break;
	}
	m_value = std::string(formatted.get());
}

std::string& Message::GetValue()
{
	return m_value;
}
