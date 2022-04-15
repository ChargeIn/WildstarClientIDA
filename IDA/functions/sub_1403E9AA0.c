//----- (00000001403E9AA0) ----------------------------------------------------
__int64 __fastcall sub_1403E9AA0(__int64 a1)
{
	int v2; // r8d
	int v3; // eax
	__int128 v4; // xmm0
	int v5; // eax
	__int128 v6; // xmm0
	int v7; // eax
	__int128 v8; // xmm0
	int v9; // eax
	__int128 v10; // xmm0
	int v11; // eax
	__int128 v12; // xmm0
	int v13; // eax
	int v14; // eax
	__int64 v15; // rcx
	__m128 v16; // xmm0
	__int64 v17; // rax
	int v18; // edx
	__int64 v19; // rax
	__int64 v20; // rbx
	int v21; // ecx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	int v28; // eax
	__int64 v29; // rsi
	__m128* v30; // rdx
	__int64 v31; // rbx
	__m128* v32; // rax
	__int64 v33; // r9
	__int64 v34; // r8
	__int64 v35; // r10
	__int64 v36; // r11
	__int64 result; // rax
	__int64 v38; // rdx
	__int64 v39; // rcx
	__m128* v40; // r8
	__m128 v41; // xmm1
	__int64 v42; // rax
	__int64 v43; // rdx
	__int64 v44; // rcx
	__m128* v45; // r8
	__int64 v46; // rcx
	__m128 v47; // [rsp+40h] [rbp-C0h] BYREF
	int v48[4]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v49; // [rsp+60h] [rbp-A0h]
	__m128 v50; // [rsp+70h] [rbp-90h] BYREF
	__m128 v51[15]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v52; // [rsp+170h] [rbp+70h]
	int v53; // [rsp+178h] [rbp+78h]
	__m128 v54; // [rsp+180h] [rbp+80h]
	__int128 v55; // [rsp+190h] [rbp+90h]
	__int128 v56; // [rsp+1A0h] [rbp+A0h]
	__int64 v57; // [rsp+1D8h] [rbp+D8h]
	__int64(__fastcall * v58)(__int64); // [rsp+1E0h] [rbp+E0h]
	__int64 v59; // [rsp+1E8h] [rbp+E8h]
	void(__fastcall * v60)(__int64); // [rsp+1F0h] [rbp+F0h]
	__int64 v61; // [rsp+238h] [rbp+138h]
	__int64(__fastcall * v62)(_QWORD*, __int64, __int64, __int64); // [rsp+240h] [rbp+140h]
	int v63; // [rsp+248h] [rbp+148h]
	int v64; // [rsp+24Ch] [rbp+14Ch]
	__m128 v65[6]; // [rsp+280h] [rbp+180h] BYREF

	qword_140C7CF80 += -16 * ((qword_140C7CF80 - qword_140C7CF78) >> 4);
	sub_1407E4830(v48, 0i64, 0x230ui64);
	v49 = xmmword_140B7B310;
	sub_14054A810(&v50);
	sub_14054A460(v51);
	v2 = dword_140C4CE40;
	v3 = dword_140C4CE40;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v3 = *(_DWORD*)qword_140C63750;
	v4 = xmmword_140C7D7D0[10 * *((unsigned int*)&qword_140C4CE50 + v3)];
	v5 = dword_140C4CE40;
	v51[1] = (__m128)v4;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v5 = *(_DWORD*)qword_140C63750;
	v6 = xmmword_140C7D810[10 * *((unsigned int*)&qword_140C4CE50 + v5)];
	v7 = dword_140C4CE40;
	v51[2] = (__m128)v6;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v7 = *(_DWORD*)qword_140C63750;
	v8 = xmmword_140C7D790[10 * *((unsigned int*)&qword_140C4CE50 + v7)];
	v9 = dword_140C4CE40;
	v51[3] = (__m128)v8;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v9 = *(_DWORD*)qword_140C63750;
	v10 = xmmword_140C7D7F0[10 * *((unsigned int*)&qword_140C4CE50 + v9)];
	v11 = dword_140C4CE40;
	v51[4] = (__m128)v10;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v11 = *(_DWORD*)qword_140C63750;
	v12 = xmmword_140C7D7C0[10 * *((unsigned int*)&qword_140C4CE50 + v11)];
	v13 = dword_140C4CE40;
	v51[5] = (__m128)v12;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v13 = *(_DWORD*)qword_140C63750;
	v51[6] = (__m128)xmmword_140C7D7A0[10 * *((unsigned int*)&qword_140C4CE50 + v13)];
	v14 = dword_140C4CE40;
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v14 = *(_DWORD*)qword_140C63750;
	v51[7] = (__m128)xmmword_140C7D7B0[10 * *((unsigned int*)&qword_140C4CE50 + v14)];
	if (*(_DWORD*)qword_140C63750 < dword_140C4CE40)
		v2 = *(_DWORD*)qword_140C63750;
	v15 = *(_QWORD*)(a1 + 25832);
	v51[8] = (__m128)xmmword_140C7D800[10 * *((unsigned int*)&qword_140C4CE50 + v2)];
	v16 = *(__m128*)(*(__int64(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)v15 + 512i64))(v15, &v47, 60i64);
	v17 = *(_QWORD*)(a1 + 29504);
	v51[11] = v16;
	v55 = xmmword_140B7AC00;
	v56 = xmmword_140B7AC00;
	v54 = _mm_mul_ps((__m128)xmmword_140C77830, (__m128)xmmword_140B7B2C0);
	if (*(_QWORD*)(v17 + 2896))
		*(_DWORD*)(a1 + 25824) = 0;
	v18 = *(_DWORD*)(a1 + 25824);
	if (v18)
	{
		v19 = sub_1403D90D0(a1, v18);
		v20 = v19;
		if (v19)
		{
			v21 = dword_140C450B0;
			if (*(_DWORD*)qword_140C63750 < dword_140C450B0)
				v21 = *(_DWORD*)qword_140C63750;
			if (byte_140C450C0[v21])
			{
				v22 = *(_QWORD*)(v19 + 6408);
				if (*(_BYTE*)(v22 + 10))
				{
					if ((*(_DWORD*)(v19 + 44) & 0x200000) == 0 || *(_DWORD*)v22 != 101)
					{
						if (sub_14047BE40(v19) || sub_14047BF00(v20))
						{
							v24 = sub_14047B6D0(v20);
							v23 = *(_QWORD*)(v24 + 5872);
							if (!v23)
								v23 = *(_QWORD*)(v24 + 5880);
						}
						else
						{
							v23 = *(_QWORD*)(v20 + 5872);
							if (!v23)
								v23 = *(_QWORD*)(v20 + 5880);
						}
						v52 = v23;
						if (v23)
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v23 + 248i64))(v23, 1i64);
					}
				}
			}
		}
	}
	v25 = *(_QWORD*)(a1 + 120);
	if (!v25 || !*(_DWORD*)(v25 + 592))
		v53 = *(_DWORD*)(a1 + 29640);
	v26 = sub_14001C280(a1);
	v58 = sub_1403F7DA0;
	v57 = v26;
	v27 = sub_14001C280(a1);
	v60 = sub_1403A1AA0;
	v59 = v27;
	v61 = sub_14001C280(a1);
	v62 = sub_1403EBC30;
	v28 = dword_140C463C0;
	if (*(_DWORD*)qword_140C63750 < dword_140C463C0)
		v28 = *(_DWORD*)qword_140C63750;
	v63 = *((_DWORD*)&xmmword_140C463D0 + v28);
	v64 = dword_1409D6900[*(unsigned int*)(qword_140C635F0 + 5800)];
	*(_DWORD*)(a1 + 25800) = *(_DWORD*)(a1 + 25796);
	if (*(_DWORD*)(a1 + 29776)
		|| (unsigned int)sub_14055A260((_DWORD*)(a1 + 29488))
		|| !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088)))
	{
		*(_DWORD*)(a1 + 25796) = 0;
		*(_QWORD*)(a1 + 25804) = 0i64;
	}
	v29 = *(_QWORD*)(a1 + 29096);
	if (v29)
		v30 = *(__m128**)(a1 + 29096);
	else
		v30 = *(__m128**)(a1 + 29088);
	if (!v29)
		v29 = *(_QWORD*)(a1 + 29088);
	v31 = **(_QWORD**)(a1 + 29256);
	v32 = sub_1401B20F0(v65, v30 + 14);
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, __m128*, __int64, int*))(v31 + 488))(
		v36,
		v29 + 96,
		v34 + 160,
		v33 + 224,
		v32,
		v35,
		v48);
	if ((int)result >= 0)
	{
		sub_1403A2060(a1);
		if (v52)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v52 + 248i64))(v52, 0i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		sub_1403F9160(a1);
		sub_1403F6750(a1);
		sub_1403F4B90(a1);
		v40 = *(__m128**)(a1 + 29096);
		if (!v40)
			v40 = *(__m128**)(a1 + 29088);
		sub_1403F52A0(v39, v38, v40 + 14, a1 + 31856);
		sub_1403F5FD0(a1);
		if (!dword_140C89BB4)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
			if (*(_DWORD*)(a1 + 29768))
			{
				v41 = (__m128)0x3F800000u;
				v41.m128_f32[0] = 1.0 - (**(float(__fastcall***)(__int64))(a1 + 29736))(a1 + 29736);
				v47 = _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, v41));
				(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 168i64))(qword_140C65680, &v47);
			}
			v42 = *(_QWORD*)(a1 + 29504);
			++dword_140C8A094;
			*(_BYTE*)(v42 + 52) = 1;
			sub_1400E7C40(*(_QWORD*)(a1 + 29504));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		}
		sub_1403F3820(a1);
		sub_1403EA100(a1);
		v45 = *(__m128**)(a1 + 29096);
		if (!v45)
			v45 = *(__m128**)(a1 + 29088);
		sub_1403F52A0(v44, v43, v45 + 14, a1 + 31872);
		v46 = *(_QWORD*)(a1 + 29064);
		if (v46)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 24i64))(v46);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
		sub_1403EBFA0(a1);
		return 0i64;
	}
	return result;
}
// 1403E9F45: variable 'v36' is possibly undefined
// 1403E9F39: variable 'v34' is possibly undefined
// 1403E9F25: variable 'v33' is possibly undefined
// 1403E9F45: variable 'v35' is possibly undefined
// 1403E9FB5: variable 'v39' is possibly undefined
// 1403E9FB5: variable 'v38' is possibly undefined
// 1403EA08D: variable 'v44' is possibly undefined
// 1403EA08D: variable 'v43' is possibly undefined
// 1409D6900: using guessed type int dword_1409D6900[38];
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AC00: using guessed type __int128 xmmword_140B7AC00;
// 140B7B2C0: using guessed type __int128 xmmword_140B7B2C0;
// 140B7B310: using guessed type __int128 xmmword_140B7B310;
// 140C450B0: using guessed type int dword_140C450B0;
// 140C450C0: using guessed type _BYTE byte_140C450C0[24];
// 140C463C0: using guessed type int dword_140C463C0;
// 140C463D0: using guessed type __int128 xmmword_140C463D0;
// 140C4CE40: using guessed type int dword_140C4CE40;
// 140C4CE50: using guessed type __int64 qword_140C4CE50;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77830: using guessed type __int128 xmmword_140C77830;
// 140C7CF78: using guessed type __int64 qword_140C7CF78;
// 140C7CF80: using guessed type __int64 qword_140C7CF80;
// 140C7D790: using guessed type __int128 xmmword_140C7D790[];
// 140C7D7A0: using guessed type __int128 xmmword_140C7D7A0[];
// 140C7D7B0: using guessed type __int128 xmmword_140C7D7B0[];
// 140C7D7C0: using guessed type __int128 xmmword_140C7D7C0[];
// 140C7D7D0: using guessed type __int128 xmmword_140C7D7D0[];
// 140C7D7F0: using guessed type __int128 xmmword_140C7D7F0[];
// 140C7D800: using guessed type __int128 xmmword_140C7D800[];
// 140C7D810: using guessed type __int128 xmmword_140C7D810[];
// 140C89BB4: using guessed type int dword_140C89BB4;
// 140C8A094: using guessed type int dword_140C8A094;
// 1403E9AA0: using guessed type int var_2B0[4];
// 1403E9AA0: using guessed type __m128 var_80[6];

