class date{
private:
	int day;
	int month;
	int year;
	int currentd;
public:
	void setday(int);
	void setmonth(int);
	void setyear(int);

	int getday();
	int getmonth();
	int getyear();

	void setcurrentday(int);


	void display(int, int, int, int);
    
	int init(int,int);

};