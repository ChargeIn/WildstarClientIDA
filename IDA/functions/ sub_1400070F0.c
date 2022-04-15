#include "../winhttp.h"

//----- (00000001400070F0) ----------------------------------------------------
__int64 __fastcall sub_1400070F0(unsigned int* a1)
{
	bool v2; // bl
	int* v4[3]; // [rsp+20h] [rbp-18h] BYREF
	int v5; // [rsp+40h] [rbp+8h] BYREF

	v5 = 0;
	sub_1403E0840(v4, a1[98] + 1, a1[96]);
	v2 = !v4[1] && a1[120] != 4;
	if (v4[0])
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4[0] - 2) + 8i64))(v4[0] - 4);
	if (v2)
		return 1i64;
	LOBYTE(v5) = 0;
	sub_140016010(qword_140C635F0, 0x78Fu, (__int64)&v5);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

