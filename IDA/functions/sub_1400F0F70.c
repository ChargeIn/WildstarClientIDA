#include "../winhttp.h"

//----- (00000001400F0F70) ----------------------------------------------------
__int64 __fastcall sub_1400F0F70(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int64* v4; // rdx
	__int64 result; // rax
	unsigned __int64 v6; // r8

	*a3 += 8i64;
	v4 = *(unsigned __int64**)(*a3 - 8i64);
	if (v4)
	{
		v6 = -1i64;
		do
			++v6;
		while (*((_BYTE*)v4 + v6));
		return sub_140058710(a2, v4, v6);
	}
	else
	{
		result = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(result + 8) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	return result;
}

