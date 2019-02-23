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
 void nhapThang(int thang);

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
	 printf("1. Xep loai diem cua mon hoc \n");  
	 printf("2. So tien khach phai tra \n");  
	 printf("3. Xuat ra man hinh thang bang tieng anh \n");
	 printf("0. Thoat chuong trinh \n"); 
 } 

		 
 void thucThiCT () {  
	 int chon=-1;  
	 float dtl,dgk,dck,dongia;
	 int soluong,thang;
	 int n = 0;  
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

		 case 0:return;   
		 }  
	 } 
 }
 //  môn học lý thuyết thường có 03 cột điểm hệ số 10: điểm tiểu luận, điểm giữa kỳ, điểm cuối kỳ có tỉ lệ lần lượt là 20%, 30%, 50%. 
 //Hãy cho biết điểm chữ của môn học khi người dùng nhập vào điểm tiểu luận, điểm giữa kỳ và điểm cuối kỳ
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
 //Viết chương trình nhập vào đơn giá 1 mặt hàng, và số lượng bán của mặt hàng. Tính tiền khách phải trả, với thông tin như sau: 
// Thành tiền: đơn giá * số lượng 
// Giảm giá: Nếu thành tiền > 100, thì giảm 3% thành tiền, ngược lại không giảm 
// Tổng tiền phải trả: thành tiền – giảm giá.
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
 // Nhập một tháng (nhập bằng số), in ra màn hình tháng đó bằng tiếng Anh tương tứng 
 //(January, February, March, April, May, June, July, August, September, October, November, December) 
 //cùng số ngày tương ứng của tháng đó. Nếu nhập tháng không đúng in ra màn hình “Month is invalid”. 
 void nhapThang( int thang)
 {
	 if(thang<1 ||thang >12)
		 printf(" Month is invalid");
	 else if (thang==1)
		 printf(" January co 31 ngay");
	 else if (thang==2)
		 printf(" February ");
     else if( thang==3)
		 printf("March co 31 ngay");
	 else if(thang==4)
		 printf(" April co 30 ngay");
	 else if(thang==5)
		 printf(" May co 31 ngay");
	 else if(thang==6)
		 printf(" June co 30 ngay");
	 else if( thang ==7)
		 printf(" July co 31 ngay");
	 else if( thang ==8)
		 printf(" August co 31 ngay");
	 else if(thang ==9)
		 printf("September co 30 ngay");
	 else if( thang==10)
		 printf("October co 31 ngay");
	 else if( thang==11)
		 printf("  November co 30 ngay");
	 else if(thang==12)
		 printf(" December co 31 ngay");


 }