#include "../winhttp.h"

//----- (00000001405F30A0) ----------------------------------------------------
__int64 __fastcall sub_1405F30A0(unsigned int* a1, __int64 a2)
{
	__int64 v2; // r12
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned __int64 v7; // rsi
	unsigned __int64 v8; // r13
	int* v9; // r14
	int v10; // edi
	int* v11; // rax
	int* v12; // r12
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	unsigned int v16; // eax
	__int64 v17; // rbx
	__int64 v18; // rax
	unsigned int k; // edi
	__int64 v20; // rdx
	__int64 v21; // rbx
	__int64 v22; // rcx
	__int64 v23; // rbx
	_QWORD* v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rax
	int v27; // eax
	__int64 v28; // rcx
	__int64 v29; // r15
	__int64 v30; // rdi
	__int64 v31; // rbx
	_QWORD* v32; // rcx
	__int64 v34; // [rsp+70h] [rbp-90h] BYREF
	__int64 v35; // [rsp+78h] [rbp-88h]
	_DWORD v36[48]; // [rsp+90h] [rbp-70h] BYREF

	v2 = a2;
	if (!(*(unsigned int(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 104i64))(a1))
		return 2147500037i64;
	v5 = *((_QWORD*)a1 + 12);
	v6 = *(_QWORD*)(v5 + 16);
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	if (v6 != v5)
	{
		do
		{
			if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 104i64))(*(_QWORD*)(v6 + 40)))
			{
				v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 344i64))(*(_QWORD*)(v6 + 40));
				v11 = sub_14018DB00((__int64)v9, v8 + 1, 4i64);
				v11[v8] = v10;
				v12 = v11;
				if (v9 != v11)
				{
					sub_1407DB590(v11, v9, 4 * v8);
					if (v9)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
					v9 = v12;
				}
				++v8;
			}
			v13 = *(_QWORD*)(v6 + 24);
			if (v13)
			{
				v6 = *(_QWORD*)(v6 + 24);
				for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
					v6 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = j;
				if (*(_QWORD*)(v6 + 24) != j)
					v6 = j;
			}
		} while (v6 != *((_QWORD*)a1 + 12));
		v2 = a2;
	}
	v16 = *(_DWORD*)(v2 + 4);
	a1[117] = 1;
	a1[116] = v16;
	if ((*(unsigned int(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 176i64))(a1))
	{
		v17 = *(_QWORD*)(qword_140C65898 + 29504);
		v18 = (*(__int64(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 24i64))(a1);
		sub_14042D230(v17, v18, v2, a1[46]);
	}
	(*(void(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 16i64))(a1);
	for (k = 0; k < *(_DWORD*)(v2 + 48); ++k)
	{
		v20 = *(_QWORD*)(v2 + 56);
		v36[1] = dword_140C636A8;
		v36[3] = dword_140C636A8;
		v36[5] = dword_140C636A8;
		v36[7] = dword_140C636A8;
		v36[9] = dword_140C636A8;
		v36[11] = dword_140C636A8;
		v36[13] = dword_140C636A8;
		v36[15] = dword_140C636A8;
		v36[17] = dword_140C636A8;
		v36[19] = dword_140C636A8;
		v36[21] = dword_140C636A8;
		v36[23] = dword_140C636A8;
		v36[25] = dword_140C636A8;
		v36[27] = dword_140C636A8;
		v36[29] = dword_140C636A8;
		v36[31] = dword_140C636A8;
		v36[33] = dword_140C636A8;
		v36[35] = dword_140C636A8;
		v36[37] = dword_140C636A8;
		v36[39] = dword_140C636A8;
		v36[41] = dword_140C636A8;
		v36[43] = dword_140C636A8;
		v36[45] = dword_140C636A8;
		v36[47] = dword_140C636A8;
		v36[0] = 0;
		v36[2] = 0;
		v36[4] = 0;
		v21 = 48i64 * k;
		v36[6] = 0;
		v36[8] = 0;
		v36[10] = 0;
		v36[12] = 0;
		v36[14] = 0;
		v36[16] = 0;
		v36[18] = 0;
		v36[20] = 0;
		v36[22] = 0;
		v36[24] = 0;
		v36[26] = 0;
		v36[28] = 0;
		v36[30] = 0;
		v36[32] = 0;
		v36[34] = 0;
		v36[36] = 0;
		v36[38] = 0;
		v36[40] = 0;
		v36[42] = 0;
		v36[44] = 0;
		v36[46] = 0;
		sub_1405F8C40((__int64)v36, v21 + v20 + 32);
		sub_1405F1540(&v34, (__int64*)(v21 + *(_QWORD*)(v2 + 56) + 8i64));
		sub_1400035B0();
		if (v35)
			sub_14018B900(v35, 0);
	}
	v22 = *(_QWORD*)(qword_140C65920 + 8);
	if (v22)
	{
		do
		{
			v23 = *(_QWORD*)(v22 + 32);
			if (*(_DWORD*)(v22 + 56) == 3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
			v22 = v23;
		} while (v23);
	}
	v24 = (_QWORD*)*((_QWORD*)a1 + 1);
	a1[6] = 0;
	if (v24)
		*v24 = *((_QWORD*)a1 + 2);
	v25 = *((_QWORD*)a1 + 2);
	if (v25)
		*(_QWORD*)(v25 + 8) = *((_QWORD*)a1 + 1);
	v26 = *(_QWORD*)a1;
	*((_QWORD*)a1 + 1) = 0i64;
	*((_QWORD*)a1 + 2) = 0i64;
	a1[117] = 0;
	v27 = (*(__int64(__fastcall**)(unsigned int*))(v26 + 16))(a1);
	sub_1405F62C0(v28, v27);
	v29 = (__int64)(a1 + 50);
	if (*(_QWORD*)(v29 + 16))
	{
		v30 = *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8i64);
		if (v30)
		{
			do
			{
				sub_1400083B0(v29, *(_QWORD*)(v30 + 24));
				v31 = *(_QWORD*)(v30 + 16);
				sub_14018B900(v30, 0);
				v30 = v31;
			} while (v31);
		}
		*(_QWORD*)(*(_QWORD*)(v29 + 8) + 16i64) = *(_QWORD*)(v29 + 8);
		*(_QWORD*)(*(_QWORD*)(v29 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v29 + 8) + 24i64) = *(_QWORD*)(v29 + 8);
		*(_QWORD*)(v29 + 16) = 0i64;
	}
	v32 = (_QWORD*)qword_140C65BA8;
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	sub_1405F9E30(v32, (__int64)(v32 + 36), *(_DWORD*)v2);
	if (v8)
	{
		do
			sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 320, v9[v7++]);
		while (v7 < v8);
	}
	if (v9)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
	return 0i64;
}
// 1405F3407: variable 'v28' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

