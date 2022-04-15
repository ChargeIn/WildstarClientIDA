#include "../winhttp.h"

//----- (0000000140379330) ----------------------------------------------------
__int64 __fastcall sub_140379330(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64* v5; // rsi
	int v6; // ebx

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 56i64))(*(_QWORD*)(a1 + 48));
	v5 = (__int64*)result;
	if (result)
	{
		v6 = 64;
		if (!(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 416i64))(
			result,
			*(unsigned int*)(a1 + 364)))
			v6 = 80;
		sub_1403793C0(a1, v5, *(_DWORD*)(a1 + 364), a2, v6);
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 304i64))(a1, *(unsigned int*)(a1 + 364));
	}
	return result;
}

