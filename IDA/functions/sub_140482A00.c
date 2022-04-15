#include "../winhttp.h"

//----- (0000000140482A00) ----------------------------------------------------
__int64 __fastcall sub_140482A00(
	__int64 a1,
	unsigned int a2,
	unsigned int a3,
	unsigned int a4,
	__int64 a5,
	unsigned __int64 a6)
{
	unsigned __int64 v6; // r11
	unsigned __int64 v9; // r10
	__int64 v10; // rdx
	unsigned int v11; // eax
	unsigned int v12; // eax
	__int64 v13; // rdx
	unsigned int v14; // ecx
	unsigned int v15; // ecx
	__int64 v16; // rcx
	unsigned int v17; // eax
	unsigned int v18; // eax
	__int64 result; // rax

	v6 = 0i64;
	*(_DWORD*)a1 = a2;
	*(_DWORD*)(a1 + 4) = a3;
	*(_DWORD*)(a1 + 8) = a4;
	v9 = a6;
	while (v6 < v9)
	{
		v10 = v6 + ((v9 - v6) >> 1);
		v11 = *(_DWORD*)(a5 + 48 * v10);
		if (a2 < v11
			|| a2 <= v11
			&& ((v12 = *(_DWORD*)(a5 + 48 * v10 + 4), a3 < v12) || a3 <= v12 && a4 <= *(_DWORD*)(a5 + 48 * v10 + 8)))
		{
			v9 = v6 + ((v9 - v6) >> 1);
		}
		else
		{
			v6 = v10 + 1;
		}
	}
	v13 = 1i64;
	*(_QWORD*)(a1 + 16) = a5 + 48 * v6;
	if (v9 >= a6)
	{
	LABEL_17:
		v9 = a6;
	}
	else
	{
		while (1)
		{
			v14 = *(_DWORD*)(a5 + 48 * v9);
			if (a2 < v14)
				break;
			if (a2 <= v14)
			{
				v15 = *(_DWORD*)(a5 + 48 * v9 + 4);
				if (a3 < v15 || a3 <= v15 && a4 < *(_DWORD*)(a5 + 48 * v9 + 8))
					break;
			}
			v6 = v9;
			v9 += v13;
			v13 *= 2i64;
			if (v9 >= a6)
				goto LABEL_17;
		}
	}
	while (v6 < v9)
	{
		v16 = v6 + ((v9 - v6) >> 1);
		v17 = *(_DWORD*)(a5 + 48 * v16);
		if (a2 < v17
			|| a2 <= v17
			&& ((v18 = *(_DWORD*)(a5 + 48 * v16 + 4), a3 < v18) || a3 <= v18 && a4 < *(_DWORD*)(a5 + 48 * v16 + 8)))
		{
			v9 = v6 + ((v9 - v6) >> 1);
		}
		else
		{
			v6 = v16 + 1;
		}
	}
	result = a1;
	*(_QWORD*)(a1 + 24) = (__int64)(a5 + 48 * v6 - *(_QWORD*)(a1 + 16)) / 48;
	return result;
}

