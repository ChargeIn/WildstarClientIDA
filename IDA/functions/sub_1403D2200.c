#include "../winhttp.h"

//----- (00000001403D2200) ----------------------------------------------------
int** __fastcall sub_1403D2200(__int64 a1, int** a2, unsigned int a3)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rcx
	int* v10; // rdi
	__int16* v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rbp
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // rdi
	unsigned __int64 v17; // rbx
	__int64 v18; // rcx
	int* v19; // rax
	int* v20; // rax
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-E8h] BYREF
	char v23[8]; // [rsp+28h] [rbp-E0h] BYREF
	_WORD* v24; // [rsp+30h] [rbp-D8h]
	_WORD* v25; // [rsp+38h] [rbp-D0h]
	__int128 v26; // [rsp+E0h] [rbp-28h]
	int* v27; // [rsp+F0h] [rbp-18h]

	v4 = sub_1401FE020(a3);
	v5 = v4;
	if (!v4 || (*(_BYTE*)(v4 + 8) & 2) != 0)
	{
		v19 = sub_14018B280(18i64, 0);
		if (v19)
		{
			*((_QWORD*)v19 + 1) = 0i64;
			*(_QWORD*)v19 = off_140B55060;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = v19 + 4;
		*a2 = v20;
		*(_WORD*)v20 = 0;
	}
	else
	{
		sub_1400B6F30((__int64)&v22);
		v27 = 0i64;
		v26 = 0i64;
		v22 = off_140B69230;
		v6 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v26 = v6;
		*((_QWORD*)&v26 + 1) = v6;
		v27 = v6 + 4;
		if (v6)
			*(_WORD*)v6 = 0;
		v7 = (int*)sub_14034BDD0((__int64)(v6 + 4), 732307);
		if (v7)
		{
			v8 = 0i64;
			if (*(_WORD*)v7)
			{
				do
					++v8;
				while (*((_WORD*)v7 + v8));
			}
			sub_14001C480((__int64)v23, v7, (int*)((char*)v7 + 2 * v8));
		}
		else if (v24 != v25)
		{
			*v24 = 0;
			v25 = v24;
		}
		v10 = sub_14018B280(96i64, 0);
		if (v10)
		{
			v11 = sub_14034BDD0(v9, *(_DWORD*)(v5 + 20));
			v12 = (_QWORD*)sub_1404DDB40((__int64)v10, (int*)v11);
		}
		else
		{
			v12 = 0i64;
		}
		sub_1400B7480((__int64)&v22, v12);
		v13 = sub_1400B7660(&v22);
		v14 = (__int64)(*(_QWORD*)(v13 + 16) - *(_QWORD*)(v13 + 8)) >> 1;
		v15 = sub_14018B280(2 * v14 + 18, 0);
		if (v15)
		{
			*((_QWORD*)v15 + 1) = v14;
			*(_QWORD*)v15 = off_140B55060;
		}
		else
		{
			v15 = 0i64;
		}
		v16 = v15 + 4;
		v17 = 2 * v14;
		sub_1407DB590(v15 + 4, *(int**)(v13 + 8), v17);
		*(_WORD*)((char*)v16 + v17) = 0;
		v18 = v26;
		*a2 = v16;
		if (v18)
			sub_14018B900(v18, 0);
		sub_1400B7390(&v22);
	}
	return a2;
}
// 1403D22FF: variable 'v9' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 1403D2200: using guessed type char var_E0[8];

