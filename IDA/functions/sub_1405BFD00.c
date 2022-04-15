#include "../winhttp.h"

//----- (00000001405BFD00) ----------------------------------------------------
__int64 __fastcall sub_1405BFD00(__int64 a1, unsigned __int16 a2, char a3, unsigned __int8 a4, unsigned int a5)
{
	unsigned int v5; // r10d
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rdi
	__int64 v16; // r11
	unsigned int v17; // eax
	__int64 v18; // rdx
	int v19; // r10d
	int v20; // r9d
	__int64 v22; // [rsp+30h] [rbp+8h]
	__int64 v23; // [rsp+30h] [rbp+8h]

	v5 = a5;
	if (a5 == -1)
	{
		v10 = sub_140200220(0x95Au);
		if (v10)
			v5 = *(_DWORD*)(v10 + 4);
		else
			v5 = 1;
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = v11;
	v13 = *(_QWORD*)(v11 + 8);
	while (v13)
	{
		if (*(_DWORD*)(v13 + 32) < v5)
		{
			v13 = *(_QWORD*)(v13 + 24);
		}
		else
		{
			v12 = v13;
			v13 = *(_QWORD*)(v13 + 16);
		}
	}
	if (v12 == v11 || (v22 = v12, v5 < *(_DWORD*)(v12 + 32)))
		v22 = *(_QWORD*)(a1 + 8);
	if (v22 == v11)
		return 0i64;
	v14 = ((a3 & 3) << 24) | (a4 << 16);
	v15 = *(_QWORD*)(v22 + 48);
	v16 = v15;
	v17 = a2 | a5 & 0xFC000000 | v14;
	v18 = *(_QWORD*)(v15 + 8);
	while (v18)
	{
		v19 = *(_DWORD*)(v18 + 32);
		if ((unsigned __int16)v19 < (unsigned int)(unsigned __int16)v17
			|| *(_BYTE*)(v18 + 34) < BYTE2(v17)
			|| (int)((v19 & 0xFF000000) << 6) < (int)((v17 & 0xFF000000) << 6))
		{
			v18 = *(_QWORD*)(v18 + 24);
		}
		else
		{
			v16 = v18;
			v18 = *(_QWORD*)(v18 + 16);
		}
	}
	if (v16 == v15
		|| (v20 = *(_DWORD*)(v16 + 32), (unsigned __int16)v17 < (unsigned __int16)v20)
		|| BYTE2(v17) < *(_BYTE*)(v16 + 34)
		|| (v23 = v16, (int)((v17 & 0xFF000000) << 6) < (int)((v20 & 0xFF000000) << 6)))
	{
		v23 = v15;
	}
	if (v23 == v15)
		return 0i64;
	else
		return v23 + 36;
}

