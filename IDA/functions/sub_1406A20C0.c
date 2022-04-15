#include "../winhttp.h"

//----- (00000001406A20C0) ----------------------------------------------------
__int64 __fastcall sub_1406A20C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r8
	__int64 v5; // [rsp+20h] [rbp-18h] BYREF
	__int64 v6; // [rsp+28h] [rbp-10h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			if (*(_QWORD*)(v3 + 16) != *(_QWORD*)(qword_140C635F0 + 5792))
				sub_140056570(a1, 1u, "cannot cancel an order you do not own");
			v5 = 0i64;
			v6 = 0i64;
			LODWORD(v5) = *(_DWORD*)(v3 + 64);
			v6 = *(_QWORD*)(v3 + 8);
			sub_1403F4900(qword_140C65898, 0x94u, (__int64)&v5);
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

