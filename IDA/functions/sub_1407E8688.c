#include "../winhttp.h"

//----- (00000001407E8688) ----------------------------------------------------
int __fastcall sub_1407E8688(__int64 a1, LCTYPE a2, WCHAR* a3, int a4)
{
	LCID v8; // eax

	if (_security_cookie != qword_140DC52F8)
		return ((__int64 (*)(void))(_security_cookie ^ qword_140DC52F8))();
	v8 = sub_1407E8588(a1);
	return GetLocaleInfoW(v8, a2, a3, a4);
}
// 140DC52F8: using guessed type __int64 qword_140DC52F8;

