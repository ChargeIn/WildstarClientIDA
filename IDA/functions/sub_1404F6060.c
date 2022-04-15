//----- (00000001404F6060) ----------------------------------------------------
void __fastcall sub_1404F6060(__int64 a1, float a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	float v6; // xmm2_4
	int v7; // eax
	float v8; // xmm1_4
	float v9; // xmm0_4
	float v10; // xmm0_4
	float v11; // xmm1_4
	_QWORD* v12; // rcx
	_QWORD* v13; // rcx
	_QWORD* v14; // rsi
	__int64 v15; // rcx
	int v16; // ebx
	_DWORD* v17; // rax
	_QWORD* v18; // rcx
	_QWORD* v19; // rsi
	__int64 v20; // rcx
	int v21; // ebx
	_DWORD* v22; // rax
	int v23; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-29h] BYREF
	__int128 v25; // [rsp+60h] [rbp-21h]
	__int64(__fastcall * *v26)(); // [rsp+78h] [rbp-9h] BYREF
	__int128 v27; // [rsp+80h] [rbp-1h]
	__int64 v28; // [rsp+E8h] [rbp+67h] BYREF
	__int64 v29; // [rsp+F8h] [rbp+77h] BYREF

	if ((*(_BYTE*)(a1 + 28) & 1) == 0)
		return;
	if ((*(float*)(a1 + 648) <= 0.0 || (v4 = *(_QWORD*)(a1 + 16)) != 0 && !sub_1400D1A60(v4))
		&& !*(_DWORD*)(a1 + 1040))
	{
		return;
	}
	v5 = *(_QWORD*)(a1 + 2328);
	if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v6 = *(float*)(a1 + 2284);
	if (v6 > 0.0)
	{
		v7 = *(_DWORD*)(a1 + 2276);
		if (v7 || *(_DWORD*)(a1 + 2280))
		{
			if (*(_QWORD*)(a1 + 2184))
			{
				if (v7)
					v8 = -1.6;
				else
					v8 = 1.6;
				if ((float)(v6 - a2) >= 0.0)
				{
					*(float*)(a1 + 2284) = v6 - a2;
					v10 = *(float*)(a1 + 2288) - (float)(v8 * a2);
				}
				else
				{
					v9 = *(float*)(a1 + 2288);
					*(_QWORD*)(a1 + 2276) = 0i64;
					*(_DWORD*)(a1 + 2284) = 0;
					v10 = v9 - (float)((float)(a2 - v6) * v8);
				}
				v11 = *(float*)&dword_140C460A8;
				*(float*)(a1 + 2288) = v10;
				*(float*)(a1 + 2288) = sub_1408FDE98(v10, v11 * 2.0);
			}
		}
	}
	if ((*(_BYTE*)(a1 + 664) & 4) != 0)
	{
		if (*(_DWORD*)(a1 + 2112))
		{
			v12 = *(_QWORD**)(a1 + 792);
			if (v12)
			{
				if (*v12 && sub_1401099E0((__int64)v12))
				{
					sub_1404FF280(
						(unsigned __int64*)(a1 + 2152),
						*(_QWORD*)(a1 + 792),
						*(_DWORD*)(a1 + 1064),
						*(_DWORD*)(a1 + 1068));
					*(_DWORD*)(a1 + 2112) = 0;
				}
			}
		}
	}
	if (*(_DWORD*)(a1 + 2104))
	{
		v13 = *(_QWORD**)(a1 + 2088);
		if (v13 && *v13)
		{
			if (!sub_1401099E0((__int64)v13))
				goto LABEL_40;
			sub_1404FF280(
				(unsigned __int64*)(a1 + 2120),
				*(_QWORD*)(a1 + 2088),
				*(_DWORD*)(a1 + 1064),
				*(_DWORD*)(a1 + 1068));
		}
		else
		{
			v14 = (_QWORD*)(a1 + 2120);
			v15 = *(_QWORD*)(a1 + 2120);
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				*v14 = 0i64;
			}
			if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				1i64,
				1i64,
				1i64,
				0,
				1,
				0,
				256,
				0,
				a1 + 2120) < 0)
			{
				TlsValue = &off_140B5E648;
				*(_QWORD*)&v25 = 0i64;
				*((_QWORD*)&v25 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v26 = TlsValue;
				v28 = 0x141E090F0i64;
				v27 = v25;
				v16 = sub_140197770(13, &v28, &v26);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v25 + 1));
				if (v16)
					DebugBreak();
			}
			if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 48i64))(*v14))
			{
				v17 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(*(_QWORD*)*v14 + 72i64))(
					*v14,
					0i64,
					&v28,
					2i64);
				if (v17)
				{
					*v17 = 0;
					(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v14 + 80i64))(*v14, 0i64);
				}
			}
		}
		*(_DWORD*)(a1 + 2104) = 0;
	}
LABEL_40:
	if (*(_DWORD*)(a1 + 2108))
	{
		v18 = *(_QWORD**)(a1 + 2096);
		if (!v18 || !*v18)
		{
			v19 = (_QWORD*)(a1 + 2136);
			v20 = *(_QWORD*)(a1 + 2136);
			if (v20)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				*v19 = 0i64;
			}
			if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				1i64,
				1i64,
				1i64,
				0,
				1,
				0,
				256,
				0,
				a1 + 2136) < 0)
			{
				TlsValue = &off_140B5E648;
				*(_QWORD*)&v25 = 0i64;
				*((_QWORD*)&v25 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v26 = TlsValue;
				v29 = 0x141E09090i64;
				v27 = v25;
				v21 = sub_140197770(13, &v29, &v26);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v25 + 1));
				if (v21)
					DebugBreak();
			}
			if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v19 + 48i64))(*v19))
			{
				v22 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(*(_QWORD*)*v19 + 72i64))(
					*v19,
					0i64,
					&v29,
					2i64);
				if (v22)
				{
					*v22 = -16777216;
					(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v19 + 80i64))(*v19, 0i64);
				}
			}
			goto LABEL_53;
		}
		if (sub_1401099E0((__int64)v18))
		{
			sub_1404FF280(
				(unsigned __int64*)(a1 + 2136),
				*(_QWORD*)(a1 + 2096),
				*(_DWORD*)(a1 + 1064),
				*(_DWORD*)(a1 + 1068));
		LABEL_53:
			*(_DWORD*)(a1 + 2108) = 0;
		}
	}
	v23 = dword_140C3C570;
	if (*(_DWORD*)qword_140C63750 < dword_140C3C570)
		v23 = *(_DWORD*)qword_140C63750;
	if (*((_BYTE*)&dword_140C3C580 + v23) && (*(_DWORD*)(a1 + 1044) || *(_DWORD*)(a1 + 1040)))
	{
		sub_1404FE4A0(a1);
		*(_DWORD*)(a1 + 1040) = 1;
	}
	if (!*(_DWORD*)(a1 + 2224))
	{
		if (*(_QWORD*)(a1 + 2184))
			sub_1404FE990(a1);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C3C570: using guessed type int dword_140C3C570;
// 140C3C580: using guessed type int dword_140C3C580;
// 140C460A8: using guessed type int dword_140C460A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;

