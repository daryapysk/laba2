#pragma once
class RECIPES
{
private:
	static int amount_of_ingr;
	static double weight;
	static int time_of_cooking;
	static bool temperature;
	static int self_life;
public:
	virtual void way_of_cooking() = 0;
	virtual void interaction_of_ingridients()=0;
	virtual void complexity_of_preparations() = 0;
	virtual void cut() = 0;
	virtual void mix() = 0;
	virtual void devide() = 0;
	virtual void carve() = 0;
};
class Snacks :public RECIPES
{
private:

	int amount_of_bread;
	int zaeb;


};

