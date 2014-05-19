#include <iostream>

using namespace std;

int main() {

  int a_enter_h,a_enter_m,a_enter_s,a_leave_h,a_leave_m,a_leave_s;
  int b_enter_h,b_enter_m,b_enter_s,b_leave_h,b_leave_m,b_leave_s;
  int c_enter_h,c_enter_m,c_enter_s,c_leave_h,c_leave_m,c_leave_s;

  int a,b,c;

  int a_h,a_m,a_s;
  int b_h,b_m,b_s;
  int c_h,c_m,c_s;

  cin >> a_enter_h; cin >> a_enter_m; cin >> a_enter_s; cin >> a_leave_h; cin >> a_leave_m; cin >> a_leave_s;
  cin >> b_enter_h; cin >> b_enter_m; cin >> b_enter_s; cin >> b_leave_h; cin >> b_leave_m; cin >> b_leave_s;
  cin >> c_enter_h; cin >> c_enter_m; cin >> c_enter_s; cin >> c_leave_h; cin >> c_leave_m; cin >> c_leave_s;

  a=(3600*a_leave_h+60*a_leave_m+a_leave_s)-(3600*a_enter_h+60*a_enter_m+a_enter_s);
  b=(3600*b_leave_h+60*b_leave_m+b_leave_s)-(3600*b_enter_h+60*b_enter_m+b_enter_s);
  c=(3600*c_leave_h+60*c_leave_m+c_leave_s)-(3600*c_enter_h+60*c_enter_m+c_enter_s);

  a_h=a/3600;
  a_m=(a%3600)/60;
  a_s=a%60;

  b_h=b/3600;
  b_m=(b%3600)/60;
  b_s=b%60;

  c_h=c/3600;
  c_m=(c%3600)/60;
  c_s=c%60;

  cout << a_h << " " << a_m << " " << a_s << endl;
  cout << b_h << " " << b_m << " " << b_s << endl;
  cout << c_h << " " << c_m << " " << c_s << endl;

  return 0;

}
