#include "../winhttp.h"

//----- (000000014003E110) ----------------------------------------------------
__int64 __fastcall sub_14003E110(__int64 a1)
{
	unsigned int v2; // edi
	char v3; // dl
	struct tagPOINT v4; // rcx
	_QWORD* v5; // rdx

	v2 = sub_14004D900(*(__m128**)(a1 + 96));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	sub_1400E7C40(*(_QWORD*)(a1 + 72));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	v3 = sub_1400E6E80(*(_QWORD*)(a1 + 72));
	if (*(_DWORD*)(a1 + 40) == 4)
		return v2;
	v4 = *(struct tagPOINT*)(a1 + 32);
	if (!*(_QWORD*)&v4)
	{
	LABEL_5:
		if (*(_DWORD*)(a1 + 144))
		{
			if (v3)
			{
			LABEL_10:
				sub_140252260(v4, 1);
				return v2;
			}
			v5 = (_QWORD*)(a1 + 80);
		}
		else
		{
			v5 = (_QWORD*)(a1 + 88);
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
			qword_140C65670,
			*v5,
			(unsigned int)qword_140C77760,
			HIDWORD(qword_140C77760));
		goto LABEL_10;
	}
	while (*(_DWORD*)(*(_QWORD*)&v4 + 40i64) == 4)
	{
		v4 = *(struct tagPOINT*)(*(_QWORD*)&v4 + 32i64);
		if (!*(_QWORD*)&v4)
			goto LABEL_5;
	}
	return v2;
}
// 14003E193: conditional instruction was optimized away because eax.4!=0
// 14003E1BF: variable 'v4' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;

