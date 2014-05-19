#include <iostream>
#include <cstdio>
#include <complex>

using namespace std;

typedef complex<double> P;

#define X real()
#define Y imag()

//直線p1p3と線分p2p4の交差判定
//1つの線分p1p3と、それに含まれない2点p2,p4について、p1p3とp1p2、p1p3とp1p4、それぞれについて外積を求めてその積を取る
//外積の正負はベクトルのなす角のsinに依るので、p2,p4のそれぞれがp1p3の左にあるか右にあるかがわかる
//正なら交差していない、負なら交差している、0なら直線上
double is_intersected(P p1,P p2,P p3,P p4) {

  return (((p3.X-p1.X)*(p2.Y-p1.Y)-(p3.Y-p1.Y)*(p2.X-p1.X))*((p3.X-p1.X)*(p4.Y-p1.Y)-(p3.Y-p1.Y)*(p4.X-p1.X)));

}

int main() {

  double xa,ya,xb,yb,xc,yc,xd,yd;

  //直線ACと線分BD、あるいは線分ACと直線BDが交差していれば凸角形
  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd)!=EOF) {

    P a(xa,ya),b(xb,yb),c(xc,yc),d(xd,yd);

    if(is_intersected(a,b,c,d)>0.0 || is_intersected(b,a,d,c)>0.0) cout << "NO" << endl;

    else cout << "YES" << endl;

  }

  return 0;

}
