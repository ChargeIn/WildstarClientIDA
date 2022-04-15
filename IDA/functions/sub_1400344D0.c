#include "../winhttp.h"

//----- (00000001400344D0) ----------------------------------------------------
__int64 __fastcall sub_1400344D0(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // r8
	unsigned int v4; // r15d
	int v5; // edx
	int v6; // ecx
	int v7; // eax
	__int64 v8; // rbx
	__int64 v9; // r14
	int* v10; // rax
	int* v11; // rsi
	int* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 result; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	int v21; // [rsp+20h] [rbp-58h] BYREF
	LONGLONG v22; // [rsp+28h] [rbp-50h]
	LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

	sub_1400BC8B0(qword_140C63628 + 16, 1.0);
	v2 = qword_140C63628;
	v3 = *(_QWORD*)(qword_140C63628 + 296);
	if (v3)
		sub_1407E4830(*(int**)(qword_140C63628 + 288), 0i64, 8 * v3);
	v4 = sub_1400518A0(v2, 9, 6, 0);
	if (*(_DWORD*)(v2 + 304) != v4)
	{
		v5 = dword_140C3BF70;
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v5 = *(_DWORD*)qword_140C63750;
		sub_14001A770((__int64)&off_140C3BF60, v5, 0);
		*(_DWORD*)(v2 + 304) = v4;
	}
	v6 = dword_140C3BF70;
	v7 = dword_140C3BF70;
	if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
		v7 = *(_DWORD*)qword_140C63750;
	if (*((_DWORD*)&off_140C3BF60 + v7 + 8))
	{
		if (*(_DWORD*)qword_140C63750 < dword_140C3BF70)
			v6 = *(_DWORD*)qword_140C63750;
		v4 = *((_DWORD*)&off_140C3BF60 + v6 + 8);
	}
	if ((dword_140C8CD58 & 1) == 0)
	{
		dword_140C8CD58 |= 1u;
		sub_1401AD620((__int64)&unk_140C8CD60, L"ZoneKit 0 World");
	}
	sub_1401ADA40((__int64)&unk_140C8CD60, v4);
	if (*(__int64*)(v2 + 296) <= 0)
	{
		do
		{
			v8 = *(_QWORD*)(v2 + 296);
			v9 = v8 + 1;
			v10 = sub_14018DB00(*(_QWORD*)(v2 + 288), v8 + 1, 8i64);
			v11 = v10;
			*(_QWORD*)&v10[2 * v8] = 0i64;
			v12 = *(int**)(v2 + 288);
			if (v12 != v10)
			{
				sub_1407DB590(v10, v12, 8i64 * *(_QWORD*)(v2 + 296));
				v13 = *(_QWORD*)(v2 + 288);
				if (v13)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
				*(_QWORD*)(v2 + 288) = v11;
			}
			*(_QWORD*)(v2 + 296) = v9;
		} while (v9 <= 0);
	}
	if (v4 && (unsigned __int64)v4 < *(_QWORD*)(v2 + 192))
		v14 = *(_QWORD*)(*(_QWORD*)(v2 + 184) + 8i64 * v4);
	else
		v14 = 0i64;
	v15 = qword_140C63628;
	**(_QWORD**)(v2 + 288) = v14;
	*(_DWORD*)(v15 + 576) = 0;
	sub_140051CC0(v15, 0, 108);
	if (*(_DWORD*)(a1 + 80) || !*(_DWORD*)(a1 + 20))
		return 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 96) + 24i64)
		|| (*(_DWORD*)(*(_QWORD*)&qword_140C63788 + 4840i64) = 0,
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 48i64))(*(_QWORD*)(a1 + 96)),
			*(_DWORD*)(*(_QWORD*)&qword_140C63788 + 4840i64) = 1,
			(int)result >= 0))
	{
		v21 = 5;
		QueryPerformanceCounter(&PerformanceCount);
		v17 = *(_QWORD*)(a1 + 96);
		v22 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v17 + 40i64))(v17, &v21))
		{
			v18 = *(_QWORD*)(v17 + 120);
			if (v18)
			{
				if (*(_QWORD*)(v18 + 5864))
				{
					v19 = *(_QWORD*)(v17 + 29080);
					if (!v19 || !*(_DWORD*)(v19 + 36) && !*(_DWORD*)(v19 + 28) && !*(_QWORD*)(v19 + 496))
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v17 + 29256) + 136i64))(*(_QWORD*)(v17 + 29256));
						if ((*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v17 + 29256) + 152i64))(
							*(_QWORD*)(v17 + 29256),
							&v21)
							&& *(_QWORD*)(v17 + 25744)
							&& (*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v17 + 29256) + 160i64))(
								*(_QWORD*)(v17 + 29256),
								&v21)
							&& (!*(_DWORD*)(a1 + 104) || !(unsigned int)sub_14001C520((unsigned int*)(a1 + 104))))
						{
							sub_1403F3790(*(_QWORD*)(a1 + 96));
							sub_140048100(a1, *(_QWORD*)(a1 + 96), 1);
							*(_DWORD*)(a1 + 80) = 1;
							v20 = *(_QWORD*)(a1 + 96);
							if (v20)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
								*(_QWORD*)(a1 + 96) = 0i64;
							}
						}
					}
				}
			}
		}
		return 0i64;
	}
	return result;
}
// 140A14250: using guessed type wchar_t aZonekit0World[16];
// 140C3BF60: using guessed type __int64 (__fastcall **off_140C3BF60)();
// 140C3BF70: using guessed type int dword_140C3BF70;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C8CD58: using guessed type int dword_140C8CD58;

