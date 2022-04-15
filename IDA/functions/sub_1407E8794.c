#include "../winhttp.h"

//----- (00000001407E8794) ----------------------------------------------------
int __fastcall sub_1407E8794(__int64 a1)
{
	LCID v2; // eax

	if (_security_cookie != qword_140DC5310)
		return ((__int64 (*)(void))(_security_cookie ^ qword_140DC5310))();
	v2 = sub_1407E8588(a1);
	return IsValidLocale(v2, 1u);
}
// 140DC5310: using guessed type __int64 qword_140DC5310;

