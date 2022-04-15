#include "../winhttp.h"

//----- (00000001405D86A0) ----------------------------------------------------
__int64 __fastcall sub_1405D86A0(__int64 a1, unsigned int* a2, __int64* a3)
{
	__int64 v7; // rax

	if (!a2)
		return 2147500037i64;
	v7 = sub_1404E1C50(a1, *a2, *(_QWORD*)(qword_140C65898 + 120));
	*(_QWORD*)(a1 + 176) = v7;
	if (!v7)
		return 2147500037i64;
	*(_DWORD*)(a1 + 336) = *(_DWORD*)(v7 + 64);
	*(_DWORD*)(a1 + 340) = *(_DWORD*)(v7 + 72);
	return sub_1405D6880(a1, (__int64)a2, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

