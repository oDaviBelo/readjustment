    #include <iostream>
    #include <iomanip>

    using namespace std;


    float soma(float a);
    int main(){
        float salary;
        cin>>salary;   
        
        soma(salary);
        

        return 0;
    }

    float soma(float a){
        
        float s = a;
    
        if(s<=400.00){
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<s+((s*15)/100)<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(s+((s*15)/100))-s<<endl;
            cout<<"Em percentual: 15 %"<<endl;
        }
        else if(s>400.01 && s < 800.00){
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<s+((s*12)/100)<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(s+((s*12)/100))-s<<endl;
            cout<<"Em percentual: 12 %"<<endl;
        }
        else if(s>800.01 && s < 1200.00){
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<s+((s*10)/100)<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(s+((s*10)/100))-s<<endl;
            cout<<"Em percentual: 10 %"<<endl;
        }
        else if(s>1200.01 && s < 2000.00){
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<s+((s*7)/100)<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(s+((s*7)/100))-s<<endl;
            cout<<"Em percentual: 7 %"<<endl;
        }
        else if(s> 2000.00){
            cout<<fixed<<setprecision(2)<<"Novo salario: "<<s+((s*4)/100)<<endl;
            cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(s+((s*4)/100))-s<<endl;
            cout<<"Em percentual: 4 %"<<endl;
        }

        
        return s;
    } 