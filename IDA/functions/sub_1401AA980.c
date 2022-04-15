#include "../winhttp.h"

//----- (00000001401AA980) ----------------------------------------------------
__int64 __fastcall sub_1401AA980(__int64 a1, int a2)
{
	int v2; // r12d
	unsigned __int8* v5; // r14
	unsigned int v6; // eax
	__int64 v7; // rcx
	bool v8; // zf
	unsigned int v9; // eax
	unsigned int v10; // r8d
	unsigned __int8* v11; // rdx
	__int64 v12; // rbp
	__int64 v13; // rsi
	unsigned int v14; // r15d
	int v15; // ecx
	unsigned int v16; // r8d
	unsigned __int8* v17; // rdx
	__int64 v18; // rbp
	__int64 v19; // rsi
	unsigned int v20; // r15d
	__int64 v22; // rax
	unsigned __int8* v23; // rdx
	__int64 v24; // rcx
	int v25; // r8d
	__int64 v26; // rcx

	v2 = 0xFFFF;
	if ((unsigned int)(*(_DWORD*)(a1 + 24) - 5) < 0xFFFF)
		v2 = *(_DWORD*)(a1 + 24) - 5;
	v5 = 0i64;
	while (1)
	{
		v6 = *(_DWORD*)(a1 + 156);
		if (v6 <= 1)
		{
			sub_1401AA730(a1);
			v6 = *(_DWORD*)(a1 + 156);
			if (!v6)
				break;
		}
		v7 = *(unsigned int*)(a1 + 132);
		v8 = v6 + *(_DWORD*)(a1 + 148) == 0;
		*(_DWORD*)(a1 + 148) += v6;
		v9 = *(_DWORD*)(a1 + 148);
		v10 = v7 + v2;
		*(_DWORD*)(a1 + 156) = 0;
		if (!v8 && v9 < v10)
			goto LABEL_41;
		*(_DWORD*)(a1 + 148) = v10;
		*(_DWORD*)(a1 + 156) = v9 - v10;
		if ((int)v7 < 0)
			v11 = 0i64;
		else
			v11 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + v7);
		sub_1401CCB30(a1, v11, v2, 0);
		v12 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
		v13 = *(_QWORD*)(v12 + 40);
		sub_1401CD200(v13);
		v14 = *(_DWORD*)(v13 + 40);
		if (v14 > *(_DWORD*)(v12 + 24))
			v14 = *(_DWORD*)(v12 + 24);
		if (v14)
		{
			sub_1407DB590(*(int**)(v12 + 16), *(int**)(v13 + 32), v14);
			*(_QWORD*)(v12 + 16) += v14;
			*(_QWORD*)(v13 + 32) += v14;
			*(_DWORD*)(v12 + 28) += v14;
			*(_DWORD*)(v12 + 24) -= v14;
			v8 = *(_DWORD*)(v13 + 40) == v14;
			*(_DWORD*)(v13 + 40) -= v14;
			if (v8)
				*(_QWORD*)(v13 + 32) = *(_QWORD*)(v13 + 16);
		}
		if (*(_DWORD*)(*(_QWORD*)a1 + 24i64))
		{
		LABEL_41:
			v15 = *(_DWORD*)(a1 + 132);
			v16 = *(_DWORD*)(a1 + 148) - v15;
			if (v16 < *(_DWORD*)(a1 + 68) - 262)
				continue;
			if (v15 < 0)
				v17 = 0i64;
			else
				v17 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v15);
			sub_1401CCB30(a1, v17, v16, 0);
			v18 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
			v19 = *(_QWORD*)(v18 + 40);
			sub_1401CD200(v19);
			v20 = *(_DWORD*)(v19 + 40);
			if (v20 > *(_DWORD*)(v18 + 24))
				v20 = *(_DWORD*)(v18 + 24);
			if (v20)
			{
				sub_1407DB590(*(int**)(v18 + 16), *(int**)(v19 + 32), v20);
				*(_QWORD*)(v18 + 16) += v20;
				*(_QWORD*)(v19 + 32) += v20;
				*(_DWORD*)(v18 + 28) += v20;
				*(_DWORD*)(v18 + 24) -= v20;
				v8 = *(_DWORD*)(v19 + 40) == v20;
				*(_DWORD*)(v19 + 40) -= v20;
				if (v8)
					*(_QWORD*)(v19 + 32) = *(_QWORD*)(v19 + 16);
			}
			if (*(_DWORD*)(*(_QWORD*)a1 + 24i64))
				continue;
		}
		return 0i64;
	}
	if (!a2)
		return 0i64;
	v22 = *(unsigned int*)(a1 + 132);
	*(_DWORD*)(a1 + 5900) = 0;
	if (a2 != 4)
	{
		v25 = *(_DWORD*)(a1 + 148);
		if (v25 <= (int)v22)
			return 1i64;
		if ((int)v22 >= 0)
			v5 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + v22);
		sub_1401CCB30(a1, v5, v25 - v22, 0);
		v26 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
		sub_1401A9A10(v26);
		return *(_DWORD*)(*(_QWORD*)a1 + 24i64) != 0;
	}
	if ((int)v22 < 0)
		v23 = 0i64;
	else
		v23 = (unsigned __int8*)(*(_QWORD*)(a1 + 80) + (unsigned int)v22);
	sub_1401CCB30(a1, v23, *(_DWORD*)(a1 + 148) - v22, 1);
	v24 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a1 + 148);
	sub_1401A9A10(v24);
	LOBYTE(v5) = *(_DWORD*)(*(_QWORD*)a1 + 24i64) != 0;
	return (unsigned int)((_DWORD)v5 + 2);
}

