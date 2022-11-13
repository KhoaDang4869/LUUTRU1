#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>

struct SinhVien
{
	char Masv[10];
	char Hotensv[30];
	char Phai[10];
	int Namsinh;
	char Nghanhhoc[30];
	float Kqcuoikhoa;
	char Xeploai[20];
	char Quequan[30];
};

typedef struct SinhVien SINHVIEN;
void TIMSV(SINHVIEN a[], int n);
void INGX(SINHVIEN a[], int n);
void Sapxep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN &x);
void NhapsvN(SINHVIEN a[],int n);
void Xuatsv(SINHVIEN);
void XuatsvN(SINHVIEN a[], int n);

int main ()
{ int n;
    SINHVIEN x, a[10];
    printf("\n\n\n Nhap so luong sinh vien ");
    scanf("%d",&n);
    NhapsvN(a,n);
    XuatsvN(a,n);
    printf("\n\n\n An phim bat ky de in DS sap xep ");
    getch();
    Sapxep(a,n);
    XuatsvN(a,n);
    printf("\n\n\n An phim bat ky de in Ds Gioi_Xuat_sac ");
    getch();
    INGX(a,n);
     printf("\n\n\n An phim bat ky de tim SV ");
     getch();
     TIMSV(a,n);
}
void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\n Nhap ma SV: ");
	gets(x.Masv);
	  //scanf("%d",&x.Masv);
	    fflush(stdin);
	    printf("\nNhap ho ten: ");
	    gets(x.Hotensv);
             fflush(stdin);
	    printf("\nNhap phai: ");
		gets(x.Phai);
		    fflush(stdin);
		printf("]nNhap Nganh hoc: ");
		gets(x.Nganhhoc);
		    fflush(stdin);
		print("\nNhap Que quan: ");
		gets(x.Quequan);
		
		
		do
		{
			 printf("\nNhap Nam sinh: ");
			 scantf("%d",&x.Namsinh);
			
		}while(x.Namsinh<1990 || x.Namsinh>2010);
		
		do
		{
			 printf("\nNhap KQ cuoi khoa: ");
			 scantf("%f",&x.Kqcuoikhoakhoa);
		}while(x.Kqcuoikhoa<0||x.Kqcuoikhoa>4);
		
	fflush(stdin);
	   if(x.Kqcuoikhoa<=1.5)
	       {strcpy(x.Xeploai,"Yeu");}
	   else
	         if(x.Kqcuoikhoa<=3.8)
	           {strcpy(x.Xeploai,"Gioi");}
	           else
	              {strcpy(x.Xeploai, "Xuat sac"); }
	 void NhapsvN(SINHVIEN a[] ,int n)
	      {
	      	   for(int i=0;i<n;i++)
				  {
				  	printf("\n Nhap sinh vien thu %d", i+1);
				  	Nhapsv(a[i]);
				  }
	      }
	  void Xuatsv(SINHVIEN x)
	  {
	  	printf("|%5s|&-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s|",x.Hotensv Masv,x.Hotensv,x.Phai, x.Namsinh,x.Nganhhoc,
		                                                                     x.Kqcuoikhoa,x.Xeploai,x.Quequan);
	  } 
	           
	       			
	
}
