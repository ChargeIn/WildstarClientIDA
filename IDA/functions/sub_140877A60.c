#include "../winhttp.h"

//----- (0000000140877A60) ----------------------------------------------------
__int64 __fastcall sub_140877A60(__int64 a1, unsigned int* a2)
{
	unsigned int v2; // edi
	unsigned int v6; // r8d
	unsigned int v7; // ecx
	unsigned int v8; // edx
	unsigned int v9; // r9d
	bool v10; // al

	v2 = *(_DWORD*)(a1 + 56);
	if ((*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 32) + 32i64))(
		*(_QWORD*)(a1 + 32),
		a1 + 56,
		a1 + 60))
	{
		return 2i64;
	}
	v6 = *(_DWORD*)(a1 + 40);
	v7 = *(_DWORD*)(a1 + 44);
	v8 = *(_DWORD*)(a1 + 60);
	v9 = *(_DWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 48) = v6 - v7;
	if (v8 + v9)
	{
		v10 = v2 < v7&& v7 < v8 || v8 < v2&& v2 < v7 || v7 < v8&& v8 < v2;
		*(_BYTE*)(a1 + 66) = v10;
		if (v7 <= v9)
			v6 = v9 - v7;
		else
			v6 = v9 + v6 - v7;
	}
	*a2 = v6 / *(unsigned __int16*)(a1 + 64);
	return 1i64;
}

