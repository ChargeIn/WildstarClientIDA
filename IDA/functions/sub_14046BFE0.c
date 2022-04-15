#include "../winhttp.h"

//----- (000000014046BFE0) ----------------------------------------------------
void __fastcall sub_14046BFE0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // rbp
	__int64 v5; // r10
	__int64 v6; // rax
	__int64 v7; // r9
	int* v8; // rbx
	_DWORD* v9; // rdi
	int* v10; // rax
	float v11; // xmm0_4
	float v12; // xmm1_4
	__int64 v13; // rcx
	float v14; // xmm1_4
	int v15; // edx
	__int64 v16; // rax
	unsigned int v17; // [rsp+50h] [rbp+18h] BYREF
	__int64 v18; // [rsp+58h] [rbp+20h]

	if (a3 < 0x46)
	{
		v17 = a3;
		v3 = a1 + 5816;
		v5 = *(_QWORD*)(a1 + 5824);
		v6 = *(_QWORD*)(v5 + 8);
		v7 = v5;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a3)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v7 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v7 == v5 || (v18 = v7, a3 < *(_DWORD*)(v7 + 32)))
			v18 = v5;
		if (v18 == *(_QWORD*)(a1 + 5824) || (v8 = *(int**)(v18 + 40)) == 0i64)
		{
			v9 = (_DWORD*)sub_140217880(a3);
			if (!v9)
				return;
			v10 = sub_14018B280(40i64, 0);
			v8 = v10;
			if (v10)
			{
				*(_QWORD*)v10 = 0i64;
				*((_QWORD*)v10 + 1) = 0i64;
				v10[5] = 1065353216;
				v10[6] = 1065353216;
				v10[7] = 1065353216;
				v10[8] = 1065353216;
			}
			else
			{
				v8 = 0i64;
			}
			v8[5] = 1065353216;
			v8[4] = v9[2];
			v8[7] = v9[4];
			v8[8] = v9[3];
			*(_QWORD*)sub_140055BE0(v3, &v17) = v8;
		}
		v11 = *((float*)v8 + 7);
		v12 = *((float*)v8 + 8);
		v13 = *(_QWORD*)v8;
		++v8[2];
		v14 = v12 * *((float*)v8 + 4);
		*((float*)v8 + 6) = v11 * *((float*)v8 + 6);
		for (*((float*)v8 + 4) = v14; v13; v13 = *(_QWORD*)(v13 + 24))
		{
			++* (_DWORD*)(v13 + 1480);
			v15 = v8[2];
			if (v15)
				*(float*)(v13 + 1488) = (float)((float)*(int*)(v13 + 1480) * 6.2831855) / (float)v15;
			else
				*(_DWORD*)(v13 + 1488) = 0;
		}
		if (!*(_QWORD*)(a2 + 16))
		{
			*(_QWORD*)(a2 + 16) = v8;
			*(_QWORD*)(a2 + 24) = *(_QWORD*)v8;
			*(_QWORD*)v8 = a2;
			v16 = *(_QWORD*)(a2 + 24);
			if (v16)
				*(_QWORD*)(v16 + 16) = a2 + 24;
		}
	}
}

