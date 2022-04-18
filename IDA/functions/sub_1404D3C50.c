#include "../winhttp.h"

//----- (00000001404D3C50) ----------------------------------------------------
__int64 __fastcall sub_1404D3C50(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax

	if ((int)*a2 >= 10)
		return 2147942487i64;
	v4 = *(_QWORD*)(qword_140C65A40 + 8i64 * (int)*a2);
	if (v4)
	{
		v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 16i64))(v4, 0i64, 0i64);
		if (v5)
			sub_1404D4400(v5, (__int64)a2);
	}
	if (qword_140C65898)
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "LeaderboardUpdate", L"i", *a2);
	return 0i64;
}
// 1409EF95C: using guessed type wchar_t aI_43[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A40: using guessed type __int64 qword_140C65A40;

