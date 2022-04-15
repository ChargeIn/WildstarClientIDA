#include "../winhttp.h"

//----- (000000014076ABB0) ----------------------------------------------------
__int64 sub_14076ABB0()
{
	__int64 v0; // rdx
	__int64 v1; // r8
	char v3; // [rsp+38h] [rbp+10h] BYREF

	if (*(_DWORD*)(qword_140C65B98 + 332))
	{
		v0 = *(_QWORD*)(qword_140C65898 + 27728);
		if (v0)
		{
			if (*(_QWORD*)(v0 + 96))
			{
				v1 = *(_QWORD*)(*(_QWORD*)(v0 + 88) + 8i64 * *(_QWORD*)(v0 + 104));
				if (v1)
				{
					if (*(_DWORD*)(v1 + 16) == *(_DWORD*)(v0 + 16) && *(_QWORD*)(v1 + 24) == *(_QWORD*)(v0 + 24))
					{
						v3 = 0;
						sub_1403F4900(qword_140C65898, 0x602u, (__int64)&v3);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

