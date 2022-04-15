#include "../winhttp.h"

//----- (000000014087CD40) ----------------------------------------------------
__int64 __fastcall sub_14087CD40(__int64 a1, __int64 a2, int a3, __int16* a4)
{
	unsigned int v4; // esi
	unsigned int v5; // r11d
	__int64 v6; // r10
	unsigned int v7; // ebp
	unsigned int v9; // r12d
	__int64 v10; // r9
	int v11; // edi
	__int16* v12; // r14
	unsigned int v13; // r13d
	__int64 v14; // r8
	unsigned int v15; // ecx
	int v16; // edx
	int v17; // r10d
	int v18; // edx
	int v19; // eax
	unsigned int v20; // r15d
	unsigned int i; // r10d
	int v22; // edx
	int v23; // eax
	int v24; // eax
	__int64 v25; // rdx
	unsigned int v26; // ecx

	v4 = *((_DWORD*)a4 + 9);
	v5 = *((_DWORD*)a4 + 8);
	v6 = *((unsigned int*)a4 + 7);
	v7 = *(unsigned __int16*)(a1 + 18);
	v9 = a3 - v6;
	v10 = HIWORD(v5);
	v11 = (unsigned __int16)v5;
	v12 = (__int16*)(*(_QWORD*)a1 + 2i64 * *((unsigned int*)a4 + 6));
	v13 = (v4 - v5 + 0xFFFF) / v4;
	v14 = *(_QWORD*)a2 + 4 * v6;
	if (v9 < v13)
		v13 = v9;
	v15 = v13;
	if (v13)
	{
		v16 = *a4;
		v17 = *v12 - v16;
		v18 = v16 << 16;
		do
		{
			v5 += v4;
			v14 += 4i64;
			v19 = v18 + v11 * v17;
			v10 = HIWORD(v5);
			v11 = (unsigned __int16)v5;
			*(float*)(v14 - 4) = (float)v19 * 4.6566129e-10;
			--v15;
		} while (v15);
	}
	v20 = (v4 + (v7 << 16) - v5 - 1) / v4;
	if (v9 - v13 < v20)
		v20 = v9 - v13;
	for (i = v20; i; --i)
	{
		v22 = v12[v10 - 1];
		v5 += v4;
		v14 += 4i64;
		v23 = v12[(unsigned int)(v10 + 1) - 1] - v22;
		v10 = HIWORD(v5);
		v24 = v11 * v23;
		v11 = (unsigned __int16)v5;
		*(float*)(v14 - 4) = (float)((v22 << 16) + v24) * 4.6566129e-10;
	}
	v25 = v7;
	if ((unsigned int)v10 < v7)
		v25 = (unsigned int)v10;
	if ((_DWORD)v25)
		*a4 = v12[v25 - 1];
	v26 = v20 + v13;
	*((_DWORD*)a4 + 8) = v5 - ((_DWORD)v25 << 16);
	*(_WORD*)(a1 + 18) -= v25;
	*(_WORD*)(a2 + 18) = a4[14] + v20 + v13;
	if ((_DWORD)v25 == v7)
		*((_DWORD*)a4 + 6) = 0;
	else
		*((_DWORD*)a4 + 6) += v25;
	if (v26 == v9)
		return 45i64;
	*((_DWORD*)a4 + 7) += v26;
	return 43i64;
}

