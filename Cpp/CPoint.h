#pragma once


class CPoint {


//Encapsulation :
	//Public
	//Private
	//Protected

private :
	//Donn�es membres
	int n_x;
	int n_y;


protected :

public :

	//Fonctions membres
	//Constructeur sans param�tres
	//CPoint();

	//Constructeur avec param�tres
	//CPoint(int n_x, int n_y);

	//CPoint(int n_y);

	CPoint(int n_x=0, int n_y=0);


	//Accesseurs
	int getX()const;
	int getY()const;

	//Mutateurs
	void setX(int n_x=9);
	void setY(int n_y=9);




	
};

