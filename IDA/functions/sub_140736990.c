#include "../winhttp.h"

//----- (0000000140736990) ----------------------------------------------------
__int64 sub_140736990()
{
	__int64 result; // rax
	__int64 v1; // rcx
	__int64 v2; // rcx
	__int64 v3; // [rsp+20h] [rbp-58h]
	__int64 v4[9]; // [rsp+30h] [rbp-48h] BYREF

	result = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v1 = *(_QWORD*)(qword_140C7DE18 + 8 * result);
			if (*(_DWORD*)(v1 + 16) == 7)
				break;
			if (++result >= (unsigned __int64)qword_140C7DE20)
				return 0i64;
		}
		if (v1)
		{
			LODWORD(v3) = *(_DWORD*)(qword_140C635F0 + 5760);
			v2 = *(_QWORD*)v1;
			memset(v4, 0, 32);
			v4[6] = 0i64;
			v4[5] = v2;
			v4[4] = v3;
			sub_1403F4900(qword_140C65898, 0x531u, (__int64)v4);
		}
		return 0i64;
	}
	return result;
}
// 140736A25: variable 'v3' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

