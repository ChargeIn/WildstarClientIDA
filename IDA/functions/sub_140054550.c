//----- (0000000140054550) ----------------------------------------------------
__int64 __fastcall sub_140054550(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rdi
	int v4; // eax
	__int128 v5; // xmm0
	__int128 v6; // xmm2
	float v7; // xmm6_4
	__int128 v8; // xmm0
	__int64 v9; // rax
	__int128 v10; // xmm12
	__m128 v11; // xmm6
	float v12; // xmm2_4
	__m128 v13; // xmm9
	float v14; // xmm10_4
	int v15; // xmm0_4
	int v17; // ebx
	__int128 TlsValue; // [rsp+50h] [rbp-B0h] BYREF
	LPVOID Value; // [rsp+60h] [rbp-A0h]
	__int128 v20; // [rsp+70h] [rbp-90h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+80h] [rbp-80h]
	__int64 v22[2]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v23; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v24; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v25; // [rsp+C0h] [rbp-40h]
	__int128 v26; // [rsp+D0h] [rbp-30h] BYREF
	LPVOID v27; // [rsp+E0h] [rbp-20h]
	__int128 v28[4]; // [rsp+F0h] [rbp-10h] BYREF
	__m128 v29[4]; // [rsp+130h] [rbp+30h] BYREF
	int v30; // [rsp+170h] [rbp+70h]
	int v31[2]; // [rsp+180h] [rbp+80h] BYREF
	__int64 v32; // [rsp+188h] [rbp+88h]
	float v33; // [rsp+190h] [rbp+90h]
	int v34; // [rsp+194h] [rbp+94h]
	__int64 v35; // [rsp+198h] [rbp+98h]
	__int128 v36; // [rsp+1A0h] [rbp+A0h]
	__int128 v37; // [rsp+1B0h] [rbp+B0h]
	__m128* v38[10]; // [rsp+1C0h] [rbp+C0h] BYREF

	v1 = *(_QWORD*)a1;
	LODWORD(v23) = 0;
	if (!(*(unsigned int(__fastcall**)(__int64, __int128*))(v1 + 24))(a1, &v23)
		|| !(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 72i64))(*(_QWORD*)(a1 + 24)))
	{
		return 0i64;
	}
	sub_140054A90(a1);
	if (*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)&v25 = 0i64;
		*(_QWORD*)&v24 = 0i64;
		v3 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 584i64))();
		v4 = *(_DWORD*)(v3 + 12);
		v5 = 0i64;
		*(float*)&v5 = (float)*(int*)(v3 + 8) * 0.125;
		v6 = v5;
		*(float*)&v5 = *(float*)(a1 + 52) - *(float*)(a1 + 36);
		*(float*)&v6 = fmaxf(*(float*)&v6, (float)(*(float*)(a1 + 48) - *(float*)(a1 + 32)) * 0.85000002);
		v23 = v6;
		v7 = *(float*)&v5 * 2.0;
		v8 = 0i64;
		*(float*)&v8 = (float)v4;
		v9 = *(_QWORD*)qword_140C65680;
		*(float*)&v8 = *(float*)&v8 * 0.125;
		v10 = v8;
		*(float*)&v10 = fmaxf(*(float*)&v8, v7);
		TlsValue = v10;
		(*(void(__fastcall**)(__int64))(v9 + 56))(qword_140C65680);
		v11 = (__m128)v10;
		v11.m128_f32[0] = *(float*)&v10 * 0.5;
		if ((float)(*(float*)&v10 * 0.5) < (float)((float)((float)(*(float*)(a1 + 48) - *(float*)(a1 + 32)) * 0.75)
			+ (float)*(int*)(v3 + 12)))
		{
			v12 = (float)*(int*)(v3 + 8);
			do
			{
				v13 = 0i64;
				if (v12 > 0.0)
				{
					v14 = sub_1408FE3D0(COERCE_DOUBLE(3209236443i64));
					*(float*)&v15 = sub_1408FC950(COERCE_DOUBLE(3209236443i64));
					v22[0] = (__int64)v31;
					v22[1] = (__int64)v28;
					do
					{
						v31[0] = v15;
						v30 = -1085730853;
						v32 = 0i64;
						v35 = 0i64;
						*(float*)&v31[1] = v14;
						v33 = -v14;
						v34 = v15;
						v28[0] = xmmword_140C78410;
						v28[1] = xmmword_140C78420;
						v38[0] = (__m128*)v31;
						v38[1] = (__m128*)v28;
						v28[2] = xmmword_140C78430;
						v37 = xmmword_140C78440;
						v36 = xmmword_140B7A700;
						v28[3] = (__int128)_mm_unpacklo_ps(
							_mm_unpacklo_ps(v13, (__m128)0i64),
							_mm_unpacklo_ps(v11, (__m128)0x3F800000u));
						sub_1401AFB10(v38, v29);
						(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 80i64))(qword_140C65680, v29);
						v20 = xmmword_140B7ABE0;
						v26 = xmmword_140B7ABB0;
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
							qword_140C65680,
							*(_QWORD*)(a1 + 24),
							0i64,
							-1i64,
							&v24,
							256,
							&v26,
							&v20,
							1);
						v13.m128_f32[0] = v13.m128_f32[0] + *(float*)&v23;
						v12 = (float)*(int*)(v3 + 8);
					} while (v13.m128_f32[0] < v12);
					LODWORD(v10) = TlsValue;
				}
				v11.m128_f32[0] = v11.m128_f32[0] + *(float*)&v10;
			} while (v11.m128_f32[0] < (float)((float)((float)(*(float*)(a1 + 48) - *(float*)(a1 + 32)) * 0.75)
				+ (float)*(int*)(v3 + 12)));
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
		return 0i64;
	}
	else
	{
		*((_QWORD*)&TlsValue + 1) = 0i64;
		*(_QWORD*)&TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26 = TlsValue;
		*(_QWORD*)&v20 = &off_140B5E648;
		*((_QWORD*)&v20 + 1) = L"Result";
		v27 = Value;
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v20);
		LODWORD(lpTlsValue[1]) = 0;
		*(_QWORD*)&v20 = &off_140B5E640;
		v25 = *(_OWORD*)lpTlsValue;
		v22[0] = 0x141D0BD58i64;
		v24 = v20;
		v17 = sub_1401971E0(&dword_140C8A034, 22, v22, &v24, &v26);
		*(_QWORD*)&v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		*(_QWORD*)&TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v17)
			DebugBreak();
		return 2147500037i64;
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7ABB0: using guessed type __int128 xmmword_140B7ABB0;
// 140B7ABE0: using guessed type __int128 xmmword_140B7ABE0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 140C8A034: using guessed type _DWORD dword_140C8A034;
// 140054550: using guessed type __m128 var_190[4];

