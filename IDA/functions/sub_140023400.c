//----- (0000000140023400) ----------------------------------------------------
void __fastcall sub_140023400(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
	__int64 v10; // r10
	__int64 v11; // r14
	__int64 v12; // rax
	__int64 v13; // rsi
	int v14; // eax
	__int64 v15; // r9
	__int64 v16; // rax
	__int64 v17; // rdx
	_WORD* v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rdx
	__int16 v21; // ax
	int v22; // r9d
	int v23; // r8d
	__int64 v24; // rcx
	int v25; // edx
	__int64 v26; // [rsp+30h] [rbp-28h] BYREF
	__int64 v27[4]; // [rsp+38h] [rbp-20h] BYREF
	__int64 v28; // [rsp+60h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 368))
	{
		v10 = *(_QWORD*)(qword_140C635F0 + 280);
		v11 = *(_QWORD*)(a1 + 184);
		v12 = *(_QWORD*)qword_140C65808;
		v27[0] = a2;
		v28 = v10;
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(v12 + 264))(
			qword_140C65808,
			&v28,
			2013i64,
			v27))
		{
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
			v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 32i64))(v28);
			v15 = *(_QWORD*)(v11 + 16);
			if (v15)
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v15 + 16))(
					*(_QWORD*)(v15 + 8),
					v13 + 4,
					(unsigned int)(v14 - 4));
			v26 = 0i64;
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
			v17 = *(unsigned int*)(v11 + 152);
			v26 = v16;
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
				qword_140C65808,
				v17,
				580i64,
				&v26);
		}
		*(_QWORD*)(a1 + 376) = a2;
		v18 = (_WORD*)(a1 + 384);
		v19 = a3 - (a1 + 384);
		v20 = 33i64;
		while (v20 != -2147483613)
		{
			v21 = *(_WORD*)((char*)v18 + v19);
			if (!v21)
				break;
			*v18++ = v21;
			if (!--v20)
			{
				--v18;
				break;
			}
		}
		v22 = a6;
		v23 = a5;
		*v18 = 0;
		*(_DWORD*)(a1 + 452) = v22;
		sub_140052090((__int64)v18, a4, v23, v22);
		v24 = qword_140C635F0;
		if (*(_DWORD*)(qword_140C635F0 + 5704))
		{
			v25 = dword_140C3B3F0;
			if (*(_DWORD*)qword_140C63750 < dword_140C3B3F0)
				v25 = *(_DWORD*)qword_140C63750;
			sub_14001A820((__int64)&off_140C3B3E0, v25, 1500.0);
			v24 = qword_140C635F0;
		}
		*(_DWORD*)(v24 + 5760) = *(_DWORD*)(a1 + 480);
		*(_DWORD*)(a1 + 368) = 4;
		sub_1400035B0();
	}
}
// 140023526: conditional instruction was optimized away because rdx.8!=0
// 140C3B3E0: using guessed type __int64 (__fastcall *off_140C3B3E0)();
// 140C3B3F0: using guessed type int dword_140C3B3F0;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140023400: using guessed type __int64 anonymous_0[4];

