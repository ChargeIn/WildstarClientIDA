#include "../winhttp.h"

//----- (00000001407E86D8) ----------------------------------------------------
int __fastcall sub_1407E86D8(
	__int64 a1,
	__int64 a2,
	const SYSTEMTIME* a3,
	const WCHAR* a4,
	WCHAR* lpTimeStr,
	int cchTime)
{
	DWORD v8; // esi
	LCID v10; // eax

	v8 = a2;
	if (_security_cookie != qword_140DC5300)
		return ((__int64(__fastcall*)(__int64, __int64))(_security_cookie ^ qword_140DC5300))(a1, a2);
	v10 = sub_1407E8588(a1);
	return GetTimeFormatW(v10, v8, a3, a4, lpTimeStr, cchTime);
}
// 140DC5300: using guessed type __int64 qword_140DC5300;

