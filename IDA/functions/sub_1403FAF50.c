#include "../winhttp.h"

//----- (00000001403FAF50) ----------------------------------------------------
int* __fastcall sub_1403FAF50(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rdx
	__int64 v5; // rax
	int* v6; // rbx
	unsigned int v7; // r9d
	unsigned int v8; // r8d
	unsigned int v9; // ecx
	char v11[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v12; // [rsp+28h] [rbp-50h]
	__int64 v13; // [rsp+30h] [rbp-48h]
	__int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
	char v15[8]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v16; // [rsp+58h] [rbp-20h]
	int* v17; // [rsp+80h] [rbp+8h] BYREF
	int* v18; // [rsp+90h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = (int*)v3;
	if (v5)
	{
		v7 = *a2;
		do
		{
			v8 = *(_DWORD*)(v5 + 32);
			if (v8 < v7 || v8 <= v7 && *(_QWORD*)(v5 + 40) < *((_QWORD*)a2 + 1))
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v6 = (int*)v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
	}
	if (v6 == (int*)v3 || (v9 = v6[8], *a2 < v9) || *a2 <= v9 && *((_QWORD*)a2 + 1) < *((_QWORD*)v6 + 5))
	{
		v12 = sub_14018B280(40i64, 0);
		v13 = 0i64;
		*(_BYTE*)v12 = 0;
		*((_QWORD*)v12 + 1) = 0i64;
		*((_QWORD*)v12 + 2) = v12;
		*((_QWORD*)v12 + 3) = v12;
		v14[0] = *(_QWORD*)a2;
		v14[1] = *((_QWORD*)a2 + 1);
		sub_1403D2AA0((__int64)v15, (__int64)v11);
		v17 = v6;
		sub_1403FD570(a1, &v18, (__int64*)&v17, v14);
		v6 = v18;
		sub_140008410((__int64)v15);
		sub_14018B900(v16, 0);
		sub_140008410((__int64)v11);
		sub_14018B900((__int64)v12, 0);
	}
	return v6 + 12;
}
// 1403FAF50: using guessed type char var_58[8];
// 1403FAF50: using guessed type char var_28[8];

