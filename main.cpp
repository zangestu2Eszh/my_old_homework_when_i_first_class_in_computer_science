#include <iostream>
using namespace std;

int main()
{int b,i,j,n=100,nm=3,h=0,Choose,Choose_accounts,Choose_admin,Choose_edit,Choose_deleted;
string admin="admin",pad="1234",user,password,passwordr1,passwordr2;
string a[n]={"Ahmed","Ali","Mohammed"};
string p[n]={"12345678","1234554321","abc12345"};
h=97;
welcome:
cout<<"Choose (^_^) :\n1-Start With Admin:\n2-Start With Anuther Account:";
cin>>Choose;
switch(Choose){
case 1:{
Admin:
cout<<"Welcome Admin:\n";
cout<<"Please Choose \n1-Add Accounts :\n2-Edit Account :\n3-Delete Account :";
cin>>Choose_admin;
switch(Choose_admin){
case 1:{cout<<"Please Enter UserName :";
cin>>user;
nm++;
b=nm-1;
h--;
a[b]=user;
pass:
cout<<"Please Enter Password :";
cin>>passwordr1;
cout<<"Please Enter Rewrite Password :";
cin>>passwordr2;
if(passwordr1==passwordr2){cout<<"the Account has been added :\n";
p[b]=passwordr2;
goto welcome;
}
else{cout<<"The password is not correct Please rewrite password :\n";
goto pass;}
break;}
case 2:{
edit:
cout<<"Please Choose Accounts to edited :\n";
for(i=0;i<n-h;i++)
cout<<i+1<<"-"<<a[i]<<" :\n";
cin>>Choose_edit;
for(i=0;i<n-h;i++)
if(Choose_edit==i+1){cout<<"Please Enter new user :";
cin>>user;
a[i]=user;
cout<<"Please Enter new password :";
cin>>password;
p[i]=password;
goto welcome;}
if(Choose_edit!=i+1){goto edit;}
break;}
case 3:{cout<<"Please Choose Account to deleted :\n";
del:
for(i=0;i<n-h;i++)
cout<<i+1<<"-"<<a[i]<<" :\n";
cin>>Choose_deleted;
for(i=0;i<n-h;i++)
if(Choose_deleted==i+1){
nm--;
h++;
a[i]=a[i+1];
p[i]=p[i+1];
goto welcome;}
if(Choose_deleted!=i+1){
cout<<"Please Choose :\n";
goto del;
}
break;}
default:{cout<<"Please Choose :\n";
goto Admin;}}}
case 2:{
accounts:
cout<<"Please Choose Your Accounts :\n";
for(i=0;i<n-h;i++)
cout<<i+1<<"-"<<a[i]<<" :\n";
cin>>Choose_accounts;
for(i=0;i<n-h;i++)
if(Choose_accounts==i+1){
for(j=1;j<4;j++){

cout<<"Please Enter Password :";
cin>>password;
if(password==p[i]){
cout<<"welcome "<<a[i]<<" :\n";
goto welcome;}
if(password!=p[i]){cout<<"the password is incorrctly :\n";
}
}
}
if(Choose_accounts!=i+1){goto accounts;
break;}
}
default:{cout<<"\nPlease Choose :\n";goto welcome;}
}
}
