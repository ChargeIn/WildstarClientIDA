#include "../winhttp.h"

//----- (00000001400533A0) ----------------------------------------------------
__int64 __fastcall sub_1400533A0(__int64 a1)
{
	struct tagPOINT v2; // rcx
	__int64 v3; // rax
	__int128 v5; // [rsp+30h] [rbp-18h] BYREF

	v5 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v5);
	if (*(_DWORD*)(a1 + 40) != 4)
	{
		v3 = *(_QWORD*)(a1 + 32);
		if (v3)
		{
			while (*(_DWORD*)(v3 + 40) == 4)
			{
				v3 = *(_QWORD*)(v3 + 32);
				if (!v3)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			sub_140252260(v2, 0);
		}
	}
	return 0i64;
}
// 140053401: variable 'v2' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 1400533A0: using guessed type __int128 var_18;

