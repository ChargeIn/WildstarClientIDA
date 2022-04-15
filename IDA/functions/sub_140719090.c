#include "../winhttp.h"

//----- (0000000140719090) ----------------------------------------------------
void __fastcall sub_140719090(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rsi
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rdi
	__int64 v9; // rcx

	v3 = *(_QWORD*)(a1 + 640);
	if (!v3 || a2)
	{
		v5 = a1 + 8 * a2;
		v6 = *(_QWORD*)(v5 + 536);
		if (v6)
		{
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 64i64))(v6);
			v8 = a1 + 8 * a2;
			if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, void(__fastcall*)(__int64, int, __int64), __int64, _QWORD))(**(_QWORD**)(a1 + 528) + 24i64))(
				*(_QWORD*)(a1 + 528),
				*(_QWORD*)(v5 + 536),
				v8 + 584,
				~(8 * v7) & 0x200000 | 0x80100000,
				sub_140719170,
				a1,
				0i64) < 0)
			{
				v9 = *(_QWORD*)(v8 + 584);
				if (v9)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
					*(_QWORD*)(v8 + 584) = 0i64;
				}
				sub_140719390(a1, 0i64);
			}
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 64i64))(v3);
	}
}

