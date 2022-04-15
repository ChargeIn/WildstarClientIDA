#include "../winhttp.h"

//----- (00000001404D5F50) ----------------------------------------------------
__int64 __fastcall sub_1404D5F50(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	__int64 v4; // rax
	__int64 v5; // rbx
	struct tagPOINT v6; // rcx

	result = sub_140728AC0(*(_QWORD*)(a1 + 200));
	v3 = result;
	if ((int)result >= 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		sub_1400E7C40(*(_QWORD*)(*(_QWORD*)(a1 + 200) + 1424i64));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
		if (*(_DWORD*)(a1 + 40) != 4)
		{
			v4 = *(_QWORD*)(a1 + 32);
			if (v4)
			{
				while (*(_DWORD*)(v4 + 40) == 4)
				{
					v4 = *(_QWORD*)(v4 + 32);
					if (!v4)
						goto LABEL_6;
				}
			}
			else
			{
			LABEL_6:
				v5 = *(_QWORD*)(a1 + 200);
				if (!sub_1400E6E80(*(_QWORD*)(v5 + 1424)))
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
						qword_140C65670,
						*(_QWORD*)(v5 + 1536),
						(unsigned int)qword_140C77760,
						HIDWORD(qword_140C77760));
				sub_140252260(v6, 1);
				return 0;
			}
		}
		return v3;
	}
	return result;
}
// 1404D6027: variable 'v6' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;

