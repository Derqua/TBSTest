//Generic file for classes to exist

class Unit {
public:
	int cost;
	int health;
	int movespeed;
	bool canattack;
	bool canbuild;
	int attackdmg;
	int attackrange;
	int hitchance;
	string ammotype;
	string armortype;
	int sightrange;
};

class Structure : public Unit {
	bool createsunits;
	int income;
};