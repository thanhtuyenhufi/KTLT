// T1_CTDL_NguyenThiThanhTuyen_2033172036.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include<conio.h>

//--------------------------------------------------------------------------------------------------------
//Khai bao
 void hienThiMenu ();
 void thucThiCT ();
 void xuatKetQuaHocTap (float dtl,float dgk,float dck);
 float tinhTien(float dongia,int soluong);
 void xuatSoNgayVaThang(int thang);
 int tinhTong(int n);
 double tinhTongHam(int n);
 void heThapLucPhan (int n);
 int timUCLN(int a,int b);
 int tinhTongCacChuSo(int n);
 void DemChanLe(int n);




//--------------------------------------------------------------------------------------------------------------
//Ham main
//int _tmain(int argc, _TCHAR* argv[])
void main()
{
   hienThiMenu();
   thucThiCT();
   _getch();
   
}
//----------------------------------------------------------------------------------------------------------------------
 //Than cua cac ham con
 void hienThiMenu() {  
	 printf("CHUONG TRINH LAP TRINH CAN BAN \n");  
	 printf("1. Xep loai diem cua mon hoc :\n");  
	 printf("2. So tien khach phai tra :\n");  
	 printf("3. Xuat ra man hinh thang bang tieng anh va so ngay :\n");
	 printf("4. Xuat ham tinh tong :\n");
	 printf("5. Xuat ham tinh tong :\n");
	 printf("6. Gia tri thap luc phan tuong ung la :\n");
	 printf("7. Uoc chung lon nhat cua 2 so la :\n");
	 printf("8. Tong cac chu so co trong so nguyen duong la :\n");
	 printf("9. Dem so chan so le la :\n");
	 printf("0. Thoat chuong trinh \n"); 
 } 

		 
 void thucThiCT () {  
	 int chon=-1;  
	 float dtl,dgk,dck,dongia;
	 int soluong,thang;
	 int n,a,b,UCLN; 
	
	 while(chon!=0)  {   
		 printf("\nNhap bai can thuc thi: "); 
		 scanf_s ("%d", &chon);
		 switch(chon)   {    
		 case 1: printf("Nhap diem tieu luan : ");      
			     scanf_s ("%f", &dtl);
				 printf("Nhap diem giua ky : ");      
				 scanf_s ("%f", &dgk);
				 printf("Nhap diem cuoi ky : ");      
				 scanf_s ("%f", &dck);
				 xuatKetQuaHocTap(dtl,dgk,dck);
				 break;
		 case 2: printf("Nhap vao don gia mat hang :");      
			     scanf_s ("%f", &dongia);  
				 printf( "Nhap vao so luong :");
				 scanf_s("%d",&soluong);
				 printf("Tong tien phai tra: %0.2f ",tinhTien(dongia,soluong));      
			     break;    
		 case 3: printf(" Nhap vao mot thang :");
			     scanf_s ("%d",&thang);
				 xuatSoNgayVaThang( thang);
				 break;
		 case 4: printf(" Nhap vao n :");
			     scanf_s("%d",&n);
				 printf(" Tong la :%d", tinhTong(n));
				 break;
		 case 5: printf("Nhap vao n :");
			     scanf_s("%d",&n);
				 printf(" Tong la :%lf", tinhTongHam(n));
				 break;
		 case 6: printf(" Nhap vao ky tu :");
				 scanf_s("%d",&n);
				 heThapLucPhan ( n);
				 break;
		 case 7: printf(" Nhap vao a :");
			     scanf_s("%d",&a);
				 printf(" Nhap vao b :");
			     scanf_s("%d",&b);
				 printf(" Uoc chung lon nhat cua 2 so la :%d",timUCLN(a,b));
				 break;
		 case 8: printf(" Nhap vao so nguyen duong :");
			     scanf_s("%d",&n);
				 printf(" Tong cac chu so la :%d",tinhTongCacChuSo(n));
				 break;
		 case 9: printf(" Nhap vao so nguyen duong :");
			     scanf_s("%d",&n);
				 DemChanLe(n);
				 
				 break;
		 case 0:return;   
		 }  
	 } 
 }
 //--------------------------------------------------------------------------------
 void xuatKetQuaHocTap(float dtl,float dgk,float dck)
 {
	 float tinhDiem;
	 tinhDiem= dtl*0.2 + dgk*0.3 + dck*0.5;
	 if(tinhDiem>=8.5)
		 printf (" Xep loai A ");
	 else if(tinhDiem>=7)
		 printf(" Xep loai B");
	 else if(tinhDiem>=5.5)
		 printf(" Xep loai C");
	 else if(tinhDiem>=4)
		 printf(" Xep loai D");
	 else 
		 printf(" Xep loai F");
 }
//-----------------------------------------------------------------------------------------
 float tinhTien(float dongia,int soluong)
 {
	 float thanhTien= dongia*soluong;
	 float tongtienphaitra;
 	 float giamgia;
 	 if(thanhTien>100)
 	{
 		giamgia=thanhTien*3/100;
 		tongtienphaitra= thanhTien-giamgia;
 	}
 	
 	else
 	{
 	 tongtienphaitra = thanhTien;
 	}
	 return tongtienphaitra;
 }
 //---------------------------------------------------------------------------
 void xuatSoNgayVaThang( int thang)
 {
	 
	 switch( thang)
	 {
		 case 1: printf(" January co 31 ngay");
				break;
		 case 2: printf(" February co 28 hoac 29 ngay");
				break;
		 case 3: printf("March co 31 ngay");
				break;
		 case 4: printf(" April co 30 ngay");
				break;
		 case 5: printf(" May co 31 ngay");
			   break;
		 case 6: printf(" June co 30 ngay");
			   break;
		 case 7: printf(" July co 31 ngay");
			  break;
		 case 8: printf(" August co 31 ngay");
			 break;
		 case 9: printf("September co 30 ngay");
			 break;
		case 10: printf("October co 31 ngay");
			 break;
		case 11: printf("  November co 30 ngay");
			break;
		case 12: printf(" December co 31 ngay");
			break;
		default: printf(" Nhap thang sai");
			break;
     }

 }
 //------------------------------------------------------------------------------
 int tinhTong(int n)
 {
	
	int tong=0;
	for (int i=1;i<=n;i++)
	{
		tong=tong+i*(i+1);
	}
	return tong;
}
 //-----------------------------------------------------------------------------------------
 double tinhTongHam(int n)
 {
	double t=0;
	for (int i=1;i<=n;i++)
	{
		t=t + (1/(i*(i+1)*(i+2)));
	}
	return t;
 }
 //-------------------------------------------------------------------------------------------

 void heThapLucPhan (int n)
 {
	 switch (n)
	 {
	   case 0: printf(" Ky so tuong ung la 0");
		   break;
	   case 1: printf(" Ky so tuong ung la 1");
		   break;
	   case 2: printf(" Ky so tuong ung la 2");
		   break;
	   case 3: printf(" Ky so tuong ung la 3");
		   break;
	   case 4: printf(" Ky so tuong ung la 4");
		   break;
       case 5: printf(" Ky so tuong ung la 5");
		   break;
	   case 6: printf(" Ky so tuong ung la 6");
		   break;
	   case 7: printf(" Ky so tuong ung la 7");
		   break;
	   case 8: printf(" Ky so tuong ung la 8");
		   break;
	   case 9: printf(" Ky so tuong ung la 9");
		   break;
	   case 10: printf(" Ky so tuong ung la A");
		   break;
	   case 11: printf(" Ky so tuong ung la B");
		   break;
	   case 12: printf(" Ky so tuong ung la C");
		   break;
	   case 13: printf(" Ky so tuong ung la D");
		   break;
	   case 14: printf(" Ky so tuong ung la E");
		   break;
       case 15: printf(" Ky so tuong ung la F");
		   break;
	  default: printf (" He thap luc phan khong dung ky so nay");
		   break;	
	 }
 }
//-------------------------------------------------------------------------------------------
int timUCLN(int a,int b)
{
 if(a<1||b<1)
	 return 0;
	while (a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	return a;
}
//-------------------------------------------------------------------------------------------
int tinhTongCacChuSo( int n)
{
	int tong =0;
	if(n<0)
	printf("moi ban nhap lai\n");
	while(n>0)
	{
		 tong= tong+(n%10);
		 n=n/10;
	}
	return tong;
}
void DemChanLe( int n)
{
	int dsch=0,dsle=0,S;
	if(n<0)
	printf(" moi ban nhap lai\n");
	while(n>0)
	{
		S=n%10;
		if(S%2==0)
			dsch ++;
		else
			dsle ++;
		n=n/10;	
	}
	printf(" So chan la :%d\n so le la :%d\n",dsch,dsle);
	
	
}
//updated





 


