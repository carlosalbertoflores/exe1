#include<iostream>
#include<fstream>

using namespace std;
string nombre, puesto,firmas;
int sueldo,sueldoex,bonificaciones,otros, devengado, horas;
float iggs, isr, anticipos, descjudc, otross, descuentos,liquido,h,o,r,a,t,to,s,tot,tota ;
ofstream nomina;
int main () {

    cout<<" nomina de  empleados:";
    cout<<"\n"<<endl;
    cout<<"nombre y  apellido\t"<<endl;
     cin>>nombre;
    cout<<"puesto";
    cin>>puesto;
    cout<<"sueldo ordinario";
    cin>>sueldo;
    cout<<"horas extras";
    cin>>horas;
     cout<<"comisiones";
    cin>>bonificaciones;
     cout<<"otros";
    cin>>otros;
     cout<<"total devengado";
    cin>>devengado;
     cout<<"anticipos";
    cin>>anticipos;
 cout<<"descuentos judiciales";
    cin>>descjudc;
     cout<<"otros";
    cin>>otross;
     cout<<"firma";
     cin>>firmas;
     h =sueldo / 30;
     o =h/8;
     r =o*1.5;
     a=horas*r;
     t=sueldo+sueldoex+bonificaciones+bonificaciones+otros;
     to=sueldo*4.83;
      s =sueldo*0.5;
      tot= to+s+anticipos+s+descjudc+otross;
      tota=t-tot;
nomina.open("nomina.txt");
if (nomina.is_open())
{
 cout<<"nombre y apellido\t"<<"puesto\t"<<"sueldo ordinario\t"<<"horas extras\t"<<"sueldo extraordinario\t"<<"comisiones\t"<<"otros\t"<<"total devengado\t"<<"iggs\t"<<"isr\t"<<"anticipos\t"<<"descuentos judiciales\t"<<"otros\t"<<" total de descuentos"<<"\t"<<"total de liquides"<<"\t"<<"firma";

}nomina.close();

  return 0;
}
