#include "../winhttp.h"

//----- (0000000140884D60) ----------------------------------------------------
__int64 __fastcall sub_140884D60(__int64 a1, __int64 a2, __int64* a3)
{
	unsigned int v6; // ecx
	unsigned int v7; // eax

	*(_QWORD*)(a1 + 96) = a2;
	if (*a3 >= 0)
	{
		v6 = (*(__int64(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a2 + 256) + 16i64))(*(_QWORD*)(a2 + 256), a3);
		if (!v6 || (v7 = *(_DWORD*)(a2 + 264), v6 > v7) || v7 % v6)
		{
			*(_BYTE*)(a1 + 117) = *(_BYTE*)(a1 + 117) & 0xB7 | 8;
			return 2i64;
		}
		else
		{
			*(_DWORD*)(a1 + 112) = v6;
			return 1i64;
		}
	}
	else
	{
		*(_BYTE*)(a1 + 117) = *(_BYTE*)(a1 + 117) & 0xB7 | 8;
		return 31i64;
	}
}

