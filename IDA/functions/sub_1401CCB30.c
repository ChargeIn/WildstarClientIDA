#include "../winhttp.h"

//----- (00000001401CCB30) ----------------------------------------------------
__int64 __fastcall sub_1401CCB30(__int64 a1, unsigned __int8* a2, int a3, int a4)
{
	int v5; // r9d
	int v9; // eax
	__int64 v10; // r10
	unsigned int v11; // ecx
	unsigned int v12; // edx
	int v13; // ecx
	__int64 v14; // rdx
	__int16 v15; // ax
	__int64 v16; // rcx
	int v17; // eax
	__int16 v18; // r8
	int v19; // eax
	int v20; // r8d
	int v21; // edx
	void* v22; // r8
	void* v23; // rdx
	int v24; // ecx
	__int64 v25; // rdx
	__int16 v26; // ax
	__int64 v27; // rcx
	int v28; // eax
	__int16 v29; // r8
	int v30; // eax
	__int64 result; // rax
	__int64 v32; // rcx

	v5 = 0;
	if (*(int*)(a1 + 172) <= 0)
	{
		v12 = a3 + 5;
	LABEL_7:
		v11 = v12;
		goto LABEL_8;
	}
	if (*(_DWORD*)(*(_QWORD*)a1 + 72i64) == 2)
	{
		v9 = sub_1401CD180((_WORD*)a1);
		*(_DWORD*)(v10 + 72) = v9;
	}
	sub_1401CBEC0((int*)a1, a1 + 2880);
	sub_1401CBEC0((int*)a1, a1 + 2904);
	v5 = sub_1401CC760(a1);
	v11 = (unsigned int)(*(_DWORD*)(a1 + 5888) + 10) >> 3;
	v12 = (unsigned int)(*(_DWORD*)(a1 + 5892) + 10) >> 3;
	if (v12 <= v11)
		goto LABEL_7;
LABEL_8:
	if (a3 + 4 <= v11 && a2)
	{
		sub_1401CCAA0(a1, a2, a3, a4);
	}
	else
	{
		if (*(_DWORD*)(a1 + 176) == 4 || v12 == v11)
		{
			v24 = *(_DWORD*)(a1 + 5908);
			if (v24 <= 13)
			{
				*(_WORD*)(a1 + 5904) |= ((_WORD)a4 + 2) << v24;
				v30 = v24 + 3;
			}
			else
			{
				v25 = *(unsigned int*)(a1 + 40);
				v26 = ((_WORD)a4 + 2) << v24;
				v27 = *(_QWORD*)(a1 + 16);
				*(_WORD*)(a1 + 5904) |= v26;
				*(_BYTE*)(v25 + v27) = *(_BYTE*)(a1 + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
				v28 = *(_DWORD*)(a1 + 5908);
				++* (_DWORD*)(a1 + 40);
				v29 = (unsigned __int16)(a4 + 2) >> (16 - v28);
				v30 = v28 - 13;
				*(_WORD*)(a1 + 5904) = v29;
			}
			*(_DWORD*)(a1 + 5908) = v30;
			v22 = &unk_140A48070;
			v23 = &unk_140A481D0;
		}
		else
		{
			v13 = *(_DWORD*)(a1 + 5908);
			if (v13 <= 13)
			{
				*(_WORD*)(a1 + 5904) |= ((_WORD)a4 + 4) << v13;
				v19 = v13 + 3;
			}
			else
			{
				v14 = *(unsigned int*)(a1 + 40);
				v15 = ((_WORD)a4 + 4) << v13;
				v16 = *(_QWORD*)(a1 + 16);
				*(_WORD*)(a1 + 5904) |= v15;
				*(_BYTE*)(v14 + v16) = *(_BYTE*)(a1 + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
				v17 = *(_DWORD*)(a1 + 5908);
				++* (_DWORD*)(a1 + 40);
				v18 = (unsigned __int16)(a4 + 4) >> (16 - v17);
				v19 = v17 - 13;
				*(_WORD*)(a1 + 5904) = v18;
			}
			v20 = *(_DWORD*)(a1 + 2912) + 1;
			v21 = *(_DWORD*)(a1 + 2888) + 1;
			*(_DWORD*)(a1 + 5908) = v19;
			sub_1401CC830(a1, v21, v20, v5 + 1);
			v22 = (void*)(a1 + 2480);
			v23 = (void*)(a1 + 188);
		}
		sub_1401CCD60(a1, (__int64)v23, (__int64)v22);
	}
	result = sub_1401CBA70(a1);
	if (a4)
		return sub_1401CD290(v32);
	return result;
}
// 1401CCB6B: variable 'v10' is possibly undefined
// 1401CCD37: variable 'v32' is possibly undefined

