#include<iostream>
//classes and structs are basically same the only difference is that in classes all the variables and functions are private by default and in struct they are public
class Player
{


public:
	//this has publci variables
	Player()
	{

	}
	Player(int position, std::string gun, int p, float h, int x, int y )
	{
		this->m_Position = position;
		this->m_Gun = gun;
		this->m_Power = p;
		this->m_Health = h;
		this->m_X = x;
		this->m_Y = y;

	}
	void move()
	{
		
		this->m_X += 1;
		this->m_Y += 1;
		std::cout << "new position " << "("<<m_X << " ," << m_Y <<")"<< std::endl;

	}
	void Info()
	{
		std::cout << "position ::" << m_Position << "\n";
		std::cout << "gun ::" << m_Gun << "\n";
		std::cout << "power ::" << m_Power << "\n";
		std::cout << "health left : " << Health_left(m_Health) << std::endl;;
		
		std::cout << "health ::" << m_Health << "\n";
		
	}void infoAfterDead()
	{
		std::cout << "position ::" << m_Position << "\n";
		std::cout << "pickable gun ::" << m_Gun << "\n";
		std::cout << "Health ::" <<" 0" << "\n";

	}


private:
	//this has private functions
	int Health_left(int health)
	{
		return health - 10;
	}
private:
	//this has private variables
	int m_X, m_Y;
	int m_Position;
	std::string m_Gun;
	float m_Power;
	float m_Health;
	



};
struct Villain
{
	int position;
	std::string  gun;
	int power;
	float health;
private:
	int loopp;


};


int main()
{
	Player bot;
	Player anurag(22, "Ak 47", 1000, 10000, 3, 5);
	Player Sai(11, "M214", 1000, 10000,6, 7);
	anurag.Info();
	Sai.Info();
	std::cout << "Data After dead\n";
	Sai.infoAfterDead();
	anurag.move();
	


	

}