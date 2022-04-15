#include "../winhttp.h"

//----- (0000000140439FC0) ----------------------------------------------------
int** __fastcall sub_140439FC0(__int64 a1, int** a2)
{
	__int16* v3; // rax
	int* v4; // rsi
	__int64 v5; // rdi
	int* v6; // rax
	int* v7; // rbx
	unsigned __int64 v8; // rdi
	int* v9; // rax
	__int64 v10; // rax
	int* v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // r15
	__int64 v14; // rdi
	int* v15; // rax
	int* v16; // rsi
	unsigned __int64 v17; // rdi
	__int64 v18; // rcx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-F8h] BYREF
	char v21[8]; // [rsp+28h] [rbp-F0h] BYREF
	_WORD* v22; // [rsp+30h] [rbp-E8h]
	_WORD* v23; // [rsp+38h] [rbp-E0h]
	__int128 v24; // [rsp+E0h] [rbp-38h]
	int* v25; // [rsp+F0h] [rbp-28h]

	v3 = sub_14034BDD0(a1, *(_DWORD*)(*(_QWORD*)a1 + 12i64));
	v4 = (int*)v3;
	if (v3)
	{
		v5 = 0i64;
		if (*v3)
		{
			do
				++v5;
			while (v3[v5]);
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*(_QWORD*)v6 = off_140B55060;
			*((_QWORD*)v6 + 1) = v5;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, v4, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
	}
	else
	{
		v7 = 0i64;
	}
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		sub_1400B6F30((__int64)&v20);
		v20 = off_140B69230;
		v25 = 0i64;
		v24 = 0i64;
		v9 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v24 = v9;
		*((_QWORD*)&v24 + 1) = v9;
		v25 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		if (v7)
		{
			v10 = 0i64;
			if (*(_WORD*)v7)
			{
				do
					++v10;
				while (*((_WORD*)v7 + v10));
			}
			sub_14001C480((__int64)v21, v7, (int*)((char*)v7 + 2 * v10));
		}
		else if (v22 != v23)
		{
			*v22 = 0;
			v23 = v22;
		}
		v11 = sub_14018B280(96i64, 0);
		if (v11)
			v12 = (_QWORD*)sub_1404DB7E0((__int64)v11, *(_QWORD*)(qword_140C65898 + 120));
		else
			v12 = 0i64;
		sub_1400B7480((__int64)&v20, v12);
		v13 = sub_1400B7660(&v20);
		v14 = (__int64)(*(_QWORD*)(v13 + 16) - *(_QWORD*)(v13 + 8)) >> 1;
		v15 = sub_14018B280(2 * v14 + 18, 0);
		if (v15)
		{
			*(_QWORD*)v15 = off_140B55060;
			*((_QWORD*)v15 + 1) = v14;
		}
		else
		{
			v15 = 0i64;
		}
		v16 = v15 + 4;
		v17 = 2 * v14;
		sub_1407DB590(v15 + 4, *(int**)(v13 + 8), v17);
		*(_WORD*)((char*)v16 + v17) = 0;
		v18 = v24;
		*a2 = v16;
		if (v18)
			sub_14018B900(v18, 0);
		sub_1400B7390(&v20);
		if (v7)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	}
	else
	{
		*a2 = v7;
	}
	return a2;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140439FC0: using guessed type char var_F0[8];

