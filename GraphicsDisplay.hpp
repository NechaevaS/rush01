/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GraphicsDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 07:14:48 by abarnett          #+#    #+#             */
/*   Updated: 2020/01/26 19:46:47 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICSDISPLAY_HPP
#define GRAPHICSDISPLAY_HPP

#include "AMonitorDisplay.hpp"
#include "Keyboard.hpp"
#include <vector>
#include <map>

#include <SFML/Graphics.hpp>

class GraphicsDisplay : public AMonitorDisplay
{
private:
	static const size_t chartHeight = 10;

	unsigned int _windowWidth;
	unsigned int _windowHeight;
	sf::RenderWindow _window;
	sf::Font _font;
	float _vertOffset;
	float _horizOffset;
	unsigned int _windowGap;
	unsigned int _titleGap;
	unsigned int _titleSize;
	unsigned int _textSize;
	sf::Color _titleColor;
	sf::Color _textColor;
	//std::vector<WINDOW*> _windows;
	GraphicsDisplay(const GraphicsDisplay &);
	GraphicsDisplay &operator=(const GraphicsDisplay &);
	void drawName(IMonitorModule *module);
	int handleKey(char c);

public:
	GraphicsDisplay(unsigned int width, unsigned int height);
	~GraphicsDisplay();

	void run();
	void display(MultiStrMonitorModule *);
	void display(ChartMonitorModule<float> *);
};

#endif
