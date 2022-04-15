#include "../winhttp.h"

//----- (00000001407E87C8) ----------------------------------------------------
int __fastcall sub_1407E87C8(__int64 a1, __int64 a2, const WCHAR* a3, __int64 a4, WCHAR* lpDestStr, int cchDest)
{
	int v6; // ebx
	DWORD v8; // esi
	LCID v10; // eax

	v6 = a4;
	v8 = a2;
	if (_security_cookie != qword_140DC5318)
		return ((__int64(__fastcall*)(__int64, __int64, const WCHAR*, __int64, WCHAR*))(_security_cookie ^ qword_140DC5318))(
			a1,
			a2,
			a3,
			a4,
			lpDestStr);
	v10 = sub_1407E8588(a1);
	return LCMapStringW(v10, v8, a3, v6, lpDestStr, cchDest);
}
// 140DC5318: using guessed type __int64 qword_140DC5318;

