#include "../winhttp.h"

//----- (000000014047BAC0) ----------------------------------------------------
__int64 __fastcall sub_14047BAC0(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v5; // rcx
	__int64 v6; // rax

	*(_DWORD*)(a1 + 6312) = 1;
	v5 = qword_140C65898;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (v6 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v6 + 8))
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
	*(_DWORD*)(a1 + 192) = 0;
	*(_QWORD*)(a1 + 196) = 3i64;
	sub_14039E4D0(v5, a1, a3, a4);
	if (a1 == *(_QWORD*)(qword_140C65898 + 120))
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Mount", "b", 0i64);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

