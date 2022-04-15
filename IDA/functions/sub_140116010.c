#include "../winhttp.h"

//----- (0000000140116010) ----------------------------------------------------
char __fastcall sub_140116010(__int64 a1)
{
	__int64 v2; // rcx
	char result; // al
	__int64 v4; // rax
	int v5; // r12d
	int v6; // r13d
	int v7; // esi
	int v8; // r14d
	int v9; // ebx
	int v10; // ebp
	float* v11; // rax
	int v12; // edi
	__int64 v13; // rax
	float v14[4]; // [rsp+20h] [rbp-38h] BYREF
	int v15; // [rsp+60h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 656);
	result = (unsigned __int8)v2 >> 2;
	if ((v2 & 4) != 0 || (v2 & 2) != 0)
	{
		v4 = *(_QWORD*)(a1 + 472);
		v5 = 0;
		v15 = v4 ? *(_DWORD*)(v4 + 1300) : 0;
		v6 = v4 ? *(_DWORD*)(v4 + 1296) : 0;
		v7 = *(_DWORD*)(a1 + 716);
		v8 = *(_DWORD*)(a1 + 720);
		v9 = *(_DWORD*)(a1 + 724);
		v10 = *(_DWORD*)(a1 + 728);
		v11 = sub_140141910(a1 + 1024, v14);
		v12 = (int)v11[1];
		sub_1400CAF40(a1, v7 - v9 + (int)*v11, v9 - v7, 16);
		result = sub_1400CAD80(a1, v12 + v8 - v10, v10 - v8, 16);
		if (v15 >= v6)
		{
			v13 = *(_QWORD*)(a1 + 472);
			if (v13)
				v5 = *(_DWORD*)(v13 + 1296);
			return sub_1400CAC30((_QWORD*)a1, v5);
		}
	}
	return result;
}
// 140116010: using guessed type float var_38[4];

