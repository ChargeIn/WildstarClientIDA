#include "../winhttp.h"

//----- (00000001404C6A80) ----------------------------------------------------
void __fastcall sub_1404C6A80(__m128* a1)
{
	unsigned __int64 v2; // rcx
	__int64 v3; // rbx

	if (a1[39].m128_u64[1])
	{
		if (!*(_DWORD*)qword_140C659F0)
			sub_1404C24B0(a1);
		v2 = a1[18].m128_u64[0];
		if (v2)
		{
			v3 = (*(__int64 (**)(void))(*(_QWORD*)v2 + 336i64))();
			(**(void(__fastcall***)(__int64))v3)(v3);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 936i64))(v3);
			sub_1404C2960((__int64)a1);
			sub_1404C19C0(a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		}
		else
		{
			sub_1404C19C0(a1);
		}
	}
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

