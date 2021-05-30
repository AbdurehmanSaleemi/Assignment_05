class Date{
    protected:
    unsigned int day;
    unsigned int month;
    unsigned int year;

    public:
    Date();
    Date(unsigned int d, unsigned int m,unsigned int y);
    void setDate(unsigned int d,unsigned int m,unsigned int y);
    void printDate();
    unsigned int getDay();
    unsigned int getMonth();
    unsigned int getYear();
    void operator =(Date &d);
    void userInput();
};