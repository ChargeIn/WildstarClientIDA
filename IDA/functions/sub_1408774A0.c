//----- (00000001408774A0) ----------------------------------------------------
__int64 __fastcall sub_1408774A0(__int64 a1)
{
	int v2; // r8d
	int v3; // ecx
	unsigned __int16 i; // dx
	int v5; // r9d
	int v6; // eax
	int v7; // ecx
	__int16 v8; // dx
	int v9; // r9d
	__int64 result; // rax
	__int64 v11; // rcx
	__int64 v12; // [rsp+40h] [rbp-29h] BYREF
	__int64 v13; // [rsp+48h] [rbp-21h] BYREF
	__int64 v14; // [rsp+50h] [rbp-19h]
	__int64 v15; // [rsp+58h] [rbp-11h]
	__int64 v16; // [rsp+60h] [rbp-9h]
	__int64 j; // [rsp+68h] [rbp-1h]
	__int64 v18; // [rsp+70h] [rbp+7h] BYREF
	__int64 v19; // [rsp+78h] [rbp+Fh]
	__int64* v20; // [rsp+80h] [rbp+17h]
	__int64 v21; // [rsp+88h] [rbp+1Fh]
	__int64 v22; // [rsp+90h] [rbp+27h]
	unsigned int v23; // [rsp+D0h] [rbp+67h] BYREF
	int v24; // [rsp+D8h] [rbp+6Fh] BYREF
	__int64 v25; // [rsp+E0h] [rbp+77h] BYREF
	int* v26; // [rsp+E8h] [rbp+7Fh] BYREF

	v19 = 0i64;
	v20 = 0i64;
	v21 = 0i64;
	v22 = 0i64;
	v18 = 0x1000000000028i64;
	if (BYTE8(xmmword_140C61CA0))
		HIDWORD(v18) = 98304;
	v2 = *(_DWORD*)(a1 + 16);
	v20 = &v13;
	v3 = v2;
	for (i = 0; v3; v3 &= v3 - 1)
		++i;
	v5 = WORD4(xmmword_140C61C90);
	v6 = i;
	*(_WORD*)(a1 + 64) = 2 * i;
	v7 = v2;
	v8 = 0;
	v9 = (v6 * v5) << 11;
	LODWORD(v19) = v9;
	v13 = 0i64;
	v14 = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	for (j = 0i64; v7; v7 &= v7 - 1)
		++v8;
	WORD1(v13) = v8;
	HIWORD(v14) = 16;
	HIDWORD(v13) = dword_140C110B4;
	WORD2(v14) = 2 * v8;
	LODWORD(v14) = dword_140C110B4 * (unsigned __int16)(2 * v8);
	if (v2 == 3)
	{
		LOWORD(v15) = 0;
		LOWORD(v13) = 1;
	}
	else
	{
		LODWORD(v15) = 1048598;
		HIDWORD(v15) = v2;
		LOWORD(v13) = -2;
		v16 = 0x10000000000001i64;
		j = 0x719B3800AA000080i64;
	}
	*(_DWORD*)(a1 + 40) = v9;
	*(_DWORD*)(a1 + 48) = v9;
	v25 = 0i64;
	v26 = 0i64;
	v12 = 0i64;
	result = (*(__int64(__fastcall**)(LPVOID, __int64*, __int64*, _QWORD))(*(_QWORD*)qword_140C628B8 + 24i64))(
		qword_140C628B8,
		&v18,
		&v25,
		0i64);
	if ((int)result >= 0)
	{
		if ((**(int(__fastcall***)(__int64, void*, __int64))v25)(v25, &unk_140964760, a1 + 32) < 0
			|| (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, int**, unsigned int*, __int64*, int*, int))(**(_QWORD**)(a1 + 32) + 88i64))(
				*(_QWORD*)(a1 + 32),
				0i64,
				*(unsigned int*)(a1 + 40),
				&v26,
				&v23,
				&v12,
				&v24,
				1) < 0
			|| (sub_1407E4830(v26, 0i64, v23),
				(*(int(__fastcall**)(_QWORD, int*, _QWORD, __int64, int))(**(_QWORD**)(a1 + 32) + 152i64))(
					*(_QWORD*)(a1 + 32),
					v26,
					v23,
					v12,
					v24) < 0))
		{
			v11 = *(_QWORD*)(a1 + 32);
			if (v11)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
				*(_QWORD*)(a1 + 32) = 0i64;
			}
			if (v25)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
			return 2147500037i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
			return 0i64;
		}
	}
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C61C90: using guessed type __int128 xmmword_140C61C90;
// 140C61CA0: using guessed type __int128 xmmword_140C61CA0;

