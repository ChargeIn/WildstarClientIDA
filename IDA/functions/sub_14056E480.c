#include "../winhttp.h"

//----- (000000014056E480) ----------------------------------------------------
__int64 __fastcall sub_14056E480(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rdi

	sub_1405728B0(a1);
	v2 = *(_QWORD*)(a1 + 88);
	if (v2)
	{
		sub_140572FC0(v2);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	if (qword_140C65898)
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathRefresh", byte_1409D10FF);
	v3 = *(_QWORD*)(qword_140C65920 + 8);
	if (v3)
	{
		do
		{
			v4 = *(_QWORD*)(v3 + 32);
			if (!*(_DWORD*)(v3 + 56))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
				(**(void(__fastcall***)(__int64, __int64))v3)(v3, 1i64);
			}
			v3 = v4;
		} while (v4);
	}
	sub_140618300();
	return sub_140616EB0();
}
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

