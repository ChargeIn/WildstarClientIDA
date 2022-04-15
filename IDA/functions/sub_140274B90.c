#include "../winhttp.h"

//----- (0000000140274B90) ----------------------------------------------------
void __fastcall sub_140274B90(__int64 a1)
{
	__int64 v2; // rsi
	_DWORD* v3; // r14
	__int64 v4; // rbp
	_DWORD* v5; // rbx
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rax

	v2 = a1 + 7544;
	v3 = (_DWORD*)(a1 + 7528);
	v4 = 4i64;
	do
	{
		if (*v3)
		{
			if ((unsigned int)(*v3 - 1) <= 1 && *(_QWORD*)v2)
				*(_DWORD*)(*(_QWORD*)v2 + 96i64) = 1;
		}
		else
		{
			v5 = (_DWORD*)qword_140C636A0;
			*(_DWORD*)qword_140C636A0 += 0x10000;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6608) + 336i64))(*(_QWORD*)(a1 + 6608));
			if (*(_QWORD*)v2)
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD**)(*(_QWORD*)v2 + 72i64)
					+ 24i64))(
						*(_QWORD*)(*(_QWORD*)v2 + 72i64),
						0i64,
						0i64,
						0i64,
						0i64,
						0);
			}
			else
			{
				v6 = *(_QWORD*)(a1 + 6616);
				if (v6)
				{
					v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)v6 + 968i64))(
						v6,
						0i64,
						0i64,
						0i64,
						0i64,
						0);
					if (v7 < 0 || v7 == 141953144)
						*(_DWORD*)(a1 + 6628) = 0;
					if (*(_DWORD*)(a1 + 6628) && *(_DWORD*)(a1 + 6636))
						(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6616) + 992i64))(*(_QWORD*)(a1 + 6616), 0i64);
				}
				else if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 136i64))(
					*(_QWORD*)(a1 + 6608),
					0i64,
					0i64,
					0i64,
					0i64) < 0)
				{
					*(_DWORD*)(a1 + 6628) = 0;
				}
			}
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6608) + 328i64))(*(_QWORD*)(a1 + 6608));
			*v5 -= 0x10000;
		}
		++v3;
		v2 += 8i64;
		--v4;
	} while (v4);
	if (*(_DWORD*)(a1 + 7684) == 1 || *(_DWORD*)(a1 + 7684) == 2)
	{
		v8 = *(_QWORD*)(a1 + 7688);
		if (v8)
			*(_DWORD*)(v8 + 96) = 1;
	}
}
// 140C636A0: using guessed type __int64 qword_140C636A0;

