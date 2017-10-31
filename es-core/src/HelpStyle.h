#pragma once
#ifndef ES_CORE_HELP_STYLE_H
#define ES_CORE_HELP_STYLE_H

#include "math/Vector2f.h"
#include <memory>
#include <string>

class ThemeData;
class Font;

struct HelpStyle
{
	Vector2f position;
	unsigned int iconColor;
	unsigned int textColor;
	std::shared_ptr<Font> font;

	HelpStyle(); // default values
	void applyTheme(const std::shared_ptr<ThemeData>& theme, const std::string& view);
};

#endif // ES_CORE_HELP_STYLE_H
