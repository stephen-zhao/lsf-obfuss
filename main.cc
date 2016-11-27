#include <iostream>
#include <vector>

#define y _y__();
#define _ _______();
#define x _x__();
#define o _________();
#define vec vector
#define eb emplace_back


// LEAST                                SQUARES                             FIT

struct P                       {int _x_; int _y_;};             int _x___ = 1;int _y___ = -1;
int ____                    = 0;std::vec<  P *> _____;          bool _h____p__ = 0;float sum(
std::vec                <float> __a_){int __t_=0;for(auto       i:__a_){__t_+=i;}return __t_;
}   void                _C__(){if (____ == 0){std::cout <<      "no points yo"  << std::endl;
return;}              else if(____==1)       {std::cout  <<     "uh. line of best fit from o"
<<"ne p"             <<"oint. I actu"         <<"ally have "    <<"no idea how" << std::endl;
return;}             std::vec<float>           _a_x___;std::    vec<float>
_a_y___;            for(auto pt:_____           ){_a_x___.eb    (pt->_x_);
_a_y___.            emplace_back(pt->            _y_);}float    _x_b___  =
sum    (            _a_x___)/____;float           _y_b___ =     sum(_a_y___)
/____;std           ::vec<float> _x_y____;        std::vec      <float> _x_x____;
for(int i            =0;i<____;++i){_x_y____       .eb((        _a_x___[i]-_x_b___)*(_a_y___
[ i ]  -              _y_b___));_x_x____.eb((                   _a_x___[i] - _x_b___)*(_a_x___
[ i ]  -               _x_b___));}float _s_x_y___               =sum(_x_y____);float _s_x_x___
=  sum (                  _x_x____); if(_s_x_x___==0){          std::cout << "nice try; no, I"
<<" don"                     <<"'t do vertical lines"<<std      ::endl; return; } float _b__ =
_s_x_y___                        /_s_x_x___;float _a__=_y_b___  - _b__ * _x_b___;std::cout  <<
"y = "<<_a__                         << " + " << _b__ <<" * x"  << std::
endl;return;}                                  void _y__(){--   _y___  ;
_x___=-1;}void                           _______(){++_x___;}    void   
_________(){++_x___;P*_p_____  = new P{_x___, _y___};_____.     eb(_p_____
); ++____ ;} void  _x__(){   if (   _h____p__)  { _____.        clear();     
return;}_h____p__ = 1;  int  _Y_____=    -_y___;for (           auto pt:
_____){  pt->_y_ +=     _Y_____  ;   std::cout  <<              "point: "
<<pt->_x_<<","<<pt->_y_<<std::endl; }_C__();}int                main(){

y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ o _ _ _ _ _ o _ _ o _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ o _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ o _ _ o _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ o o _ _ _ o _ o _ o _ _ _ _ _
y _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ o _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ o _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
y _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  x x x x x x x x x x x x x x x x x x x x x

}
