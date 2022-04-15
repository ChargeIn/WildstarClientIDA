#include "../winhttp.h"

//----- (000000014087F940) ----------------------------------------------------
__int64 __fastcall sub_14087F940(__int64 a1, __int64* a2)
{
	char v3; // r9
	__int64 v5; // rax
	__int64 result; // rax

	v3 = *(_BYTE*)(*a2)++;
	*(_BYTE*)(a1 + 62) &= 0xE0u;
	v5 = *(_QWORD*)a1;
	*(_BYTE*)(a1 + 62) |= v3 & 0x1F;
	result = (*(__int64 (**)(void))(v5 + 80))();
	if ((_DWORD)result == 1)
		return sub_140876B30(a1, a2);
	return result;
}

