#include "../winhttp.h"

//----- (0000000140540070) ----------------------------------------------------
void __fastcall sub_140540070(const void*** a1, int a2, int a3)
{
	const void*** v3; // rdi
	const void** i; // rbx
	_QWORD* v8; // rcx
	_QWORD* v9; // rdx
	const void** v10; // rcx
	const void*** v11; // rdi
	const void** j; // rsi
	_QWORD* v13; // rcx
	_QWORD* v14; // rdx
	const void** v15; // rcx
	const void*** v16; // r14
	const void** k; // rdi
	_QWORD* v18; // rcx
	_QWORD* v19; // rdx
	const void** v20; // rcx
	const void** v21; // rcx
	const void** v22; // rbx
	const void** v23; // [rsp+20h] [rbp-18h] BYREF
	const void** v24; // [rsp+28h] [rbp-10h] BYREF
	const void** v25; // [rsp+78h] [rbp+40h] BYREF

	if (a2)
	{
		v3 = a1 + 69;
		i = a1[69];
		a1[69] = 0i64;
		v25 = i;
		if (i)
		{
			i[1] = &v25;
			for (i = v25; v25; i = v25)
			{
				v8 = i[1];
				if (v8)
					*v8 = i[2];
				v9 = i[2];
				v10 = i + 2;
				if (v9)
					v9[1] = i[1];
				*v10 = 0i64;
				i[1] = v3;
				*v10 = *v3;
				*v3 = i;
				if (*v10)
					*((_QWORD*)*v10 + 1) = v10;
				if ((!a3 || !*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 72))
					&& (*((unsigned int(__fastcall**)(const void**)) * i + 7))(i) == a2)
				{
					(*((void(__fastcall**)(const void**, _QWORD)) * i + 10))(i, 0i64);
				}
			}
		}
		v11 = a1 + 67;
		j = a1[67];
		a1[67] = 0i64;
		v23 = j;
		if (j)
		{
			j[1] = &v23;
			for (j = v23; v23; j = v23)
			{
				v13 = j[1];
				if (v13)
					*v13 = j[2];
				v14 = j[2];
				v15 = j + 2;
				if (v14)
					v14[1] = j[1];
				*v15 = 0i64;
				j[1] = v11;
				*v15 = *v11;
				*v11 = j;
				if (*v15)
					*((_QWORD*)*v15 + 1) = v15;
				if ((!a3 || !*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * j + 2))(j) + 72))
					&& (*((unsigned int(__fastcall**)(const void**)) * j + 7))(j) == a2)
				{
					(*((void(__fastcall**)(const void**, _QWORD)) * j + 10))(j, 0i64);
				}
			}
			i = v25;
		}
		v16 = a1 + 70;
		k = a1[70];
		a1[70] = 0i64;
		v24 = k;
		if (k)
		{
			k[1] = &v24;
			for (k = v24; v24; k = v24)
			{
				v18 = k[1];
				if (v18)
					*v18 = k[2];
				v19 = k[2];
				v20 = k + 2;
				if (v19)
					v19[1] = k[1];
				*v20 = 0i64;
				k[1] = v16;
				*v20 = *v16;
				*v16 = k;
				if (*v20)
					*((_QWORD*)*v20 + 1) = v20;
				if ((!a3 || !*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * k + 2))(k) + 72))
					&& *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * k + 2))(k) + 76)
					&& (*((unsigned int(__fastcall**)(const void**)) * k + 7))(k) == a2)
				{
					(*((void(__fastcall**)(const void**, _QWORD)) * k + 10))(k, 0i64);
				}
			}
			j = v23;
			i = v25;
		}
		v21 = a1[71];
		if (v21)
		{
			do
			{
				v22 = (const void**)v21[4];
				if (*((_DWORD*)v21 + 11) == a2)
					(*(void(__fastcall**)(const void**, __int64)) * v21)(v21, 1i64);
				v21 = v22;
			} while (v22);
			i = v25;
			j = v23;
			k = v24;
		}
		if (k)
		{
			sub_1401A4A00(&v24);
			i = v25;
			j = v23;
		}
		if (j)
		{
			sub_1401A4A00(&v23);
			i = v25;
		}
		if (i)
			sub_1401A4A00(&v25);
	}
}

