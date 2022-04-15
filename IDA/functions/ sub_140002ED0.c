//----- (0000000140002ED0) ----------------------------------------------------
__int64 __fastcall sub_140002ED0(__int64 a1, __int64 a2)
{
	float v4; // xmm6_4
	__m128i v5; // xmm7
	__int64 v6; // rcx
	float v7; // xmm7_4
	int v8; // eax
	__int64 v9; // rsi
	float v10; // xmm9_4
	float v11; // xmm10_4
	float v12; // xmm7_4
	float v13; // xmm6_4
	__int64 v14; // rax
	__int64 v15; // r8

	v4 = (float)*(int*)(a1 + 476) - 1.0;
	v5 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 472));
	v6 = *(_QWORD*)(a1 + 440);
	LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
	if (v6)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 48i64))(v6))
		{
			if (v7 > 0.0 && v4 > 0.0)
			{
				v8 = *(_DWORD*)(a1 + 64);
				if (v8 == 4 || v8 == 6 && *(_DWORD*)(a1 + 8))
				{
					v9 = 5 * (*(unsigned int*)(a1 + 124) + 8i64);
					v10 = v7 / (float)*(int*)(a1 + 108);
					v11 = v4 / (float)*(int*)(a1 + 112);
					v12 = (float)(v7 * 0.5) / (float)*(int*)(a1 + 116);
					v13 = (float)(v4 * 0.5) / (float)*(int*)(a1 + 120);
					(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 288i64))();
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 440),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						1i64,
						*(_QWORD*)(a1 + 448),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						2i64,
						*(_QWORD*)(a1 + 456),
						0i64,
						0i64);
					if (*(_QWORD*)(a1 + 8 * v9 + 24))
						(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							3i64,
							*(_QWORD*)(a1 + 464),
							0i64,
							0i64);
					v14 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
						qword_140C65670,
						112i64,
						0i64);
					if (v14)
					{
						*(_OWORD*)v14 = xmmword_140B7B240;
						if (*(_DWORD*)(a1 + 20))
						{
							*(_OWORD*)(v14 + 16) = xmmword_140B7A5B0;
							*(_OWORD*)(v14 + 32) = xmmword_140B7A760;
							*(_OWORD*)(v14 + 48) = xmmword_140B7A8B0;
							*(_OWORD*)(v14 + 64) = xmmword_140B7B240;
						}
						else
						{
							*(_OWORD*)(v14 + 16) = xmmword_140B7A5C0;
							*(_OWORD*)(v14 + 32) = xmmword_140B7A780;
							*(_OWORD*)(v14 + 48) = xmmword_140B7A8E0;
							*(_OWORD*)(v14 + 64) = xmmword_140B7B250;
						}
						*(_QWORD*)(v14 + 80) = __PAIR64__(LODWORD(v11), LODWORD(v10));
						*(_QWORD*)(v14 + 88) = qword_140C67480;
						*(_QWORD*)(v14 + 96) = __PAIR64__(LODWORD(v13), LODWORD(v12));
						*(_QWORD*)(v14 + 104) = qword_140C67480;
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					}
					if (*(_QWORD*)(a1 + 8 * v9 + 24))
						(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
							qword_140C65670,
							1i64,
							5i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 480),
						0i64);
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670
						+ 664i64))(
							qword_140C65670,
							0xFFFFFFFFi64,
							v15,
							0i64,
							0i64,
							a2);
				}
			}
		}
	}
	return 0i64;
}
// 1400031F9: variable 'v15' is possibly undefined
// 140B7A5B0: using guessed type __int128 xmmword_140B7A5B0;
// 140B7A5C0: using guessed type __int128 xmmword_140B7A5C0;
// 140B7A760: using guessed type __int128 xmmword_140B7A760;
// 140B7A780: using guessed type __int128 xmmword_140B7A780;
// 140B7A8B0: using guessed type __int128 xmmword_140B7A8B0;
// 140B7A8E0: using guessed type __int128 xmmword_140B7A8E0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B250: using guessed type __int128 xmmword_140B7B250;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C67480: using guessed type __int64 qword_140C67480;

