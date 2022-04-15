#include "../winhttp.h"

//----- (0000000140736370) ----------------------------------------------------
__int64 sub_140736370()
{
	__int64 v0; // rax
	char v2; // [rsp+38h] [rbp+10h] BYREF

	v0 = *(_QWORD*)(qword_140C65898 + 120);
	if (v0 && *(_DWORD*)(v0 + 128) == 20)
	{
		v2 = 0;
		sub_1403F4900(qword_140C65898, 0x52Eu, (__int64)&v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

