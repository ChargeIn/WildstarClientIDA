#include "../winhttp.h"

//----- (000000014056B600) ----------------------------------------------------
void __fastcall sub_14056B600(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // rdi
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rdx

	if (a3 > a2)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504);
		v4 = *(_QWORD*)(v3 + 400);
		sub_1406EED00(v4, a3 - a2, *(__int64***)(a1 + 8), *(_QWORD*)(a1 + 16));
		v5 = (unsigned int)sub_1400578C0(v4);
		sub_1400EA3E0(v3, "PlayerPathScientistScanData", "T", v5);
		sub_1400579E0(v4, v6, v5);
	}
}
// 14056B66F: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

