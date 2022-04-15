//----- (000000014025A590) ----------------------------------------------------
__int64 __fastcall sub_14025A590(__int64 a1)
{
	int v2; // ebx
	int v4; // eax
	int v5; // eax
	int v6; // edx
	int v7; // eax
	__m128 v8; // xmm2
	__m128 v9; // xmm3
	int v10; // eax
	int v11; // edx
	int v12; // eax
	__m128 v13; // xmm2
	__m128 v14; // xmm3
	__int64 v15; // r8
	__int64 v16; // r8
	_OWORD TlsValue[2]; // [rsp+30h] [rbp-40h] BYREF
	__int64 v18; // [rsp+50h] [rbp-20h] BYREF
	__int128 v19; // [rsp+58h] [rbp-18h]
	__int64 v20; // [rsp+90h] [rbp+20h] BYREF

	if (*(_DWORD*)(a1 + 44))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, 23i64);
		*(_DWORD*)(a1 + 44) = 0;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		if (*(int*)(a1 + 40) <= 0)
		{
			v4 = dword_140C40510;
			if (*(_DWORD*)qword_140C63750 < dword_140C40510)
				v4 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C40520 + v4))
			{
				if (*(_DWORD*)(a1 + 2336) == *(_DWORD*)(a1 + 2312) && *(_DWORD*)(a1 + 2340) == *(_DWORD*)(a1 + 2316))
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 1648),
						0i64,
						0i64);
					v5 = dword_140C40410;
					if (*(_DWORD*)qword_140C63750 < dword_140C40410)
						v5 = *(_DWORD*)qword_140C63750;
					v6 = 3 * dword_140C40420[v5];
					v7 = dword_140C404B0;
					if (*(_DWORD*)qword_140C63750 < dword_140C404B0)
						v7 = *(_DWORD*)qword_140C63750;
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2280),
						(unsigned int)(dword_140C404C0[v7] + 2 * v6));
					v8 = (__m128)0x3F800000u;
					v9 = (__m128)0x3F800000u;
					v9.m128_f32[0] = 1.0 / (float)*(int*)(a1 + 1736);
					v8.m128_f32[0] = 1.0 / (float)*(int*)(a1 + 1740);
					TlsValue[0] = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, (__m128)0i64), _mm_unpacklo_ps(v8, (__m128)0i64));
					(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 384i64))(
						qword_140C65670,
						16i64,
						TlsValue);
					(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670
						+ 664i64))(
							qword_140C65670,
							0xFFFFFFFFi64,
							*(_QWORD*)qword_140C65670,
							a1 + 1736,
							a1 + 1744,
							0i64);
				}
				else
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
					*(_QWORD*)&v19 = *(_QWORD*)(a1 + 1656);
					LODWORD(v18) = 1;
					HIDWORD(v19) = 0;
					(*(void(__fastcall**)(__int64, __int64*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
						qword_140C65670,
						&v18,
						&unk_140C3FE88,
						&unk_140C3FE88,
						&unk_140C3FE88);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 1648),
						0i64,
						0i64);
					v10 = dword_140C40410;
					if (*(_DWORD*)qword_140C63750 < dword_140C40410)
						v10 = *(_DWORD*)qword_140C63750;
					v11 = 3 * dword_140C40420[v10];
					v12 = dword_140C404B0;
					if (*(_DWORD*)qword_140C63750 < dword_140C404B0)
						v12 = *(_DWORD*)qword_140C63750;
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2280),
						(unsigned int)(dword_140C404C0[v12] + 2 * v11));
					v13 = (__m128)0x3F800000u;
					v14 = (__m128)0x3F800000u;
					v14.m128_f32[0] = 1.0 / (float)*(int*)(a1 + 1736);
					v13.m128_f32[0] = 1.0 / (float)*(int*)(a1 + 1740);
					TlsValue[0] = _mm_unpacklo_ps(_mm_unpacklo_ps(v14, (__m128)0i64), _mm_unpacklo_ps(v13, (__m128)0i64));
					(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 384i64))(
						qword_140C65670,
						16i64,
						TlsValue);
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670
						+ 664i64))(
							qword_140C65670,
							0xFFFFFFFFi64,
							v15,
							a1 + 1736,
							a1 + 1744,
							0i64);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						*(_QWORD*)(a1 + 1656),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 2104),
						1i64);
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670
						+ 664i64))(
							qword_140C65670,
							0xFFFFFFFFi64,
							v16,
							a1 + 1736,
							a1 + 1744,
							0i64);
				}
			}
			else
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(a1 + 1648),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 2104),
					1i64);
				(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
					qword_140C65670,
					0xFFFFFFFFi64,
					*(_QWORD*)qword_140C65670,
					a1 + 1736,
					a1 + 1744,
					0i64);
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
		}
		return 0i64;
	}
	else
	{
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		*((_QWORD*)&TlsValue[0] + 1) = 0i64;
		*(_QWORD*)&TlsValue[1] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v18 = *(_QWORD*)&TlsValue[0];
		v20 = 0x141DDF4D0i64;
		v19 = *(_OWORD*)((char*)TlsValue + 8);
		v2 = sub_1401971E0(&dword_140C8A29C, 14, &v20, &v18);
		*(_QWORD*)&TlsValue[0] = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[1]);
		if (v2)
			DebugBreak();
		return 2147500037i64;
	}
}
// 14025AAC6: variable 'v15' is possibly undefined
// 14025AB70: variable 'v16' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C40410: using guessed type int dword_140C40410;
// 140C40420: using guessed type int dword_140C40420[16];
// 140C404B0: using guessed type int dword_140C404B0;
// 140C404C0: using guessed type int dword_140C404C0[];
// 140C40510: using guessed type int dword_140C40510;
// 140C40520: using guessed type int dword_140C40520;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A29C: using guessed type _DWORD dword_140C8A29C;

