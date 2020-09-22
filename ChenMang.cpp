#include <iostream>
#include <string>
using namespace std;

void Nhap(int a[],int n){
	for(int i=1;i<=n;i++){
		cout<<"Nhap phan tu a["<<i<<"]=";
		cin>>a[i];
	}
}
void Xuat(int a[],int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<"\t";
	}
}
void Chen(int a[],int n,int vitrichen,int sochen){
	for(int i=n+1;i>=vitrichen;i--){
		a[i]=a[i-1];
	}
	a[vitrichen]=sochen;
	n++;
	Xuat(a,n);
}
void Xoa(int a[],int &n,int vitrixoa){
		for(int i=vitrixoa;i<=n;i++){
		a[i]=a[i+1];
	}
	n--;
}
void XoaSoChan(int a[],int &n){
	for(int i=1;i<=n;i++){
		if(a[i]%2==0){
			Xoa(a,n,i);
			i--;
		}
	}
}
int main(){
	int a[100];
	int n;
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n;
	Nhap(a,n);
	
	cout<<"\nMang vua nhap la: ";
	Xuat(a,n);
	
//	int vitrixoa;
//	cout<<"\nNhap vi tri xoa: ";
//	cin>>vitrixoa;
//	Xoa(a,n,vitrixoa);
	
	XoaSoChan(a,n);
	cout<<"\nMang sau khi xoa so chan la: ";
	Xuat(a,n);
//	int vitrichen,sochen;
//	cout<<"\nNhap vi tri chen:";
//	cin>>vitrichen;
//	for(int i=0;i<n;i++){
//		if(vitrichen<=0||vitrichen>n){
//			cout<<"\nNhap vi tri chen:";
//			cin>>vitrichen;
//		}
//	}
//	cout<<"\nNhap so chen:";
//	cin>>sochen;
//	cout<<"\nMang vua chen moi la: ";
//	Chen(a,n,vitrichen,sochen);
}
