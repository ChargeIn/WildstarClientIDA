#include "../winhttp.h"

//----- (000000014005CE80) ----------------------------------------------------
__int64 __fastcall sub_14005CE80(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r8
	__int64 v5; // r9
	int v6; // r10d
	__int64 v7; // r11
	__int64 v8; // rdx
	int v9; // ecx
	__int64 v10; // r10
	__int64 v11; // rdx
	int v12; // r10d
	__int64 v13; // r11
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rcx

	result = *(_QWORD*)(a2 + 64);
	v3 = a2;
	if (result)
		*(_BYTE*)(result + 9) &= 0xFCu;
	v5 = 0i64;
	v6 = 0;
	if (*(int*)(a2 + 76) > 0)
	{
		v7 = 0i64;
		do
		{
			result = *(_QWORD*)(v3 + 16);
			if (*(int*)(result + v7 + 8) >= 4)
			{
				v8 = *(_QWORD*)(result + v7);
				if ((*(_BYTE*)(v8 + 9) & 3) != 0)
					result = sub_14005C960(a1, v8);
			}
			++v6;
			v7 += 16i64;
		} while (v6 < *(_DWORD*)(v3 + 76));
	}
	v9 = v5;
	if (*(_DWORD*)(v3 + 72) > (int)v5)
	{
		v10 = v5;
		do
		{
			result = *(_QWORD*)(v3 + 56);
			v11 = *(_QWORD*)(v10 + result);
			if (v11)
				*(_BYTE*)(v11 + 9) &= 0xFCu;
			++v9;
			v10 += 8i64;
		} while (v9 < *(_DWORD*)(v3 + 72));
	}
	v12 = v5;
	if (*(_DWORD*)(v3 + 88) > (int)v5)
	{
		v13 = v5;
		do
		{
			result = *(_QWORD*)(v3 + 32);
			v14 = *(_QWORD*)(v13 + result);
			if (v14 && (*(_BYTE*)(v14 + 9) & 3) != 0)
				result = sub_14005C960(a1, v14);
			++v12;
			v13 += 8i64;
		} while (v12 < *(_DWORD*)(v3 + 88));
	}
	if (*(_DWORD*)(v3 + 92) > (int)v5)
	{
		v15 = v5;
		do
		{
			result = *(_QWORD*)(v3 + 48);
			v16 = *(_QWORD*)(v15 + result);
			if (v16)
				*(_BYTE*)(v16 + 9) &= 0xFCu;
			LODWORD(v5) = v5 + 1;
			v15 += 16i64;
		} while ((int)v5 < *(_DWORD*)(v3 + 92));
	}
	return result;
}
// 14005CEB0: variable 'v3' is possibly undefined
// 14005CECE: variable 'v6' is possibly undefined
// 14005CED1: variable 'v7' is possibly undefined
// 14005CEDB: variable 'v5' is possibly undefined
// 14005CF3B: variable 'v12' is possibly undefined
// 14005CF3E: variable 'v13' is possibly undefined

