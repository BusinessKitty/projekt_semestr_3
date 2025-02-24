#pragma once
class Drawable;
//! Klasa przedstawiająca "pojemnik" na wskaźniki na obiekty typu Drawable
class Container {
protected:
	//! wektor zawierający wskaźniki na obiekty Drawable
	std::vector<std::shared_ptr<Drawable>> contents;
public:
	//! Konstruktor bezargumetowy
	Container();
	//! Destruktor
	~Container();
	/*!
		Funkcja zwracająca rozmiar pojemnika
		\return rozmiar pojemnika
	*/
	int size();
	/*!
		Operator dostępu do obiektu na podanym miejscu
	*/
	std::shared_ptr<Drawable> operator[](const int& n) {
		return contents[n];
	}
	/*!
		Funkcja zwracająca iterator na początek pojemnika
		\return iterator na początek pojemnika
	*/
	std::vector<std::shared_ptr<Drawable>>::iterator begin();
	/*!
		Funkcja zwracająca iterator na koniec pojemnika
		\return iterator na koniec pojemnika
	*/
	std::vector<std::shared_ptr<Drawable>>::iterator end();
};