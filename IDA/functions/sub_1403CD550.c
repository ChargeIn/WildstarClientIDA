#include "../winhttp.h"

//----- (00000001403CD550) ----------------------------------------------------
__int64 __fastcall sub_1403CD550(__int64 a1, _DWORD* a2)
{
	int* v3; // rax
	int* v4; // rax
	int* v5; // rdi
	signed int v6; // ebx
	__int64 v7; // rcx
	int* v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int16* v11; // rbx
	__int64 v12; // rax
	__int64(__fastcall * *v14)(); // [rsp+30h] [rbp-E8h] BYREF
	char v15[8]; // [rsp+38h] [rbp-E0h] BYREF
	_WORD* v16; // [rsp+40h] [rbp-D8h]
	_WORD* v17; // [rsp+48h] [rbp-D0h]
	__int128 v18; // [rsp+F0h] [rbp-28h]
	int* v19; // [rsp+100h] [rbp-18h]

	sub_1400B6F30((__int64)&v14);
	v19 = 0i64;
	v18 = 0i64;
	v14 = off_140B69230;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v18 = v3;
	*((_QWORD*)&v18 + 1) = v3;
	v19 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = sub_14018B280(88i64, 0);
	v5 = v4;
	if (v4)
	{
		v6 = *a2 / 0x3E8u;
		sub_1400B6390(v4);
		*(_QWORD*)v5 = off_140B69300;
		v5[2] = v6;
		*((float*)v5 + 3) = (float)v6;
	}
	else
	{
		v5 = 0i64;
	}
	sub_1400B7480((__int64)&v14, v5);
	v8 = (int*)sub_14034BDD0(v7, 378745);
	if (v8)
	{
		v10 = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v10;
			while (*((_WORD*)v8 + v10));
		}
		sub_14001C480((__int64)v15, v8, (int*)((char*)v8 + 2 * v10));
	}
	else if (v16 != v17)
	{
		*v16 = 0;
		v17 = v16;
	}
	v11 = sub_14034BDD0(v9, 4829);
	v12 = sub_1400B7660(&v14);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v12 + 8), 0, (int*)v11);
	if ((_QWORD)v18)
		sub_14018B900(v18, 0);
	sub_1400B7390(&v14);
	return 0i64;
}
// 1403CD615: variable 'v7' is possibly undefined
// 1403CD661: variable 'v9' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1403CD550: using guessed type char var_E0[8];

