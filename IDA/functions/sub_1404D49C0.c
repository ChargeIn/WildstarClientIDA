#include "../winhttp.h"

//----- (00000001404D49C0) ----------------------------------------------------
__int64 __fastcall sub_1404D49C0(__int64 a1, unsigned __int16 a2, int a3)
{
	__int64 v5; // rdi
	__int64 v6; // r10
	unsigned int v7; // eax
	__int64 v8; // rcx
	int v9; // r9d
	int v10; // r8d
	int v11; // [rsp+20h] [rbp+18h]
	__int64 v12; // [rsp+28h] [rbp+20h]

	if (a3 == -1)
		return a1;
	v5 = *(_QWORD*)(a1 + 80);
	v6 = v5;
	v7 = a2 | v11 & 0xFC000000 | ((unsigned __int8)a3 << 16) | ((*(_DWORD*)(*(_QWORD*)(a1 + 48) + 28i64) & 3) << 24);
	v8 = *(_QWORD*)(v5 + 8);
	while (v8)
	{
		v9 = *(_DWORD*)(v8 + 32);
		if ((unsigned __int16)v9 < (unsigned int)(unsigned __int16)v7
			|| *(_BYTE*)(v8 + 34) < BYTE2(v7)
			|| (int)((v9 & 0xFF000000) << 6) < (int)((v7 & 0xFF000000) << 6))
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v6 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v6 == v5
		|| (v10 = *(_DWORD*)(v6 + 32), (unsigned __int16)v7 < (unsigned __int16)v10)
		|| BYTE2(v7) < *(_BYTE*)(v6 + 34)
		|| (v12 = v6, (int)((v7 & 0xFF000000) << 6) < (int)((v10 & 0xFF000000) << 6)))
	{
		v12 = v5;
	}
	if (v12 == *(_QWORD*)(a1 + 80))
		return a1;
	else
		return *(_QWORD*)(v12 + 40);
}

