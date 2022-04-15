#include "../winhttp.h"

//----- (00000001405C79C0) ----------------------------------------------------
__int64 __fastcall sub_1405C79C0(__int64* a1, int a2)
{
	unsigned int v3; // eax
	int v4; // edx
	__int64 v5; // rax

	v3 = sub_1407A1440((__int64)a1, a2, 1u);
	v4 = v3;
	if (v3
		&& (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v5 = sub_1405A5B90(qword_140C65898, v3)) != 0
			|| (v5 = sub_1407A0FD0(qword_140C65B70, v4)) != 0))
	{
		return sub_1405C7620(a1, v5);
	}
	else
	{
		return 2147500037i64;
	}
}
// 1405C79FB: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

