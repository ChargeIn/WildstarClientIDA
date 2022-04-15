//----- (0000000140877F70) ----------------------------------------------------
__int64 __fastcall sub_140877F70(__int64 a1)
{
	int i; // eax
	int v3; // r8d
	int v4; // ecx
	__int16 j; // dx
	int v6; // ecx
	__int64 v8; // [rsp+20h] [rbp-48h] BYREF
	__int64 v9; // [rsp+28h] [rbp-40h]
	__int64 v10; // [rsp+30h] [rbp-38h]
	__int64 v11; // [rsp+38h] [rbp-30h]
	__int64 v12; // [rsp+40h] [rbp-28h]

	while (1)
	{
		while (1)
		{
			for (i = *(_DWORD*)(a1 + 16); i; i &= i - 1)
				;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 144i64))(*(_QWORD*)(a1 + 24));
			v3 = *(_DWORD*)(a1 + 16);
			v8 = 0i64;
			v9 = 0i64;
			v10 = 0i64;
			v11 = 0i64;
			v12 = 0i64;
			v4 = v3;
			for (j = 0; v4; v4 &= v4 - 1)
				++j;
			WORD1(v8) = j;
			HIWORD(v9) = 16;
			WORD2(v9) = 2 * j;
			HIDWORD(v8) = dword_140C110B4;
			LODWORD(v9) = dword_140C110B4 * (unsigned __int16)(2 * j);
			if (v3 == 3)
			{
				LOWORD(v10) = 0;
				LOWORD(v8) = 1;
			}
			else
			{
				LODWORD(v10) = 1048598;
				LOWORD(v8) = -2;
				v11 = 0x10000000000001i64;
				HIDWORD(v10) = v3;
				v12 = 0x719B3800AA000080i64;
			}
			if ((*(int(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 24) + 112i64))(*(_QWORD*)(a1 + 24), &v8) >= 0
				&& (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))(**(_QWORD**)(a1 + 24) + 96i64))(
					*(_QWORD*)(a1 + 24),
					0i64,
					0i64,
					1i64,
					v8,
					v9,
					v10,
					v11,
					v12) >= 0
				&& (int)sub_1408774A0(a1) >= 0)
			{
				return 1i64;
			}
			v6 = *(_DWORD*)(a1 + 16);
			if (v6 != 63)
				break;
			*(_DWORD*)(a1 + 16) = 3;
		}
		if (v6 != 1599)
			break;
		*(_DWORD*)(a1 + 16) = 63;
	}
	return 2i64;
}
// 1408780A7: conditional instruction was optimized away because eax.4<0
// 140C110B4: using guessed type int dword_140C110B4;

