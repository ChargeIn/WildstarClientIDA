#include "../winhttp.h"

//----- (00000001401CBAF0) ----------------------------------------------------
__int64 __fastcall sub_1401CBAF0(__int64 a1, __int64 a2, int a3)
{
	__int64 result; // rax
	__int64 v4; // r11
	__int64 v6; // rdi
	int v7; // r9d
	bool v8; // cc
	__int64 v9; // r10
	__int64 v10; // r8
	unsigned __int16 v11; // ax
	unsigned __int16 v12; // dx
	__int64 v13; // r10
	unsigned __int16 v14; // ax
	unsigned __int16 v15; // dx
	__int64 v16; // rax

	result = *(unsigned int*)(a1 + 5276);
	v4 = a3;
	v6 = *(int*)(a1 + 4i64 * a3 + 2984);
	v7 = 2 * a3;
	v8 = 2 * a3 < (int)result;
	if (2 * a3 > (int)result)
	{
	LABEL_11:
		*(_DWORD*)(a1 + 4 * v4 + 2984) = v6;
	}
	else
	{
		while (1)
		{
			if (v8)
			{
				v9 = *(int*)(a1 + 4i64 * v7 + 2984);
				v10 = *(int*)(a1 + 4i64 * v7 + 2988);
				v11 = *(_WORD*)(a2 + 4 * v10);
				v12 = *(_WORD*)(a2 + 4 * v9);
				if (v11 < v12 || v11 == v12 && *(_BYTE*)(v10 + a1 + 5284) <= *(_BYTE*)(v9 + a1 + 5284))
					++v7;
			}
			v13 = *(int*)(a1 + 4i64 * v7 + 2984);
			v14 = *(_WORD*)(a2 + 4 * v6);
			v15 = *(_WORD*)(a2 + 4 * v13);
			if (v14 < v15 || v14 == v15 && *(_BYTE*)(v6 + a1 + 5284) <= *(_BYTE*)(v13 + a1 + 5284))
				break;
			v16 = (int)v4;
			v4 = v7;
			v7 *= 2;
			*(_DWORD*)(a1 + 4 * v16 + 2984) = v13;
			result = *(unsigned int*)(a1 + 5276);
			v8 = v7 < (int)result;
			if (v7 > (int)result)
				goto LABEL_11;
		}
		result = (int)v4;
		*(_DWORD*)(a1 + 4i64 * (int)v4 + 2984) = v6;
	}
	return result;
}

