#include "../winhttp.h"

//----- (00000001401E0C10) ----------------------------------------------------
__int64 __fastcall sub_1401E0C10(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64* v5; // rdi
	unsigned int v6; // ebx

	if ((*(_BYTE*)(a1 + 3168) & 1) != 0)
		return 1i64;
	result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 288) + 16i64))(
		*(_QWORD*)(a1 + 288),
		a2,
		0i64);
	if ((_DWORD)result)
	{
		v5 = (__int64*)(a1 + 328);
		v6 = 0;
		while (!*v5 || (unsigned int)sub_1401E80B0(*v5, a2))
		{
			++v6;
			++v5;
			if (v6 >= 0x48)
			{
				*(_DWORD*)(a1 + 3168) |= 1u;
				return 1i64;
			}
		}
		return 0i64;
	}
	return result;
}

