#include "../winhttp.h"

//----- (00000001407E860C) ----------------------------------------------------
int __fastcall sub_1407E860C(
	__int64 a1,
	__int64 a2,
	const SYSTEMTIME* a3,
	const WCHAR* a4,
	WCHAR* lpDateStr,
	int cchDate)
{
	DWORD v8; // esi
	LCID v10; // eax

	v8 = a2;
	if (_security_cookie != qword_140DC52F0)
		return ((__int64(__fastcall*)(__int64, __int64, const SYSTEMTIME*))(_security_cookie ^ qword_140DC52F0))(
			a1,
			a2,
			a3);
	v10 = sub_1407E8588(a1);
	return GetDateFormatW(v10, v8, a3, a4, lpDateStr, cchDate);
}
// 140DC52F0: using guessed type __int64 qword_140DC52F0;

