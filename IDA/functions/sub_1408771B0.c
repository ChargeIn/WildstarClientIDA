#include "../winhttp.h"

//----- (00000001408771B0) ----------------------------------------------------
__int64 __fastcall sub_1408771B0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx

	v1 = sub_140855940(a1);
	v2 = v1;
	if (v1)
	{
		sub_140859E10(v1);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
	}
	return 1i64;
}

