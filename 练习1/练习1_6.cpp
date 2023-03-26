#include <iostream>
int main(){
    int v1 =1;
    int v2 =3;
    
    /// 不合法，因为分号的位置不正确
    
    //std::cout<<"The sum of"<<v1;
    //<<"and"<<v2;<<"is"<<v1+v2<<std::endl;
    
    std::cout<<"The sum of "<<v1
    <<" and "<<v2<<" is "<<v1+v2<<std::endl;


}