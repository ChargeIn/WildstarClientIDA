#include "../winhttp.h"

//----- (00000001403A6E00) ----------------------------------------------------
__int64 __fastcall sub_1403A6E00(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // [rsp+30h] [rbp+8h] BYREF

	v3 = a1;
	v1 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 26392))
		return 2147500037i64;
	LOBYTE(v3) = 0;
	sub_1403F4900(qword_140C65898, 0x190u, (__int64)&v3);
	sub_1400EA3E0(*(_QWORD*)(v1 + 29504), "P2PTradeCommit", &unk_1409D128A);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

