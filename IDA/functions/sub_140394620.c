#include "../winhttp.h"

//----- (0000000140394620) ----------------------------------------------------
__int64 __fastcall sub_140394620(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // rdi
	unsigned int v6; // esi
	__int64 v7; // rax
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a2;
	v2 = *(_QWORD*)(a2 + 16);
	v4 = **(_QWORD**)(v2 + 40);
	v6 = ~(unsigned __int8)(*(_DWORD*)(v2 + 128) >> 23) & 0x10 | 2;
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 24) + 48i64))(*(_QWORD*)(a2 + 24));
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(v4 + 40))(
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 40i64),
		v7,
		a1 + 16,
		v6);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 24) &= ~1u;
		return 0i64;
	}
	return result;
}

