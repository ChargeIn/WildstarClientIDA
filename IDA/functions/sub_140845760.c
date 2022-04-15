//----- (0000000140845760) ----------------------------------------------------
__int64 __fastcall sub_140845760(__int64 a1)
{
	unsigned int i; // ebx
	int v3; // esi
	__int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // rbp
	unsigned int v7; // esi
	__int64 result; // rax
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rdx

	for (i = 0; i < (unsigned int)((__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4); ++i)
	{
		v3 = dword_140C10F28;
		v4 = *(_QWORD*)(*(_QWORD*)a1 + 16i64 * i + 8);
		if (v4)
		{
			sub_140870AA0(*(_QWORD*)(*(_QWORD*)a1 + 16i64 * i + 8));
			sub_140881720(v3, v4);
		}
	}
	v5 = a1 + 24;
	v6 = 4i64;
	do
	{
		v7 = 0;
		result = (__int64)(*(_QWORD*)(v5 + 8) - *(_QWORD*)v5) >> 4;
		if ((_DWORD)result)
		{
			do
			{
				v9 = *(_QWORD*)(*(_QWORD*)v5 + 16i64 * v7 + 8);
				if (v9)
				{
					(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v9 + 8i64))(v9, &off_140C10F70);
					*(_QWORD*)(*(_QWORD*)v5 + 16i64 * v7 + 8) = 0i64;
				}
				++v7;
				result = (__int64)(*(_QWORD*)(v5 + 8) - *(_QWORD*)v5) >> 4;
			} while (v7 < (unsigned int)result);
		}
		v10 = *(_QWORD*)v5;
		if (*(_QWORD*)v5)
		{
			*(_QWORD*)(v5 + 8) = v10;
			result = sub_140881720(dword_140C10F20, v10);
			*(_QWORD*)v5 = 0i64;
			*(_QWORD*)(v5 + 8) = 0i64;
			*(_DWORD*)(v5 + 16) = 0;
		}
		v5 += 24i64;
		--v6;
	} while (v6);
	v11 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = v11;
		result = sub_140881720(dword_140C10F20, v11);
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return result;
}
// 140870AA0: using guessed type __int64 __fastcall sub_140870AA0(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

