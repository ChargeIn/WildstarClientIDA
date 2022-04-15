#include "../winhttp.h"

//----- (00000001404B99B0) ----------------------------------------------------
__int64 __fastcall sub_1404B99B0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v5 = a1;
	v3 = sub_1403ACBB0(qword_140C65898 + 160, a2);
	if (!v3 || !sub_140203DA0(*(_DWORD*)(*(_QWORD*)(v3 + 64) + 464i64)))
		return 0i64;
	v5 = a2;
	sub_1403F4900(qword_140C65898, 0x4E7u, (__int64)&v5);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

