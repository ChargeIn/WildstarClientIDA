#include "../winhttp.h"

//----- (00000001407E8448) ----------------------------------------------------
int __fastcall sub_1407E8448(
	__int64 a1,
	__int64 a2,
	const WCHAR* a3,
	__int64 a4,
	const WCHAR* lpString2,
	int cchCount2)
{
	int v6; // ebx
	DWORD v8; // esi
	LCID v10; // eax

	v6 = a4;
	v8 = a2;
	if (_security_cookie != qword_140DC52E0)
		return ((__int64(__fastcall*)(__int64, __int64, const WCHAR*, __int64, const WCHAR*))(_security_cookie ^ qword_140DC52E0))(
			a1,
			a2,
			a3,
			a4,
			lpString2);
	v10 = sub_1407E8588(a1);
	return CompareStringW(v10, v8, a3, v6, lpString2, cchCount2);
}
// 140DC52E0: using guessed type __int64 qword_140DC52E0;

