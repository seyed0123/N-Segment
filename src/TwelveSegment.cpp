#include<iostream>
#include<string>
using namespace std;


void twelveSegment(string n , int b)
{
    for(int j=1;j<= 2*b+3 ;j++)
    {
        for(int i=0;i< n.size()*((2*b)+5) ;i++)
        {

            int index = i/(2*b+5);
            char number = n[index];
            int undex = i%(2*b+5);
            if(j==1)
            {
                if(undex<=1 || undex>=2*b+3 || undex == b+2 )
                    cout<<' ';
                else if(undex>1 && undex<b+2){
                    if((number=='0' || number=='2' || number=='3' || number=='5' || number=='6' || number=='7' || number=='8' || number=='9' || number=='a' ||number=='d' || number=='c' || number=='e' || number=='f' || number=='g' || number=='i' || number=='m' || number=='n' || number=='o' ||number=='p' || number=='q' || number=='r'|| number=='t'  || number=='z' ||number=='b') && (undex)%2==0)
                    {
                        cout<<"━";
                    }else
                    {
                        cout<<' ';
                    }
                }else if(undex>b+2 && undex<2*b+3){
                    if((number=='2' || number=='3' || number=='5' || number=='6' || number=='7' || number=='8' || number=='9' || number=='a' ||number=='d'|| number=='c' || number=='e' || number=='f' || number=='g' || number=='i' || number=='k' || number=='m' || number=='o' || number=='p' || number=='q' || number=='r' || number=='s'|| number=='t' || number=='z' ||number=='b') && (undex)%2==0)
                    {
                        cout<<"━";
                    }else
                    {
                        cout<<' ';
                    }
                }
            }
            else if(j==b+2)
            {
                if(undex<=1 || undex>=2*b+3 || undex == b+2)
                    cout<<' ';
                else if(undex>1 && undex<b+2){
                    if((number=='4'||number=='2'||number=='3'||number=='5'||number=='6'||number=='8'||number=='9'|| number=='a'|| number=='e'|| number=='f'|| number=='h'|| number=='k' ||  number=='p'|| number=='q'|| number=='r' || number=='x'|| number=='y')&& (undex)%2==0)
                    {
                        cout<<"━";
                    }else
                    {
                        cout<<' ';
                    }
                }else if(undex>b+2 && undex<2*b+3){
                    if((number=='4'||number=='2'||number=='3'||number=='5'||number=='6'||number=='8'||number=='9'|| number=='a'|| number=='b' || number =='g' || number=='f'|| number=='h'|| number=='k' || number=='p'|| number=='q'|| number=='r'|| number=='v' ||  number=='x'|| number=='y'|| number=='z')&& (undex)%2==0)
                    {
                        cout<<"━";
                    }else
                    {
                        cout<<' ';
                    }
                }
            }
            else if(j == 2*b+3)
            {
                if(undex<=1 || undex>=2*b+3 || undex == b+2)
                    cout<<' ';
                else if(undex>1 && undex<b+2){
                    if((number=='0'||number=='2'||number=='3'||number=='5'||number=='6' ||number=='8'||number=='9' || number=='b' || number=='c' || number=='d' || number=='e' || number=='g' || number=='i' || number=='j' || number=='l' || number=='o' || number=='s' || number=='u' || number=='v' || number=='w' || number=='z') && (undex)%2==0)
                    {
                        cout<<"━";
                    }else
                    {
                        cout<<' ';
                    }
                }else if(undex>b+2 && undex<2*b+3){
                    if((number=='2'||number=='3'||number=='5'||number=='6' ||number=='8'||number=='9' || number=='b' || number=='c' || number=='d' || number=='e' || number=='g' || number=='i' || number=='j' || number=='n' || number=='q' || number=='l' || number=='o' || number=='r'||  number=='u' || number=='w' || number=='z') && (undex)%2==0)
                    {
                        cout<<"━";
                    }else
                    {
                        cout<<' ';
                    }
                }

            }

            else if(j<b+2)
            {
                if(undex!=1 && undex!=2*b+3 && undex != b+2)
                    cout<<' ';
                else if((number=='0'||number=='4'||number=='6'||number=='8'||number=='9' || number == '5' || number=='a' || number=='c' || number=='e' || number=='f' || number=='g' || number=='h' || number=='k' || number=='m' || number=='n' || number=='o' || number=='l' || number=='p' || number=='q' || number=='r' || number=='u'|| number=='v' || number=='w' || number=='x' || number=='y') && undex==1)
                    cout<<"┃";
                else if ((number=='0'||number=='b' || number=='d' || number=='i' || number=='k' || number=='m' || number=='n' || number=='s'|| number=='t' || number=='x')&&(undex==b+2)){
                    cout<<"┃";
                }
                else if((number=='1'||number=='2'||number=='3'||number=='4'||number=='7'||number=='8'||number=='9' || number=='a' || number=='d'|| number=='h' || number=='j' || number=='m' || number=='n' || number=='o' || number=='p' || number=='q' || number=='r' || number=='u'|| number=='v' || number=='w' || number=='y' || number=='z' || number=='b')&& (undex==2*b+3))
                    cout<<"┃";
                else
                    cout<<' ';
            }
            else if(j>b+2)
            {
                if(undex!=1 && undex!=2*b+3 && undex != b+2)
                    cout<<' ';
                else if((number=='0'||number=='2'||number=='6'||number=='8' || number=='a' || number=='c' || number=='e' || number=='f' || number=='g' || number=='h' || number=='j' || number=='k' || number=='l' || number=='m' || number=='n' || number=='o' || number=='p'  || number=='r' || number=='u'|| number=='v'||number=='w' )&& undex==1)
                    cout<<"┃";
                else if ((number=='0'||number=='b' || number=='d' || number=='i' || number=='n' || number=='q' || number=='r' || number=='s'|| number=='t' || number=='v'|| number=='w' || number=='x' ||  number=='y' || number=='z')&&(undex==b+2)){
                    cout<<"┃";
                }
                else if((number=='1'||number=='3'||number=='4'||number=='5'||number=='6'||number=='7'||number=='8'||number=='9'|| number=='a'|| number=='b'|| number=='d'|| number=='g'|| number=='h' || number=='j'|| number=='k'|| number=='m' || number=='n'|| number=='o'||  number=='u'|| number=='w' ||number=='x')&& (undex==2*b+3) )
                    cout<<"┃";
                else
                    cout<<' ';
            }

        }
        cout<<endl;
    }
}
