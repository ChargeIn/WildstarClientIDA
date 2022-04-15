#include "../winhttp.h"

//----- (000000014005E6B0) ----------------------------------------------------
__int64 __fastcall sub_14005E6B0(__int64 a1, unsigned __int64 a2)
{
	char v2; // si
	unsigned __int64 v3; // rdi
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // r10
	__int64 v9; // r9
	int v10; // ecx
	int v11; // edx
	int v12; // r8d

	v2 = *(_BYTE*)(a1 + 100);
	v3 = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(a1 + 48) = a2;
	if ((v2 & 8) != 0 && !*(_DWORD*)(a1 + 108))
	{
		*(_DWORD*)(a1 + 108) = *(_DWORD*)(a1 + 104);
		result = sub_1400613E0(a1, 3, -1);
	}
	if ((v2 & 4) != 0)
	{
		result = **(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64);
		v7 = *(_QWORD*)(result + 32);
		v8 = *(_QWORD*)(v7 + 24);
		v9 = *(_QWORD*)(v7 + 40);
		v10 = 0;
		v11 = ((__int64)(a2 - v8) >> 2) - 1;
		if (v9)
		{
			result = v11;
			v12 = *(_DWORD*)(v9 + 4i64 * v11);
		}
		else
		{
			v12 = 0;
		}
		if ((unsigned int)((__int64)(a2 - v8) >> 2) == 1 || a2 <= v3)
			return sub_1400613E0(a1, 2, v12);
		if (v9)
		{
			result = (int)((__int64)(v3 - v8) >> 2);
			v10 = *(_DWORD*)(v9 + 4 * result - 4);
		}
		if (v12 != v10)
			return sub_1400613E0(a1, 2, v12);
	}
	return result;
}

