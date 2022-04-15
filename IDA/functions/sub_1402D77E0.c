#include "../winhttp.h"

//----- (00000001402D77E0) ----------------------------------------------------
__int64 __fastcall sub_1402D77E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	if (a2 >= a1 + 112i64 * *(_QWORD*)(a1 + 680) - 112)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(a1 + 688))(a3, *(_QWORD*)(a1 + 696));
	else
		return sub_1402D7630(a1, a2 + 112, a3, a1);
}
// 1402D7630: using guessed type __int64 __fastcall sub_1402D7630(_QWORD, _QWORD, _QWORD, _QWORD);

