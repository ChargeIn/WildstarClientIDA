//----- (0000000140014070) ----------------------------------------------------
__int64 __fastcall sub_140014070(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	__int64 v6; // r15
	__int64 i; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int128* p_TlsValue_8; // rdx
	int v11; // esi
	__int64 v12; // rax
	__int128* v13; // rdx
	__int64 v14; // rax
	__int128* v15; // rdx
	__int64 v16; // rax
	__m128* v17; // rsi
	unsigned int* v18; // rax
	__int64 v19; // r8
	__int64 v20; // rcx
	int v21; // ebx
	__int64* v22; // rcx
	_QWORD* v23; // rbx
	__int64 v24; // rcx
	int v25; // eax
	int v26; // eax
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int128 TlsValue_8; // [rsp+38h] [rbp-D0h] BYREF
	LPVOID Value; // [rsp+48h] [rbp-C0h]
	__int128 v33; // [rsp+58h] [rbp-B0h] BYREF
	LPVOID v34; // [rsp+68h] [rbp-A0h]
	__int64(__fastcall * *v35)(); // [rsp+78h] [rbp-90h] BYREF
	const wchar_t* v36; // [rsp+80h] [rbp-88h]
	LPVOID lpTlsValue; // [rsp+88h] [rbp-80h]
	const wchar_t* v38; // [rsp+90h] [rbp-78h]
	__int128 v39; // [rsp+98h] [rbp-70h] BYREF
	LPVOID v40[2]; // [rsp+A8h] [rbp-60h]
	__int64 v41[4]; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v42[2]; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v43; // [rsp+178h] [rbp+70h] BYREF
	__int64 v44; // [rsp+188h] [rbp+80h] BYREF
	__int64 v45; // [rsp+190h] [rbp+88h] BYREF

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v3 = v2;
	if (*(_DWORD*)(a1 + 5660) != *(_DWORD*)(v2 + 8) || *(_DWORD*)(a1 + 5664) != *(_DWORD*)(v2 + 12))
	{
		v4 = (_QWORD*)(a1 + 5632);
		v5 = 3i64;
		do
		{
			if (*v4)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
				*v4 = 0i64;
			}
			++v4;
			--v5;
		} while (v5);
		*(_DWORD*)(a1 + 5656) = 0;
		*(_DWORD*)(a1 + 5660) = *(_DWORD*)(v3 + 8);
		*(_DWORD*)(a1 + 5664) = *(_DWORD*)(v3 + 12);
	}
	v6 = 0i64;
	v43 = 0i64;
	v44 = 0i64;
	if (*(_QWORD*)(a1 + 5560))
	{
		for (i = *(_QWORD*)(a1 + 5552); i; i = *(_QWORD*)(i + 32))
		{
			if (*(_DWORD*)(i + 40) != 4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
				if (*(_DWORD*)(i + 40) || i != *(_QWORD*)(a1 + 5560))
				{
					v11 = sub_140015D00((unsigned int*)a1, &v43);
					if (v11 < 0)
						goto LABEL_69;
					v9 = qword_140C65670;
					LODWORD(TlsValue_8) = 1;
					*((_QWORD*)&TlsValue_8 + 1) = v43;
					HIDWORD(Value) = 0;
					p_TlsValue_8 = &TlsValue_8;
				}
				else
				{
					v8 = *(_QWORD*)(a1 + 5856);
					v9 = qword_140C65670;
					v43 = 0i64;
					if (v8)
					{
						LODWORD(v33) = 0;
						*((_QWORD*)&v33 + 1) = v8;
						p_TlsValue_8 = &v33;
					}
					else
					{
						p_TlsValue_8 = (__int128*)&unk_140C79A80;
					}
				}
				(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)v9 + 520i64))(
					v9,
					p_TlsValue_8,
					&unk_140C3FE88,
					&unk_140C3FE88,
					&unk_140C3FE88);
				v12 = *(_QWORD*)(a1 + 5856);
				if (v12)
				{
					LODWORD(v33) = 0;
					*((_QWORD*)&v33 + 1) = v12;
					v13 = &v33;
				}
				else
				{
					v13 = (__int128*)&unk_140C79A80;
				}
				(*(void(__fastcall**)(__int64, __int128*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
					qword_140C65670,
					v13,
					1i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
				v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)i + 56i64))(i);
				if (v11 < 0)
					goto LABEL_69;
				++* (_DWORD*)(i + 20);
				v14 = v43;
				if (v43)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
					v14 = v43;
				}
				if (*(_DWORD*)(i + 40))
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
					if (i == *(_QWORD*)(a1 + 5560))
					{
						v16 = *(_QWORD*)(a1 + 5856);
						v44 = 0i64;
						if (v16)
						{
							LODWORD(v33) = 0;
							*((_QWORD*)&v33 + 1) = v16;
							v15 = &v33;
						}
						else
						{
							v15 = (__int128*)&unk_140C79A80;
						}
					}
					else
					{
						v11 = sub_140015D00((unsigned int*)a1, &v44);
						if (v11 < 0)
							goto LABEL_69;
						LODWORD(TlsValue_8) = 1;
						HIDWORD(Value) = 0;
						*((_QWORD*)&TlsValue_8 + 1) = v44;
						v15 = &TlsValue_8;
					}
					(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
						qword_140C65670,
						v15,
						&unk_140C3FE88,
						&unk_140C3FE88,
						&unk_140C3FE88);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
					(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
						qword_140C65670,
						&unk_140C3FE88,
						1i64);
					if (!*(_QWORD*)(a1 + 5624))
					{
						v11 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
							qword_140C65670,
							L"Shaders\\ScreenPS.sho",
							a1 + 5624);
						if (v11 < 0)
						{
							*((_QWORD*)&TlsValue_8 + 1) = 0i64;
							*(_QWORD*)&TlsValue_8 = &off_140B5E648;
							Value = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &TlsValue_8);
							v33 = TlsValue_8;
							*(_QWORD*)&v39 = &off_140B5E648;
							*((_QWORD*)&v39 + 1) = L"Result";
							v34 = Value;
							v40[0] = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &v39);
							*(_QWORD*)&v39 = &off_140B5E640;
							LODWORD(v40[1]) = v11;
							v35 = &off_140B5E648;
							v36 = L"FileName";
							v42[0] = v39;
							v42[1] = *(_OWORD*)v40;
							lpTlsValue = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &v35);
							v41[1] = (__int64)v36;
							v38 = L"Shaders\\ScreenPS.sho";
							v41[3] = (__int64)L"Shaders\\ScreenPS.sho";
							v35 = &off_140B5E638;
							v41[0] = (__int64)&off_140B5E638;
							v45 = 0x141CDABE0i64;
							v41[2] = (__int64)lpTlsValue;
							v21 = sub_1401971E0(&dword_140C89EF0, 22, &v45, v41, v42, &v33);
							v35 = &off_140B5E648;
							TlsSetValue(dwTlsIndex, lpTlsValue);
							*(_QWORD*)&v39 = &off_140B5E648;
							TlsSetValue(dwTlsIndex, v40[0]);
							*(_QWORD*)&TlsValue_8 = &off_140B5E648;
							TlsSetValue(dwTlsIndex, Value);
							if (v21)
								DebugBreak();
							goto LABEL_69;
						}
					}
					v17 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
						qword_140C65670,
						32i64,
						0i64);
					if (v17)
					{
						v18 = (unsigned int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 560i64))(qword_140C65670);
						v17->m128_f32[0] = fmaxf(0.0, fminf(*(float*)&dword_140C3ADB8 * *(float*)(i + 16), 1.0));
						v17[1] = _mm_rcp_ps(
							_mm_cvtepi32_ps(
								_mm_unpacklo_epi32(
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v18), _mm_cvtsi32_si128(0)),
									_mm_unpacklo_epi32(_mm_cvtsi32_si128(v18[1]), _mm_cvtsi32_si128(0)))));
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					}
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						*(_QWORD*)(a1 + 5624),
						*(unsigned int*)(i + 40));
					(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						v6,
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						1i64,
						v43);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
						qword_140C65670,
						0xFFFFFFFFi64,
						v19,
						0i64,
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						0i64,
						0i64,
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						1i64,
						0i64);
					if (v44)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
				}
				else
				{
					v44 = v14;
					v43 = 0i64;
				}
				if (v6)
					*(_QWORD*)(a1 + 8i64 * (unsigned int)-- * (_DWORD*)(a1 + 5656) + 5632) = v6;
				v20 = v43;
				if (v43)
					*(_QWORD*)(a1 + 8i64 * (unsigned int)-- * (_DWORD*)(a1 + 5656) + 5632) = v20;
				v6 = v44;
				v43 = 0i64;
				v44 = 0i64;
				if (i == *(_QWORD*)(a1 + 5560))
					break;
			}
		}
	}
	else
	{
		TlsValue_8 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
			qword_140C65670,
			1i64,
			&TlsValue_8);
	}
	v22 = *(__int64**)(a1 + 336);
	if (v22)
		sub_140053550(v22, *(_DWORD*)(a1 + 344));
	if (*(_QWORD*)(a1 + 5560) && (v23 = *(_QWORD**)(a1 + 5552)) != 0i64)
	{
		while (1)
		{
			v11 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v23 + 64i64))(v23, *(unsigned int*)(a1 + 344));
			if (v11 < 0)
				break;
			if (v23 != *(_QWORD**)(a1 + 5560))
			{
				v23 = (_QWORD*)v23[4];
				if (v23)
					continue;
			}
			goto LABEL_55;
		}
	}
	else
	{
	LABEL_55:
		v24 = *(_QWORD*)(a1 + 5576);
		if (v24)
		{
			v25 = dword_140C3AE50;
			if (*(_DWORD*)qword_140C63750 < dword_140C3AE50)
				v25 = *(_DWORD*)qword_140C63750;
			if (algn_140C3AE54[v25 + 12])
			{
				v26 = dword_140C3AE90;
				if (*(_DWORD*)qword_140C63750 < dword_140C3AE90)
					v26 = *(_DWORD*)qword_140C63750;
				if (*((_DWORD*)&qword_140C3AEA0 + v26) != 94537827)
					sub_140054550(v24);
			}
		}
		if (*(_DWORD*)(a1 + 5808))
		{
			sub_1400180F0(a1);
			*(_DWORD*)(a1 + 5808) = 0;
		}
		if (*(_QWORD*)(a1 + 5856))
		{
			(*(void(__fastcall**)(__int64, void*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
				qword_140C65670,
				&unk_140C79A80,
				&unk_140C3FE88,
				&unk_140C3FE88,
				&unk_140C3FE88);
			(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
				qword_140C65670,
				&unk_140C79A80,
				1i64);
			TlsValue_8 = xmmword_140B7B240;
			(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
				qword_140C65670,
				1i64,
				&TlsValue_8);
			v27 = *(_QWORD*)(a1 + 5856);
			if (v27)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
				*(_QWORD*)(a1 + 5856) = 0i64;
			}
		}
		v11 = 0;
	}
LABEL_69:
	if (v6)
		*(_QWORD*)(a1 + 8i64 * (unsigned int)-- * (_DWORD*)(a1 + 5656) + 5632) = v6;
	v28 = v43;
	if (v43)
		*(_QWORD*)(a1 + 8i64 * (unsigned int)-- * (_DWORD*)(a1 + 5656) + 5632) = v28;
	v29 = v44;
	if (v44)
		*(_QWORD*)(a1 + 8i64 * (unsigned int)-- * (_DWORD*)(a1 + 5656) + 5632) = v29;
	return (unsigned int)v11;
}
// 18: found interdependent unknown calls
// 1400144E9: variable 'v19' is possibly undefined
// 1409E04F0: using guessed type wchar_t aShadersScreenp[21];
// 1409E0528: using guessed type wchar_t aShadersScreenp_0[21];
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C3ADB8: using guessed type int dword_140C3ADB8;
// 140C3AE50: using guessed type int dword_140C3AE50;
// 140C3AE90: using guessed type int dword_140C3AE90;
// 140C3AEA0: using guessed type __int64 qword_140C3AEA0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C89EF0: using guessed type _DWORD dword_140C89EF0;

