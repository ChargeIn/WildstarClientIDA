#include "../winhttp.h"

//----- (00000001408405A0) ----------------------------------------------------
__int64 __fastcall sub_1408405A0(__int64 a1, __int64 a2)
{
	unsigned int v4; // esi
	int v5; // eax
	__int64 v6; // r15
	unsigned int v7; // eax
	__int64 v8; // rdi
	__int64 v9; // rbp
	unsigned int i; // edi
	int v11; // eax
	unsigned int v12; // edx
	unsigned int v13; // r8d

	v4 = 1;
	if (*(_BYTE*)(a2 + 40))
		*(_BYTE*)(a1 + 2400) = 1;
	v5 = *(_DWORD*)(a2 + 44);
	v6 = 0i64;
	if (v5 == 1)
	{
		v7 = sub_14082A430(
			(struct _RTL_CRITICAL_SECTION*)qword_140C61B78,
			*(_DWORD*)(a2 + 32),
			*(_DWORD*)(a2 + 36),
			*(_DWORD*)(a2 + 48),
			*(_BYTE*)(a2 + 40));
		v4 = v7;
		if (!*(_BYTE*)(a2 + 40))
			goto LABEL_23;
		if (v7 == 1)
		{
			v4 = sub_140840C50((struct _RTL_CRITICAL_SECTION*)a1);
			if (v4 != 1)
				sub_14082A430(
					(struct _RTL_CRITICAL_SECTION*)qword_140C61B78,
					*(_DWORD*)(a2 + 32),
					*(_DWORD*)(a2 + 36),
					*(_DWORD*)(a2 + 48),
					0);
		}
	}
	else
	{
		v8 = 0i64;
		if (v5)
		{
			while (1)
			{
				v4 = sub_14082A430(
					(struct _RTL_CRITICAL_SECTION*)qword_140C61B78,
					*(_DWORD*)(a2 + 32),
					*(_DWORD*)(a2 + 36),
					*(_DWORD*)(*(_QWORD*)(a2 + 48) + 4 * v8),
					*(_BYTE*)(a2 + 40));
				if (v4 != 1)
					break;
				v8 = (unsigned int)(v8 + 1);
				if ((unsigned int)v8 >= *(_DWORD*)(a2 + 44))
					goto LABEL_15;
			}
			if ((_DWORD)v8)
			{
				v9 = 0i64;
				do
				{
					sub_14082A430(
						(struct _RTL_CRITICAL_SECTION*)qword_140C61B78,
						*(_DWORD*)(a2 + 32),
						*(_DWORD*)(a2 + 36),
						*(_DWORD*)(*(_QWORD*)(a2 + 48) + v9),
						0);
					v9 += 4i64;
					--v8;
				} while (v8);
			}
		}
	LABEL_15:
		if (*(_BYTE*)(a2 + 40))
		{
			if (v4 == 1)
			{
				v4 = sub_140840C50((struct _RTL_CRITICAL_SECTION*)a1);
				if (v4 != 1)
				{
					for (i = 0; i < *(_DWORD*)(a2 + 44); ++i)
						sub_14082A430(
							(struct _RTL_CRITICAL_SECTION*)qword_140C61B78,
							*(_DWORD*)(a2 + 32),
							*(_DWORD*)(a2 + 36),
							*(_DWORD*)(*(_QWORD*)(a2 + 48) + 4i64 * i),
							0);
				}
			}
		}
		sub_140881720(dword_140C10F20, *(_QWORD*)(a2 + 48));
	}
	if (*(_BYTE*)(a2 + 40))
	{
		*(_BYTE*)(a1 + 2400) = 0;
		*(_QWORD*)(a1 + 2384) = *(_QWORD*)(a1 + 2376);
	}
LABEL_23:
	v11 = *(_DWORD*)a2;
	v12 = -1;
	v13 = 0;
	if (*(int*)a2 >= 0)
	{
		if (v11 <= 1)
		{
			v12 = *(_DWORD*)(a2 + 36);
			v13 = *(_DWORD*)(a2 + 32);
			goto LABEL_31;
		}
		if (v11 == 4)
			goto LABEL_31;
		if ((unsigned int)(v11 - 6) <= 1)
		{
			v13 = *(_DWORD*)(a2 + 32);
			goto LABEL_31;
		}
	}
	if (*(_DWORD*)(a2 + 32) == 1)
		v13 = *(_DWORD*)(a2 + 40);
LABEL_31:
	if (*(_DWORD*)(a2 + 24) == 1)
		v6 = *(_QWORD*)(a2 + 40);
	sub_14083CE60(
		a1 + 2304,
		*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a2 + 8),
		v13,
		v6,
		v4,
		v12,
		*(_QWORD*)(a2 + 16));
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;

