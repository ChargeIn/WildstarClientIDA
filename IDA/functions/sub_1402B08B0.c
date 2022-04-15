#include "../winhttp.h"

//----- (00000001402B08B0) ----------------------------------------------------
__int64 __fastcall sub_1402B08B0(__int64 a1, __int64 a2)
{
	signed int v3; // edi
	__int64 v4; // rax
	__int64 v6; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 40i64))(a2, 0i64);
		if (v3 < 0)
		{
			v4 = 0x141DE72C0i64;
		LABEL_4:
			v6 = v4;
			sub_1401A3130(14, 2, &v6, (unsigned int)v3);
			return sub_1402B1940(a1, v3);
		}
	}
	if (*(_DWORD*)(a1 + 72))
		return sub_1402B1940(a1, 0x80004005);
	v3 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 56) + 6336i64)
		+ 40i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 56) + 6336i64),
			a1 + 108,
			a1 + 152,
			a1 + 64);
	if (v3 < 0)
	{
		v4 = 0x141DE72B0i64;
		goto LABEL_4;
	}
	return sub_1402B1940(a1, 0);
}

