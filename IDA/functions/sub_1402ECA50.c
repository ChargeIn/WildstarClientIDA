#include "../winhttp.h"

//----- (00000001402ECA50) ----------------------------------------------------
int* __fastcall sub_1402ECA50(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r10
	int v5; // esi
	unsigned __int16* v6; // r8
	__int64 v7; // r9
	int v8; // eax
	__int64 v9; // rbp
	__int64 v10; // rbx
	unsigned int v11; // esi
	__int64 v12; // rax
	__int64 v13; // r11
	__int64 v14; // rax
	__int64 v15; // r8
	unsigned int v16; // r9d
	_WORD* v17; // rdx
	_WORD* i; // r8
	__int64 v20; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	int* v23; // rdi
	__int64 v24; // rax
	_QWORD* v25; // rcx
	_QWORD* m; // rax
	_QWORD* v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rbx
	int* v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34[7]; // [rsp+20h] [rbp-38h] BYREF
	_QWORD* v35; // [rsp+60h] [rbp+8h] BYREF
	int* v36; // [rsp+68h] [rbp+10h] BYREF

	v2 = *a2;
	v5 = 0;
	if ((_DWORD)v2)
	{
		v6 = (unsigned __int16*)*((_QWORD*)a2 + 1);
		v7 = (unsigned int)v2;
		do
		{
			v8 = *v6;
			v6 += 56;
			v5 += v8;
			--v7;
		} while (v7);
	}
	v9 = a1 + 2288;
	v10 = *(_QWORD*)(a1 + 2296);
	v11 = v2 + (v5 << 13);
	v12 = *(_QWORD*)(v10 + 8);
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < v11)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v10 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	v13 = *(_QWORD*)(a1 + 2296);
	v14 = v10;
	if (v10 != v13)
	{
		while (*(_DWORD*)(v14 + 32) == v11)
		{
			v15 = *(_QWORD*)(v14 + 40);
			if (*(_QWORD*)(v15 + 16) == v2)
			{
				v16 = 0;
				if (!(_DWORD)v2)
					return *(int**)(v14 + 40);
				v17 = (_WORD*)*((_QWORD*)a2 + 1);
				for (i = *(_WORD**)(v15 + 8); *v17 == *i; ++i)
				{
					++v16;
					v17 += 56;
					if (v16 >= (unsigned int)v2)
						return *(int**)(v14 + 40);
				}
			}
			v20 = *(_QWORD*)(v14 + 24);
			if (v20)
			{
				v14 = *(_QWORD*)(v14 + 24);
				for (j = *(_QWORD*)(v20 + 16); j; j = *(_QWORD*)(j + 16))
					v14 = j;
			}
			else
			{
				for (k = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
					v14 = k;
				if (*(_QWORD*)(v14 + 24) != k)
					v14 = k;
			}
			if (v14 == v13)
				break;
		}
	}
	v23 = sub_14018B280(88i64, 0);
	if (v23)
	{
		*(_QWORD*)v23 = off_140B63918;
		*((_QWORD*)v23 + 2) = 0i64;
		*((_QWORD*)v23 + 1) = 0i64;
		v23[6] = 0;
		*((_WORD*)v23 + 14) = 0;
		v23[8] = 0;
		*((_QWORD*)v23 + 5) = 0i64;
		*((_QWORD*)v23 + 6) = 0i64;
		v23[16] = 0;
		*((_QWORD*)v23 + 9) = 0i64;
		*((_QWORD*)v23 + 10) = 0i64;
	}
	else
	{
		v23 = 0i64;
	}
	sub_1402EA0B0((__int64)v23, a1, (__int64)a2, v11);
	v24 = *(_QWORD*)(a1 + 2296);
	if (v10 == v24 || v10 == *(_QWORD*)(v24 + 16))
	{
		v28 = *(_QWORD*)(v9 + 8);
		LODWORD(v34[0]) = v11;
		v29 = *(_QWORD*)(v28 + 8);
		v30 = v28;
		while (v29)
		{
			v30 = v29;
			if (v11 >= *(_DWORD*)(v29 + 32))
				v29 = *(_QWORD*)(v29 + 24);
			else
				v29 = *(_QWORD*)(v29 + 16);
		}
		if (v30 == v28 || v11 < *(_DWORD*)(v30 + 32))
		{
			v31 = sub_14018B280(48i64, 0);
			if (v31 != (int*)-32i64)
			{
				*((_QWORD*)v31 + 4) = v34[0];
				*((_QWORD*)v31 + 5) = v23;
			}
			*(_QWORD*)(v30 + 16) = v31;
			v33 = *(_QWORD*)(v9 + 8);
			if (v30 == v33)
			{
				*(_QWORD*)(v33 + 8) = v31;
				*(_QWORD*)(*(_QWORD*)(v9 + 8) + 24i64) = v31;
			}
			else if (v30 == *(_QWORD*)(v33 + 16))
			{
				*(_QWORD*)(v33 + 16) = v31;
			}
		}
		else
		{
			v31 = sub_14018B280(48i64, 0);
			if (v31 != (int*)-32i64)
			{
				*((_QWORD*)v31 + 4) = v34[0];
				*((_QWORD*)v31 + 5) = v23;
			}
			*(_QWORD*)(v30 + 24) = v31;
			v32 = *(_QWORD*)(v9 + 8);
			if (v30 == *(_QWORD*)(v32 + 24))
				*(_QWORD*)(v32 + 24) = v31;
		}
		*((_QWORD*)v31 + 1) = v30;
		*((_QWORD*)v31 + 2) = 0i64;
		*((_QWORD*)v31 + 3) = 0i64;
		sub_1400081C0((__int64)v31, (_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64));
		++* (_QWORD*)(v9 + 16);
	}
	else
	{
		LODWORD(v34[0]) = v11;
		v34[1] = (__int64)v23;
		if (*(_BYTE*)v10 || *(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64) != v10)
		{
			v25 = *(_QWORD**)(v10 + 16);
			if (v25)
			{
				for (m = (_QWORD*)v25[3]; m; m = (_QWORD*)m[3])
					v25 = m;
			}
			else
			{
				v25 = *(_QWORD**)(v10 + 8);
				if (v10 == v25[2])
				{
					do
					{
						v27 = v25;
						v25 = (_QWORD*)v25[1];
					} while (v27 == (_QWORD*)v25[2]);
				}
			}
		}
		else
		{
			v25 = *(_QWORD**)(v10 + 24);
		}
		v35 = v25;
		sub_1402ED850(v9, &v36, (__int64*)&v35, v34);
	}
	return v23;
}
// 1402ECCB1: conditional instruction was optimized away because rax.8==0
// 140B63918: using guessed type __int64 (__fastcall *off_140B63918[2])();

