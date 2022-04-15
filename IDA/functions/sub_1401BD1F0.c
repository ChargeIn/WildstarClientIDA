#include "../winhttp.h"

//----- (00000001401BD1F0) ----------------------------------------------------
__int64 __fastcall sub_1401BD1F0(unsigned int* a1, __int64 a2)
{
	unsigned __int64 v2; // r12
	__int64 v3; // rbp
	__int64 v6; // rsi
	unsigned __int64 v7; // r14
	int* v8; // rax
	__int64 v9; // rdi
	int* v11; // rsi
	char* v12; // r11
	unsigned __int64 v13; // r10
	unsigned __int64 v14; // r8
	__int64 v15; // rdx
	__int64 v16; // r9
	__int64 v17; // rdx
	int v18; // esi

	v2 = *((_QWORD*)a1 + 6);
	v3 = 8i64 * *((_QWORD*)a1 + 2) + 8;
	v6 = v3 + 56i64 * *((_QWORD*)a1 + 4);
	v7 = v2 + v6;
	v8 = sub_14018B280(v2 + v6, 1u);
	v9 = (__int64)v8;
	if (!v8)
		return 2147942414i64;
	v11 = (int*)((char*)v8 + v6);
	v12 = (char*)v8 + v3;
	*v8 = a1[4];
	v13 = 0i64;
	v8[1] = a1[8];
	v14 = 0i64;
	if (*((_QWORD*)a1 + 2))
	{
		v15 = 0i64;
		do
		{
			++v14;
			v15 += 16i64;
			v8[2 * v14] = *(_DWORD*)(*((_QWORD*)a1 + 1) + v15 - 16) - a1[10];
			v8[2 * v14 + 1] = **(_DWORD**)(*((_QWORD*)a1 + 1) + v15 - 8);
		} while (v14 < *((_QWORD*)a1 + 2));
	}
	if (*((_QWORD*)a1 + 4))
	{
		v16 = 0i64;
		do
		{
			++v13;
			v16 += 56i64;
			*(_DWORD*)&v12[v16 - 56] = *(_DWORD*)(*((_QWORD*)a1 + 3) + v16 - 56) - a1[10];
			*(_DWORD*)&v12[v16 - 52] = *(_DWORD*)(*((_QWORD*)a1 + 3) + v16 - 4);
			*(_QWORD*)&v12[v16 - 48] = *(_QWORD*)(*((_QWORD*)a1 + 3) + v16 - 48);
			*(_QWORD*)&v12[v16 - 40] = *(_QWORD*)(*((_QWORD*)a1 + 3) + v16 - 40);
			*(_QWORD*)&v12[v16 - 32] = *(_QWORD*)(*((_QWORD*)a1 + 3) + v16 - 32);
			v17 = *((_QWORD*)a1 + 3);
			*(_QWORD*)&v12[v16 - 24] = *(_QWORD*)(v17 + v16 - 24);
			*(_QWORD*)&v12[v16 - 16] = *(_QWORD*)(v17 + v16 - 16);
			*(_DWORD*)&v12[v16 - 8] = *(_DWORD*)(v17 + v16 - 8);
		} while (v13 < *((_QWORD*)a1 + 4));
	}
	sub_1407DB590(v11, *((int**)a1 + 5), v2);
	v18 = (*(__int64(__fastcall**)(_QWORD, unsigned int*, unsigned __int64))(**(_QWORD**)(a2 + 40) + 48i64))(
		*(_QWORD*)(a2 + 40),
		a1,
		v7);
	if (v18 < 0
		|| (v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, unsigned __int64))(**(_QWORD**)(a2 + 40)
			+ 104i64))(
				*(_QWORD*)(a2 + 40),
				*a1,
				0i64,
				v9,
				v7),
			v18 < 0))
	{
		sub_14018B900(v9, 0);
		return (unsigned int)v18;
	}
	else
	{
		sub_14018B900(v9, 0);
		return 0i64;
	}
}

