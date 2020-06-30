#include<iostream>
#include<string>
using namespace std;
class person
{private:
    //Encapsulation
    string  your_name;
    int your_id;
    string academic_email;
public:
    //constractor 
    person ()
    { your_name = "mohammed";
        your_id = 1;
        academic_email = "ahmed123@fci.bu.edu.eg";   }
    //(set function to input Customer name)
    void set_name()
    {   cin >> your_name;  }
    //(get function to output Customer name)
    void get_name()
    {    cout<< your_name; }
    void set_academic()
    {cin >> academic_email;}
    //(set function to input Customer name)
    void set_id()
    {  cin >> your_id;  }
    //(get function to output Customer name)
    int get_id()
    {  return your_id; }
    //Compile time polymorphism(overriding)
    void disp_lectures(int x,int l) {
        cout << "\t\t\t\tPlease enter the number of days you go to college in the month and i will print the total lectures num ";}};
class doctors : public person//inheritance
{private:
   //abstract
    string sub_name;
    int id[3], chap[3];
    string name[3], sub[3], stu[3];
public:
    double lecters_hours;
    double hour_price;
    //consractor
    doctors()
    {lecters_hours = 10;
        hour_price=5;
        sub_name = "math";}
    void setlecters_hours()
    {    cin >> lecters_hours; }
    void setlectues_price()
    {  cin >> hour_price; }
void set_sub()
    {    cin >> sub_name; }
    //operator overloading
    double operator *(int lecters_hours)
    {double salary = lecters_hours * hour_price;
        return salary  ;
    }   //overriding
    void disp_lectures(int x, int l) {
        int w = x * l;
        cout << "\t\t\t\t your total lectures is " << w << "  per month \n\n";}
    void  doctor_set_data()
    {  for (int i = 0; i <= 2; i++)
        {cout << "\t\t\t\tenter the id of the " << i+1 << "   ";
            cin >> id[i];
            cout << "\t\t\t\tenter his name ";
            cin >> name[i];
            cout << "\t\t\t\tenter subject name  ";
            cin >> sub[i];
            cout << "\t\t\t\tenter the number of chapter that he will teach ";
            cin >> chap[i];
            cout << "\t\t\t\tenter the number of his students  " ;
            cin >> stu[i];
            cout << endl;     }}
    void doctor_get_data()
    {cout << "\n\n\n\t\t\t\t" << "id" << "\t\tname" << "\t\tsubject name" << "\t\tterm chapters" << "\t\this student number" << endl;
        for (int i = 0; i <= 2; i++)
        {     cout << "\n\n\n\t\t\t\t" << id[i] << "\t\t" << name[i] << "\t\t" << sub[i] << "\t\t\t\t" << chap[i] << "\t\t" << stu[i]<<endl<<endl;
        }    }};
class student :public person//inheritance
{public:
    double  a[6];
    double sum = 0.0;
    void set_grades()
    {  for (int i = 0; i < 6; i++)
        {   cin >> a[i];
            sum += a[i]; }}
    //consractor
    student()
    {  sum = 0.0;
      a[0] = 1; a[1] = 1; a[2] = 1; a[3] = 1; a[4] = 1; a[5] = 1; }
    void  persentages()//operator overloading
    { cout<< sum * 100 / 600; }
    double persentages(int x,int y)//operator overloading
    {   return (y * 100 / x); }
    //overriding
    void disp_lectures(int x, int l) {
        int w = x * l;
        cout << "\t\t\t\t your total lectures is " << w << "  per month \n\n";}
    void gpa()//to calculate the gpa
    {string q[6];
        double c[6];
        double g = 0;
        double summ=0;
        for (int i = 0; i < 6; i++)
        {  cin >> q[i]>>c[i];
            summ += c[i]; }
        for (int i = 0; i < 6; i++)
        {if (q[i] == "A+" || q[i] == "a+")
                g += (4 * c[i]);
            else if (q[i] == "A"||q[i]=="a")
                g += (3.7 * c[i]);
            else  if (q[i] == "B+" || q[i] == "b+")
                g += (3.3 * c[i]);
            else  if (q[i] == "B" || q[i] == "b")
                g += (3* c[i]);
            else   if (q[i] == "C+" || q[i] == "c+")
                g += (2.7* c[i]);
            else   if (q[i] == "C" || q[i] == "c")
                g += (2.4 * c[i]);
            else  if (q[i] == "D+" || q[i] == "d+")
                g += (2.2* c[i]);
            else  if (q[i] == "D" || q[i] == "d")
                g += (2 * c[i]);
            else      if (q[i] == "F" || q[i] == "f")
                g += (0 * c[i]);  }
        double gp = g / summ;
        cout << "\t\t\t\tYOUR GPA IS " << gp << "\n\n\n";}};
int main()
{  student ahmed;
    doctors doc;
    person per;
    int choice;
    cout << "\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
    cout << "\n\n\t\t\t\t\t  COLLEGE DATA MANAGEMENT\n\n";
   cout<< "\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl<<endl;
    cout << "\t\t\t\t\t\t   WELCOME\n\n";
    char i;
    cout << "\t\t\t\tplease enter your name ";
    per.set_name();
    cout << "\t\t\t\tplease enter your id number ";
    per.set_id();
    cout << "\t\t\t\tplease enter your academic email ";
    per.set_academic();
    do {
        //(a main menu to the type of college data management)
        cout << "\n\n\t\t\t\t\t\t:MAIN SCREEN:\n\n";
        cout << "\t\t\t\t\t1. Students Information" << endl;
        cout << "\t\t\t\t\t2. doctors Information" << endl;
        cout << "\t\t\t\t\t3. Exit Program" << endl;
        cout << "\n\n\t\t\t\tEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "\n\n\t\t\t\t\t\tSTUDENTS INFORMATION \n\n";
            cout << "\t\t\t\t\t1.Calculate your percentage score" << endl;
            cout << "\t\t\t\t\t2.calculate your percentage of absence " << endl;
            cout << "\t\t\t\t\t3.calculate your totla lecteres number per month " << endl;
            cout << "\t\t\t\t\t4.calculate your GPA " << endl;
            int ch;
            cout << "\n\n\t\t\t\tEnter your choice: ";
            cin >> ch;
            switch (ch)
            {case 1:
                cout << "\t\t\t\tPlease enter the grades of six subjects " << endl;
                ahmed.set_grades();
                cout << "\t\t\t\tyour persenrage is ";
                ahmed.persentages();
                cout << " %   "<<endl;
                break;
            case 2:
                int c, b;
                cout << "\t\t\t\tPlease enter the number of total lectures and then enter the number of lectures that you missed : ";
                cin >> c >> b;
                double z;
                z = ahmed.persentages(c, b);
                cout << "\t\t\t\t Your absence rate is  " << z << " %\n";
            break;
            case 3:
                int t1, r1;
                cout << "\t\t\t\tPlease enter the number of days you go to college in the month ";
                cin >> t1;
                cout << "\t\t\t\tplease enter the number of lectures per day ";
                cin >> r1;
                ahmed.disp_lectures(t1, r1);
                break;
            case 4 :
                cout << "\t\t\t\tplease enter your grade for the subject and its credit hours [six subjects ]: ";
                ahmed.gpa();
                break;
            }
            break;
        case 2:int sh;
            cout << "\n\n\t\t\t\t\t\tDOCTORS INFORMATION \n\n";
            cout << "\t\t\t\t\t1. Calculate your salary" << endl;
            cout << "\t\t\t\t\t2. calculate your totla lecteres number per month " << endl;
            cout << "\t\t\t\t\t3. Record the doctors' data and display them "<<endl;
            cout << "\n\n\t\t\t\tEnter your choice: ";
            cin >> sh;
            switch (sh)
            {   case 1:
                cout << "\t\t\t\tplease enter your subject name  ";
                doc.set_sub();
                cout << "\t\t\t\tplease enter your lecturs hours and hour price and i will calculate your salary ";
                doc.setlecters_hours();
                doc.setlectues_price();
                double a;
                a = doc.lecters_hours * doc.hour_price;
                cout << "\t\t\t\tyour salary " << a << " $\n\n";
                break;
            case 2:
                cout << "\t\t\t\tplease enter your subject name  ";
                doc.set_sub();
                int t, r;
                cout << "\t\t\t\tPlease enter the number of days you go to college in the month ";
                cin >> t;
                cout << "\t\t\t\tplease enter the number of lectures per day ";
                cin >> r;
                doc.disp_lectures(t, r);
                break;
            case 3:           
                cout << "\t\t\t\tPlease enter the data of 3 doctor only "<<endl;
                 doc.doctor_set_data();
                    char s;
                    cout << "\t\t\t\tif you want to display them write y if not write n  ";
                    cin >> s;
                    if (s == 'y')
     doc.doctor_get_data();  break; default:     break; }break; default :        break; }
        cout << "\t\t\t\tif you wnat to back to main screen write y or Y if to exite the programm write  n   ";cin >> i;
    } while (i == 'y'||i=='Y');
    cout << "\n\n\t\t\t\tTHANKS ";
    per.get_name();
    cout << " FOR YOUR VISIT\n\n\t";
    cout << "\n\n\t\t\t\tthe code by ahmed megahed \n\n";
    system("pause");
    return 0;}
