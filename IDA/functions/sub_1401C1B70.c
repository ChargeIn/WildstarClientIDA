#include "../winhttp.h"

//----- (00000001401C1B70) ----------------------------------------------------
__int64 __fastcall sub_1401C1B70(__int64 a1, __int64 a2, __int64 a3, int** a4)
{
	__int64 v5; // r12
	__int64 result; // rax
	__int64 v9; // rbp
	unsigned int v10; // esi
	__int64 v11; // rcx
	__int64 v12; // r12
	__int64 v13; // rbx
	__int64 v14; // r14
	int v15; // eax
	unsigned int v16; // ecx
	__int64* v17; // r10
	__int64 v18; // rbp
	__int64 v19; // r9
	unsigned int v20; // ecx
	__int64 v21; // rbx
	int v22; // eax
	int* v23; // rax
	int* v24; // rdx
	_QWORD* v25; // rbx
	int* v26; // rax
	unsigned int v27; // [rsp+30h] [rbp-48h] BYREF
	int v28; // [rsp+34h] [rbp-44h] BYREF
	unsigned int v29; // [rsp+38h] [rbp-40h]
	int v30; // [rsp+80h] [rbp+8h] BYREF
	__int64 v31; // [rsp+90h] [rbp+18h]

	v31 = a3;
	v5 = a3;
	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	v9 = *(_QWORD*)(a1 + 80);
	v10 = 0;
	if (!(_DWORD)v9)
	{
	LABEL_11:
		v16 = *(_DWORD*)(a1 + 44);
		v17 = *(__int64**)(a1 + 8);
		v18 = *(_QWORD*)(a1 + 64);
		v30 = *(_DWORD*)(a1 + 48);
		v27 = v16 + 1;
		v19 = *v17;
		v28 = v18;
		v29 = v10;
		v20 = ((HIWORD(v16) | v16) >> 8) | HIWORD(v16) | v16;
		result = (*(__int64(__fastcall**)(__int64*, int*, __int64))(v19 + 48))(
			v17,
			&v30,
			32i64
			* (((((v20 >> 4) | v20) >> 2) | (v20 >> 4) | v20 | (((((v20 >> 4) | v20) >> 2) | (v20 >> 4) | v20) >> 1))
				+ 1));
		if ((int)result < 0)
			return result;
		if (*(_DWORD*)(a1 + 48) != v30)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, int*, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				12i64,
				&v30,
				4i64);
			if ((int)result < 0)
				return result;
			*(_DWORD*)(a1 + 48) = v30;
		}
		sub_1401C2DF0((__int64*)(a1 + 56), v27);
		v21 = 32i64 * (unsigned int)v18 + *(_QWORD*)(a1 + 56);
		*(_QWORD*)(v21 + 4) = *(_QWORD*)a2;
		*(_QWORD*)(v21 + 12) = *(_QWORD*)(a2 + 8);
		v22 = *(_DWORD*)(a2 + 16);
		*(_QWORD*)(v21 + 24) = v5;
		*(_DWORD*)(v21 + 20) = v22;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 40i64))(
			*(_QWORD*)(a1 + 8),
			v21,
			v5);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 48),
				32i64 * (unsigned int)v18,
				v21,
				32i64);
			if ((int)result >= 0)
			{
				if (*(_DWORD*)(a1 + 44) != v27)
				{
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, unsigned int*, __int64))(**(_QWORD**)(a1 + 8)
						+ 104i64))(
							*(_QWORD*)(a1 + 8),
							*(unsigned int*)(a1 + 32),
							8i64,
							&v27,
							4i64);
					if ((int)result < 0)
						return result;
					*(_DWORD*)(a1 + 44) = v27;
				}
				sub_1401C2E70((__int64*)(a1 + 72), v10, &v28);
				if (a4)
				{
					v23 = sub_14018B280(56i64, 0);
					v24 = v23;
					if (v23)
					{
						*(_QWORD*)v23 = off_140B5FD60;
						v23[12] = 1;
						*((_QWORD*)v23 + 1) = a1;
						*((_QWORD*)v23 + 2) = *(_QWORD*)v21;
						*((_QWORD*)v23 + 3) = *(_QWORD*)(v21 + 8);
						*((_QWORD*)v23 + 4) = *(_QWORD*)(v21 + 16);
						*((_QWORD*)v23 + 5) = *(_QWORD*)(v21 + 24);
					}
					else
					{
						v24 = 0i64;
					}
					*a4 = v24;
				}
				return 0i64;
			}
		}
		return result;
	}
	v11 = *(_QWORD*)(a1 + 72);
	v12 = *(_QWORD*)(a1 + 56);
	while (1)
	{
		v13 = v10 + (((unsigned int)v9 - v10) >> 1);
		v14 = *(unsigned int*)(v11 + 4 * v13);
		v15 = sub_1407E6AF0((unsigned __int64*)a2, v12 + 32i64 * (unsigned int)v14 + 4, 0x14ui64);
		if (v15 >= 0)
			break;
		LODWORD(v9) = v10 + (((unsigned int)v9 - v10) >> 1);
	LABEL_9:
		v11 = *(_QWORD*)(a1 + 72);
		if (v10 >= (unsigned int)v9)
		{
			v5 = v31;
			goto LABEL_11;
		}
	}
	if (v15 > 0)
	{
		v10 = v13 + 1;
		goto LABEL_9;
	}
	v29 = v10 + (((unsigned int)v9 - v10) >> 1);
	v28 = v14;
	v25 = (_QWORD*)(v12 + 32 * v14);
	if (v25[3] != v31)
		return 2684551171i64;
	if (a4)
	{
		v26 = sub_14018B280(56i64, 0);
		if (v26)
		{
			*(_QWORD*)v26 = off_140B5FD60;
			v26[12] = 1;
			*((_QWORD*)v26 + 1) = a1;
			*((_QWORD*)v26 + 2) = *v25;
			*((_QWORD*)v26 + 3) = v25[1];
			*((_QWORD*)v26 + 4) = v25[2];
			*((_QWORD*)v26 + 5) = v25[3];
			*a4 = v26;
			return 1i64;
		}
		*a4 = 0i64;
	}
	return 1i64;
}
// 140B5FD60: using guessed type __int64 (__fastcall *off_140B5FD60[20])();

