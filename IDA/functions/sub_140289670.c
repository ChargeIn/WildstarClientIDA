//----- (0000000140289670) ----------------------------------------------------
__int64 __fastcall sub_140289670(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	int v10[16]; // [rsp+50h] [rbp-48h] BYREF

	if (*(int*)(a1 + 64) >= 1)
	{
		if (a2 < 1)
		{
			v7 = *(_QWORD*)(a1 + 80);
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
				*(_QWORD*)(a1 + 80) = 0i64;
			}
			v8 = *(_QWORD*)(a1 + 96);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			v9 = *(_QWORD*)(a1 + 72);
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				*(_QWORD*)(a1 + 72) = 0i64;
			}
		}
		goto LABEL_17;
	}
	if (a2 < 1)
	{
	LABEL_17:
		*(_DWORD*)(a1 + 64) = a2;
		return 0i64;
	}
	result = sub_14026A150(*(_QWORD*)(a1 + 16), a1 + 24, (_DWORD*)(*(_QWORD*)(a1 + 16) + 6560i64), (__int64)v10);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, int*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 104i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
			v10,
			a1 + 72);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 72) + 40i64))(
				*(_QWORD*)(a1 + 72),
				0i64,
				0i64,
				a1 + 80);
			if ((int)result >= 0)
			{
				v5 = *(int*)(a1 + 36);
				if ((int)v5 >= 27
					|| (result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, _DWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 232i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
						(unsigned int)v10[0],
						(unsigned int)v10[1],
						(unsigned int)dword_140AE7B30[v5],
						v10[4],
						v10[5],
						0,
						a1 + 96,
						0i64),
						(int)result >= 0))
				{
					v6 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(a1 + 88) = *(_DWORD*)(v6 + 240) - 1;
					*(_DWORD*)(a1 + 104) = *(_DWORD*)(v6 + 240) - 1;
					goto LABEL_17;
				}
			}
		}
	}
	return result;
}
// 140289773: conditional instruction was optimized away because eax.4<1
// 140AE7B30: using guessed type int dword_140AE7B30[28];

