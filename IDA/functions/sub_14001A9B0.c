#include "../winhttp.h"

//----- (000000014001A9B0) ----------------------------------------------------
__int64 __fastcall sub_14001A9B0(__int64 a1, int a2, __int64 a3)
{
	int* v3; // r12
	unsigned __int64 v4; // rdi
	unsigned __int64 v5; // r13
	__int64 v6; // r15
	int* v8; // rsi
	int* v9; // rsi
	__int64 v10; // rcx
	__int64 v11; // rcx
	int* v12; // r12
	__int64 v13; // r15
	int* v14; // r8
	char* v15; // rbx
	unsigned __int64 v16; // rsi
	__int64 v17; // r10
	unsigned __int64 v18; // r8
	__int64 v19; // rbx
	__int64 v20; // r11
	_WORD* v21; // rax
	__int64 v22; // rcx
	void(__fastcall * v23)(char*, __int64); // rax
	char v25[8]; // [rsp+20h] [rbp-40h] BYREF
	int* v26; // [rsp+28h] [rbp-38h]
	int* v27; // [rsp+30h] [rbp-30h]
	__int64 v28; // [rsp+38h] [rbp-28h]
	char v29[8]; // [rsp+40h] [rbp-20h] BYREF
	int* v30; // [rsp+48h] [rbp-18h]
	int* v31; // [rsp+50h] [rbp-10h]
	__int64 v32; // [rsp+58h] [rbp-8h]

	v3 = *(int**)(a3 + 8);
	v4 = 0i64;
	v5 = a2;
	v6 = (__int64)(*(_QWORD*)(a3 + 16) - (_QWORD)v3) >> 1;
	v8 = 0i64;
	v30 = 0i64;
	v31 = 0i64;
	v32 = 0i64;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v8 = sub_14018B280(2 * (v6 + 1), 0);
		v30 = v8;
		v31 = v8;
		v32 = (__int64)v8 + 2 * v6 + 2;
	}
	sub_1407DB590(v8, v3, 2 * v6);
	v31 = (int*)((char*)v8 + 2 * v6);
	if (v31)
		*((_WORD*)v8 + v6) = 0;
	if (*(_DWORD*)(a1 + 296))
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 48i64))(a1, v29);
	v9 = 0i64;
	v10 = *(int*)qword_140C63750;
	v26 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v11 = 32 * (v10 + 1);
	v12 = *(int**)(v11 + a1 + 8);
	v13 = (__int64)(*(_QWORD*)(v11 + a1 + 16) - (_QWORD)v12) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = sub_14018B280(2 * (v13 + 1), 0);
		v26 = v9;
		v27 = v9;
		v28 = (__int64)v9 + 2 * v13 + 2;
	}
	sub_1407DB590(v9, v12, 2 * v13);
	v14 = (int*)((char*)v9 + 2 * v13);
	v27 = v14;
	if (v14)
	{
		*(_WORD*)v14 = 0;
		v14 = v27;
	}
	if (v5 < 5)
	{
		v15 = (char*)(a1 + 32 * (v5 + 1));
		v16 = 5 - v5;
		do
		{
			if (v29 != v15)
				sub_14001C480((__int64)v15, v30, v31);
			v15 += 32;
			--v16;
		} while (v16);
		v14 = v27;
	}
	v17 = (__int64)v26;
	v18 = ((char*)v14 - (char*)v26) >> 1;
	*(_DWORD*)(a1 + 24) = (1 << v5) | *(_DWORD*)(a1 + 24) & ((1 << v5) - 1);
	v19 = a1 + 32 * (*(int*)qword_140C63750 + 1i64);
	v20 = *(_QWORD*)(v19 + 8);
	if (v18 == (*(_QWORD*)(v19 + 16) - v20) >> 1)
	{
		if (!v18)
			goto LABEL_28;
		v21 = *(_WORD**)(v19 + 8);
		while (*(_WORD*)((char*)v21 + v17 - v20) == *v21)
		{
			++v4;
			++v21;
			if (v4 >= v18)
				goto LABEL_28;
		}
	}
	v22 = *(_QWORD*)(a1 + 288);
	if (v22 && v19 != v22)
	{
		sub_14001C480(v22, *(int**)(v19 + 8), *(int**)(v19 + 16));
		v17 = (__int64)v26;
	}
	v23 = *(void(__fastcall**)(char*, __int64))(a1 + 304);
	if (v23)
	{
		v23(v25, v19);
		v17 = (__int64)v26;
	}
LABEL_28:
	if (v17)
		sub_14018B900(v17, 0);
	if (v30)
		sub_14018B900((__int64)v30, 0);
	return 1i64;
}
// 14001ABAD: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140C63750: using guessed type __int64 qword_140C63750;
// 14001A9B0: using guessed type char var_20[8];
// 14001A9B0: using guessed type char var_40[8];

