#include "../winhttp.h"

//----- (00000001405DA3F0) ----------------------------------------------------
__int64 __fastcall sub_1405DA3F0(__int64 a1, unsigned int* a2, __int64* a3)
{
	_DWORD* v6; // rax

	v6 = (_DWORD*)sub_1404E1C50(a1, *a2, *(_QWORD*)(qword_140C65898 + 120));
	*(_QWORD*)(a1 + 176) = v6;
	if (!v6)
		return 2147500037i64;
	*(_DWORD*)(a1 + 336) = v6[16];
	*(_DWORD*)(a1 + 340) = v6[17];
	*(_DWORD*)(a1 + 344) = v6[18];
	return sub_1405D6880(a1, (__int64)a2, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

