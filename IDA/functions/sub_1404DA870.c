#include "../winhttp.h"

//----- (00000001404DA870) ----------------------------------------------------
void __fastcall sub_1404DA870(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax

	if (*(_DWORD*)(a1 + 5272))
	{
		v2 = sub_1403C1EA0(a1, a2, *(_BYTE*)(a1 + 28140));
	LABEL_6:
		if (v2)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 64i64))(v2, 2i64);
		return;
	}
	if (*(_QWORD*)(a1 + 120) && a2 < 0xC)
	{
		v2 = *(_QWORD*)(a1 + 8i64 * a2 + 4328);
		goto LABEL_6;
	}
}

