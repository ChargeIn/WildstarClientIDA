#include "../winhttp.h"

//----- (000000014038D9A0) ----------------------------------------------------
void __fastcall sub_14038D9A0(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 32);
	if (v2
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 1336i64))(v2)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 288i64))(a1)
		&& !*(_QWORD*)(a1 + 1168))
	{
		sub_140367870(*(_QWORD*)(a1 + 16), (float*)(a1 + 384));
	}
}

