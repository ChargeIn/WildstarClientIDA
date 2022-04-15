#include "../winhttp.h"

//----- (000000014086C830) ----------------------------------------------------
__int64 __fastcall sub_14086C830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5, __int64 a6, __int64 a7)
{
	__int64 result; // rax

	if (*(_DWORD*)a4 != 1)
		return sub_140866150(a1, a2, a3, a4, a5, a6, a7);
	result = sub_1408819F0(dword_140C10F20, 648i64);
	if (result)
		return sub_140866210(
			result,
			a2,
			a3,
			*(_QWORD*)(a4 + 16),
			*(_QWORD*)(a4 + 144),
			a4 + 32,
			(_DWORD*)(a4 + 64),
			*(_BYTE*)(a4 + 157),
			*(_DWORD*)(a4 + 152),
			*(_QWORD*)(a4 + 8),
			a5,
			*(_BYTE*)(a4 + 156),
			a6,
			a7);
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

