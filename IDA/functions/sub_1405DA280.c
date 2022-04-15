#include "../winhttp.h"

//----- (00000001405DA280) ----------------------------------------------------
__int64 __fastcall sub_1405DA280(__int64 a1, unsigned int* a2, __int64* a3)
{
	__int64 v6; // rax
	unsigned int v8; // ecx

	v6 = sub_1404E1C50(a1, *a2, *(_QWORD*)(qword_140C65898 + 120));
	*(_QWORD*)(a1 + 176) = v6;
	if (v6 && (v8 = *(_DWORD*)(v6 + 64), *(_DWORD*)(a1 + 336) = v8, sub_1401FFDE0(v8)))
		return sub_1405D6880(a1, (__int64)a2, a3);
	else
		return 2147500037i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

