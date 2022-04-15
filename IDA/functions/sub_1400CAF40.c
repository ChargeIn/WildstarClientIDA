#include "../winhttp.h"

//----- (00000001400CAF40) ----------------------------------------------------
char __fastcall sub_1400CAF40(__int64 a1, int a2, int a3, int a4)
{
	int v4; // ebp
	int v5; // edi
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax
	int v12; // ecx
	int v13; // eax
	__int64 v14; // rcx
	float v15; // xmm1_4

	v4 = 0;
	v5 = a2;
	if (a2 < 0)
		v5 = 0;
	if (sub_1400C6D90(a1))
	{
		v9 = *(_QWORD*)(a1 + 464);
		v10 = *(_DWORD*)(v9 + 1300);
		*(_DWORD*)(v9 + 1296) = v5;
		if (v10 < v5)
			v5 = v10;
		if (v5 > 0)
			v4 = v5;
		*(_BYTE*)(v9 + 1392) |= 0x10u;
		*(_DWORD*)(v9 + 1300) = v4;
	}
	if (sub_1400C6D90(a1))
	{
		v11 = *(_QWORD*)(a1 + 464);
		*(_BYTE*)(v11 + 1392) |= 0x10u;
		*(_DWORD*)(v11 + 1304) = a3;
	}
	if (sub_1400C6D90(a1))
	{
		v12 = 1;
		if (a4 > 1)
			v12 = a4;
		*(_DWORD*)(*(_QWORD*)(a1 + 464) + 1308i64) = v12;
	}
	LOBYTE(v13) = sub_1400C6D90(a1);
	if ((_BYTE)v13)
	{
		v14 = *(_QWORD*)(a1 + 464);
		v13 = 8 * a4;
		if (8 * a4 <= 0)
			v13 = 1;
		v15 = 1.0 / (float)v13;
		*(float*)(v14 + 816) = v15;
		*(float*)(v14 + 400) = v15;
	}
	return v13;
}

