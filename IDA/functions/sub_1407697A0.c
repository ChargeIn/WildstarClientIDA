#include "../winhttp.h"

//----- (00000001407697A0) ----------------------------------------------------
__int64 sub_1407697A0()
{
	int v0; // ecx
	__int64 v2; // [rsp+20h] [rbp-18h] BYREF
	int v3; // [rsp+28h] [rbp-10h]

	v2 = 0i64;
	v3 = 0;
	v0 = *(_DWORD*)(qword_140C65B98 + 272);
	v3 = 0;
	LODWORD(v2) = v0;
	sub_1403F4900(qword_140C65898, 0x5B2u, (__int64)&v2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

