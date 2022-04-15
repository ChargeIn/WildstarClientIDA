#include "../winhttp.h"

//----- (00000001408560A0) ----------------------------------------------------
__int64 __fastcall sub_1408560A0(HANDLE* lpThreadParameter)
{
	int v2; // eax
	DWORD v3; // eax
	DWORD v4; // eax

	dword_140C62408 = GetCurrentThreadId();
	v2 = sub_1408FCC50(0i64);
	sub_1407DDB54(v2);
	sub_140834600();
	v3 = 258;
	do
	{
		if (!v3 || v3 == 258)
			sub_14082C8E0(qword_140C61B68);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 32i64))(qword_140C61C60);
		v3 = WaitForSingleObject(*lpThreadParameter, v4);
	} while (!*((_BYTE*)lpThreadParameter + 8));
	return 0i64;
}
// 140C61C60: using guessed type __int64 qword_140C61C60;
// 140C62408: using guessed type int dword_140C62408;

