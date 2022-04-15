#include "../winhttp.h"

//----- (0000000140407B90) ----------------------------------------------------
_QWORD* __fastcall sub_140407B90(__int64 a1, _QWORD* a2, int* a3, int a4)
{
	int* v7; // rbx
	int* v8; // rax
	int* v9; // rax
	__int64 v10; // rax
	__int64(__fastcall * **v11)(); // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	int* v14; // rax
	int* v15; // rbx
	__int64 v16; // rbx
	__int64 v17; // rax
	_QWORD* v18; // rbx
	__int64 v19; // rax
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-E0h] BYREF
	char v22[184]; // [rsp+28h] [rbp-D8h] BYREF
	__int128 v23; // [rsp+E0h] [rbp-20h]
	int* v24; // [rsp+F0h] [rbp-10h]
	__int64(__fastcall * *v25)(); // [rsp+100h] [rbp+0h] BYREF
	char v26[184]; // [rsp+108h] [rbp+8h] BYREF
	__int128 v27; // [rsp+1C0h] [rbp+C0h]
	int* v28; // [rsp+1D0h] [rbp+D0h]
	__int64 v29; // [rsp+1E0h] [rbp+E0h] BYREF
	__int64 v30; // [rsp+1E8h] [rbp+E8h]

	if (!*(_WORD*)a3)
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v7 = sub_14018B280(2i64, 0);
		a2[1] = v7;
		a2[3] = (char*)v7 + 2;
		a2[2] = v7;
		sub_1407DB590(v7, dword_1409E8764, 0i64);
		a2[2] = v7;
		if (v7)
			*(_WORD*)v7 = 0;
		return a2;
	}
	sub_1400B6F30((__int64)&v25);
	v28 = 0i64;
	v27 = 0i64;
	v25 = off_140B69230;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v27 = v8;
	*((_QWORD*)&v27 + 1) = v8;
	v28 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	sub_1400B6F30((__int64)&v21);
	v21 = off_140B69230;
	v24 = 0i64;
	v23 = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v23 = v9;
	*((_QWORD*)&v23 + 1) = v9;
	v24 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	v10 = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v10;
		while (*((_WORD*)a3 + v10));
	}
	sub_14001C480((__int64)v22, a3, (int*)((char*)a3 + 2 * v10));
	if (a4)
	{
		v13 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v13;
			while (*((_WORD*)a3 + v13));
		}
		sub_14001C480((__int64)v26, a3, (int*)((char*)a3 + 2 * v13));
		v14 = sub_14018B280(88i64, 0);
		v15 = v14;
		if (v14)
		{
			sub_1400B6390(v14);
			v15[2] = a4;
			*(_QWORD*)v15 = off_140B69300;
			*((float*)v15 + 3) = (float)a4;
		}
		else
		{
			v15 = 0i64;
		}
		sub_1400B7480((__int64)&v25, v15);
		v16 = sub_1400B7660(&v21);
		v17 = sub_1400B7660(&v25);
		if (sub_14001BE70(v17, v16))
		{
			v18 = sub_14018EFA0(&v29, (__int64)L"%u", (unsigned int)a4);
			v19 = sub_1400B7660(&v21);
			sub_1400422A0(a2, v19, (__int64)v18);
			if (v30)
				sub_14018B900(v30, 0);
			goto LABEL_22;
		}
		v11 = &v25;
	}
	else
	{
		v11 = &v21;
	}
	v12 = sub_1400B7660(v11);
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	sub_14001C1B0(a2, *(int**)(v12 + 8), *(_QWORD*)(v12 + 16));
LABEL_22:
	if ((_QWORD)v23)
		sub_14018B900(v23, 0);
	sub_1400B7390(&v21);
	if ((_QWORD)v27)
		sub_14018B900(v27, 0);
	sub_1400B7390(&v25);
	return a2;
}
// 1409E8764: using guessed type int dword_1409E8764[8];
// 140AF1064: using guessed type wchar_t aU_8[3];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140407B90: using guessed type char var_1E8[184];
// 140407B90: using guessed type char var_108[184];

