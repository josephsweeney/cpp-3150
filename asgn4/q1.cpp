#include <vector>
#include <iostream>

template <class T>
std::ostream& operator<<(std::ostream& os,const std::vector<T>& c)
{
   forEach(c.begin(),c.end(),[&os](T val) { os << val << " ";});
   return os;
}

int main()
{
   using namespace std;
   vector<double> x = {1.23, 4.56, 7.89, 0.12, 3.45, 6.78, 9.01, 2.34, 5.67, 8.90};
   vector<string> y = {"Hello", "darkness,", "my", "old", "friend.",
                       "I've", "come", "to", "talk", "with", "you", "again."};
   
   //  for each
   cout << x << endl;
   cout << y << endl;

   cout << "> 5 = "
        << filter(x,[](double v) { return v > 5.0;}) << endl;
   
   cout << "Sum = "
        << reduce(x.begin(),x.end(),0.0,[](double acc,double v) { return acc + v;}) << endl;
   
   cout << "Sum = "
        << foldr(x.begin(),x.end(),0.0,[](double acc,double v) { return acc + v;}) << endl;

   return 0;
}
