#include "../winhttp.h"

//----- (000000014062A230) ----------------------------------------------------
__int64 __fastcall sub_14062A230(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rdx

	if (*(_DWORD*)(a2 + 16))
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "MailResult", L"i");
		return 0i64;
	}
	else
	{
		if ((unsigned int)(*(_DWORD*)a2 - 2) <= 1)
		{
			v3 = sub_140629AF0(a1, *(_QWORD*)(a2 + 8));
			if (v3)
			{
				*(_DWORD*)(v3 + 76) |= 0xAu;
				v4 = *(_QWORD*)(v3 + 8);
				*(_QWORD*)(v3 + 64) = 0i64;
				*(_QWORD*)(v3 + 56) = 0i64;
				sub_140430A40(*(_QWORD*)(qword_140C65898 + 29504), v4);
			}
		}
		return 0i64;
	}
}
// 1409EEF7C: using guessed type wchar_t aI_34[2];
// 140C65898: using guessed type __int64 qword_140C65898;

