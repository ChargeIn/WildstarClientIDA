#include "../winhttp.h"

//----- (00000001402D0A40) ----------------------------------------------------
void __fastcall sub_1402D0A40(__int64 a1, int a2, int a3)
{
	__int64 v4; // rcx
	__int64* v5; // rdx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	if (a2)
	{
		if (!*(_QWORD*)(a1 + 392))
		{
			v4 = a1 + 400;
			v5 = (__int64*)(qword_140C657F0 + 1248);
			*(_QWORD*)(v4 - 8) = qword_140C657F0 + 1248;
			*(_QWORD*)v4 = *v5;
			*v5 = a1;
			if (*(_QWORD*)v4)
				*(_QWORD*)(*(_QWORD*)v4 + 392i64) = v4;
			if (a3)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 272i64))(*(_QWORD*)(a1 + 8));
			sub_1402D08F0(a1);
		}
	}
	else
	{
		v6 = *(_QWORD**)(a1 + 392);
		if (v6)
		{
			*v6 = *(_QWORD*)(a1 + 400);
			v7 = *(_QWORD*)(a1 + 400);
			if (v7)
				*(_QWORD*)(v7 + 392) = *(_QWORD*)(a1 + 392);
			*(_QWORD*)(a1 + 392) = 0i64;
			*(_QWORD*)(a1 + 400) = 0i64;
		}
	}
}
// 140C657F0: using guessed type __int64 qword_140C657F0;

