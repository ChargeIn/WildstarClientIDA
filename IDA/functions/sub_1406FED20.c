#include "../winhttp.h"

//----- (00000001406FED20) ----------------------------------------------------
__int64 sub_1406FED20()
{
	__int64 v0; // rax
	char v2; // [rsp+38h] [rbp+10h] BYREF

	if (qword_140C65898)
	{
		v0 = *(_QWORD*)(qword_140C65898 + 120);
		if (v0)
		{
			if (!*(_DWORD*)(v0 + 592) && sub_1403A1230())
			{
				v2 = 0;
				sub_1403F4900(qword_140C65898, 0x150u, (__int64)&v2);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

