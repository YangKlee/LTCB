#include<stdio.h>

int type_vct;
int *vcta;
int *vctb;
int *vctacs;
int vcttemp[6];
void menu()
{
		
	int choose;
	printf("===========================================\n");
	printf("Vui long lua chon: \n");
	printf("1. Nhap du lieu cho vector \n2. Xem vector da nhap\n3. Tinh toan vecto \n");
	scanf("%d", &choose);
	if(choose == 1)
	{
		int vct;
		printf("Chon vector can nhap[1,2,3,4]: \n Nhan 0 de thoat nhap\n");
		scanf("%d", &vct);
		input_vector(vct);
	}
	else if(choose == 2)
	{
		// ham xuat vector
		int vct;
		printf("Chon vector can nhap[1,2,3,4]: ");
		scanf("%d", &vct);
		if(vct == 1)
		{
			vector_export(vcta);
		}
		else if(vct == 2)
		{
			vector_export(vctb);
		}
		else if(vct == 3)
		{
			vector_export(vctc);
		}
		else if(vct == 4)
		{
			vector_export(vctd);
		}
		
	}
	else if(choose == 3)
	{
		printf("======Tinh toan vector =========");
		printf("1. Tinh vector chi phong\n");
		printf("2. Tich vo huong hai vector\n");
		printf("3. Goc giua hai vector\n");
		printf("4. Vector co huong\n");
		int choose_calc;
		scanf("%d", &choose_calc);
		if(choose_calc == 1)
		{
			// ham tinh vt chi phuong
			calc_input();
			vector_export();// debug
			cacl_chiphuong(vcttemp);
			vector_export(vctacs);
			
		}
		else if(choose_calc == 2)
		{
			// ham tinh tich vo huong
		}
		else if(choose_calc == 3)
		{
			// ham tinh goc
		}
		else if(choose_calc == 4)
		{
			// ham tinh tich co huong
		}
		
		
	}
	else
	{
		menu();
	}

}
void cacl_chiphuong(int vct)
{
	for(int i = 0; i < type_vct; i++)
	{
		vctacs[i] = vcttemp[i+4] - vcttemp[i];
	}
}
void input_vector(int vct)
{

	for(int i = 0 ; i < type_vct; i++)
	{

		printf("Nhap vecto thu %d: ", i+1);
		if(vct == 1)
		{
			scanf("%d", &vcta[i]);
		}
		else if(vct == 2)
		{
			scanf("%d", &vctb[i]);
		}
		else if(vct == 3)
		{
			scanf("%d", &vctc[i]);
		}
		else if(vct == 4)
		{
			scanf("%d", &vctd[i]);
		}
		else
		{
			break;
		}
		
	}

	menu();

}

void calc_input()
{
	int ip, ip2;
	printf("1: Vector A\n2: Vector B\n3: Vector C\n4: Vector D");
	printf("Nhap vector thu nhat: ");scanf("%d", &ip);
	get_vector(ip, 1);
	printf("Nhap vector thu hai: ");scanf("%d", &ip);
	get_vector(ip, 2);
}

void vector_export(int vct[])
{
	printf("Ket qua la: ");
	for(int i = 0; i< type_vct ; i++)
	{
		printf("%d ", vct[i]);
	}
	printf("\n");
	menu();
}

main()
{
	
	printf("Chon loai vector can tinh: \n2. Hai chieu(x,y)\n3. Ba chieu(x,y,z)\n");
	scanf("%d", &type_vct);
	if(type_vct == 2 || type_vct == 3 )
	{
		vcta = (int *)malloc(type_vct * sizeof(int));
		vctb = (int *)malloc(type_vct * sizeof(int));
		vctacs = (int *)malloc(type_vct * sizeof(int));

	}
	else
	{
		printf("Lua chon khong hop le!");
	}
	menu();


	
}