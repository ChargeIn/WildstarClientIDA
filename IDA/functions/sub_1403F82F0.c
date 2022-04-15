#include "../winhttp.h"

//----- (00000001403F82F0) ----------------------------------------------------
__int64 __fastcall sub_1403F82F0(__int64 a1, int a2, __int64* a3, _WORD* a4, unsigned int a5, __int64* a6, __int64 a7)
{
	unsigned int v7; // r10d
	__int64 v12; // r11
	__int64* v13; // rcx
	int** v14; // r14
	__int64 v15; // rcx
	int v16; // ebx
	__int64 v17; // rdx
	int* v18; // rax
	int* v19; // r8
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	int* v26; // rbp
	int* v27; // rdi
	__int64 v28; // rbx
	unsigned __int64 v29; // rbx
	__int64 v30; // r8
	__int64 v31; // [rsp+30h] [rbp-48h] BYREF
	__int64 v32; // [rsp+38h] [rbp-40h]
	__int64 v33; // [rsp+40h] [rbp-38h]

	v7 = *(_DWORD*)a3;
	if (!*(_DWORD*)a3)
		return 0i64;
	v12 = a3[1];
	if (!v12)
		return 0i64;
	v13 = *(__int64**)(*(_QWORD*)(a1 + 26600)
		+ 8
		* ((a3[1] & 0xFFFFFF | ((unsigned __int64)v7 << 48))
			% ((__int64)(*(_QWORD*)(a1 + 26608) - *(_QWORD*)(a1 + 26600)) >> 3)));
	if (!v13)
	{
	LABEL_7:
		if (*a6 || a6[1])
		{
			v14 = (int**)(a1 + 26632);
			v15 = *(_QWORD*)(a1 + 26632);
			v16 = 1;
			if (v15)
			{
				while (1)
				{
					v17 = *(_QWORD*)(v15 + 24);
					if (*(_QWORD*)v15 != *a6 || *(_QWORD*)(v15 + 8) != a6[1])
						goto LABEL_15;
					if (*(_DWORD*)(v15 + 32) == v7)
						break;
				LABEL_18:
					v15 = *(_QWORD*)(v15 + 24);
					if (!v17)
						goto LABEL_19;
				}
				if (*(_QWORD*)(v15 + 40) == v12 && *(_QWORD*)(v15 + 48) == a7)
					return 0i64;
			LABEL_15:
				if (*(_DWORD*)(v15 + 32) == v7 && *(_QWORD*)(v15 + 40) == v12)
					v16 = 0;
				goto LABEL_18;
			}
		LABEL_19:
			v18 = sub_14018B280(64i64, 0);
			v19 = v18;
			if (v18)
			{
				v20 = a6[1];
				v21 = *a6;
				*((_QWORD*)v18 + 2) = 0i64;
				*((_QWORD*)v18 + 3) = 0i64;
				v18[8] = 0;
				*((_QWORD*)v18 + 5) = 0i64;
				v18[14] = a2;
				*((_QWORD*)v18 + 1) = v20;
				*(_QWORD*)v18 = v21;
				*((_QWORD*)v18 + 4) = *a3;
				v22 = a3[1];
				*((_QWORD*)v19 + 6) = a7;
				*((_QWORD*)v19 + 5) = v22;
				if (!*((_QWORD*)v19 + 2))
				{
					*((_QWORD*)v19 + 2) = v14;
					*((_QWORD*)v19 + 3) = *v14;
					*v14 = v19;
					v23 = *((_QWORD*)v19 + 3);
					if (v23)
						*(_QWORD*)(v23 + 16) = v19 + 6;
				}
			}
			if (v16)
			{
				if ((*(_BYTE*)(a1 + 31560) & 0x10) != 0)
				{
					v31 = 0i64;
					v32 = 0i64;
					v33 = 0i64;
					v24 = *a3;
					LODWORD(v31) = a2;
					v32 = v24;
					v33 = a3[1];
					sub_1403F4740(a1, 0x597u, (__int64)&v31);
				}
			}
		}
		return 0i64;
	}
	while (*((_DWORD*)v13 + 2) != v7 || v13[2] != v12)
	{
		v13 = (__int64*)*v13;
		if (!v13)
			goto LABEL_7;
	}
	v26 = (int*)v13[4];
	v27 = 0i64;
	v28 = (v13[5] - (__int64)v26) >> 1;
	if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v27 = sub_14018B280(2 * (v28 + 1), 0);
	v29 = 2 * v28;
	sub_1407DB590(v27, v26, v29);
	if ((int*)((char*)v27 + v29))
		*(_WORD*)((char*)v27 + v29) = 0;
	if ((unsigned __int64)a5 - 1 > 0x7FFFFFFE)
	{
		if (a5)
			*a4 = 0;
	}
	else
	{
		sub_14001B680(a4, a5, v30, (__int64)v27);
	}
	if (v27)
		sub_14018B900((__int64)v27, 0);
	return 1i64;
}
// 1403F84DD: conditional instruction was optimized away because rcx.8!=0
// 1403F854D: variable 'v30' is possibly undefined

