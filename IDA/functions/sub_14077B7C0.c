#include "../winhttp.h"

//----- (000000014077B7C0) ----------------------------------------------------
__int64 __fastcall sub_14077B7C0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	if (!*(_DWORD*)(a2 + 8) || !*(_DWORD*)(a2 + 16))
		return 2147500037i64;
	result = sub_1407798C0(a1, a2, a3);
	if ((int)result >= 0)
	{
		v5 = qword_140C65898;
		*(_OWORD*)(a1 + 192) = *(_OWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
		v6 = *(_QWORD*)(v5 + 29504);
		if (v6)
			sub_1400EA3E0(v6, "ProgressClickWindowDisplay", byte_1409EC1B4, 1i64);
		return 0i64;
	}
	return result;
}
// 1409EC1B4: using guessed type _BYTE byte_1409EC1B4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

