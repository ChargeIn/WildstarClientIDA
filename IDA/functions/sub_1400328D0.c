#include "../winhttp.h"

//----- (00000001400328D0) ----------------------------------------------------
void __fastcall sub_1400328D0(__int64* a1, unsigned __int64 a2, _DWORD* a3)
{
	_DWORD* v4; // rbx
	unsigned __int64 v6; // r13
	int* v7; // rax
	unsigned __int64 v8; // rbp
	int* v9; // r12
	__int64 v10; // rcx
	__int64 v11; // r14
	__int64 v12; // rbp
	int* v13; // rdi
	__int64 v14; // rdx
	char* v15; // rbx
	int* v16; // rcx
	__int64 v17; // rcx
	int* v18; // rdi
	__int64 v19; // rdx
	char* v20; // rbx

	v4 = a3;
	v6 = a1[1] + 1;
	v7 = sub_14018DB00(*a1, v6, 40i64);
	v8 = a1[1];
	v9 = v7;
	if (v8 > a2)
	{
		v10 = 5 * (v8 + 1);
		v11 = -40i64 - (_QWORD)v7;
		v12 = v8 - a2;
		v13 = &v7[2 * v10];
		do
		{
			v13 -= 10;
			if (v13)
			{
				v14 = (__int64)v13 + v11 + *a1 + 8;
				*v13 = *(int*)((char*)v13 + v11 + *a1);
				sub_140030C70((__int64)(v13 + 2), v14);
			}
			v15 = (char*)v13 + v11 + *a1;
			sub_140008410((__int64)(v15 + 8));
			sub_14018B900(*((_QWORD*)v15 + 2), 0);
			--v12;
		} while (v12);
		v4 = a3;
	}
	v16 = &v9[10 * a2];
	if (v16)
	{
		v17 = (__int64)(v16 + 2);
		*(_DWORD*)(v17 - 8) = *v4;
		sub_140030C70(v17, (__int64)(v4 + 2));
	}
	if ((int*)*a1 != v9)
	{
		if (a2)
		{
			v18 = v9;
			do
			{
				if (v18)
				{
					v19 = *a1 + (char*)v18 - (char*)v9 + 8;
					*v18 = *(_DWORD*)(*a1 + (char*)v18 - (char*)v9);
					sub_140030C70((__int64)(v18 + 2), v19);
				}
				v20 = (char*)(*a1 + (char*)v18 - (char*)v9);
				sub_140008410((__int64)(v20 + 8));
				sub_14018B900(*((_QWORD*)v20 + 2), 0);
				v18 += 10;
				--a2;
			} while (a2);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v9;
	}
	a1[1] = v6;
}

