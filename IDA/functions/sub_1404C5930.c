//----- (00000001404C5930) ----------------------------------------------------
__int64 __fastcall sub_1404C5930(__int64 a1)
{
	int v1; // eax
	__int64 result; // rax
	__int64* v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rdi
	int v7; // eax
	int v8; // xmm4_4
	__m128 v9; // xmm0
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	__int64 v12; // rcx
	unsigned int v13; // edx
	__int64 v14; // rax
	__int64 v15; // r10
	__int64 v16; // r11
	int v17; // eax
	__int64 v18; // rax
	_BYTE v19[20]; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v20; // [rsp+4Ch] [rbp-BCh]
	int v21; // [rsp+54h] [rbp-B4h]
	__int128 v22; // [rsp+58h] [rbp-B0h]
	__int128 v23; // [rsp+68h] [rbp-A0h]
	_BYTE v24[64]; // [rsp+78h] [rbp-90h] BYREF
	__int128 v25[6]; // [rsp+B8h] [rbp-50h] BYREF

	v1 = *(_DWORD*)(a1 + 128);
	*(_DWORD*)(a1 + 760) = 1;
	result = (unsigned int)(v1 - 5);
	if ((result & 0xFFFFFFFA) == 0)
	{
		v4 = (__int64*)(a1 + 288);
		v5 = *(_QWORD*)(a1 + 288);
		if (v5)
		{
			v6 = (*(__int64 (**)(void))(*(_QWORD*)v5 + 336i64))();
			(**(void(__fastcall***)(__int64))v6)(v6);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 936i64))(v6);
			*(_OWORD*)(a1 + 512) = *(_OWORD*)(a1 + 144);
			v7 = *(_DWORD*)(a1 + 160);
			*(_QWORD*)&v23 = a1 + 512;
			*((_QWORD*)&v22 + 1) = 0i64;
			*(_DWORD*)(a1 + 528) = v7;
			*(_DWORD*)(a1 + 532) = *(_DWORD*)(a1 + 164);
			*(_DWORD*)(a1 + 536) = *(_DWORD*)(a1 + 168);
			*((_QWORD*)&v23 + 1) = v19;
			v8 = *(_DWORD*)(a1 + 172);
			*(_DWORD*)(a1 + 540) = v8;
			v9 = (__m128) * (unsigned int*)(a1 + 536);
			v10 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 532), (__m128)0i64);
			v11 = (__m128) * (unsigned int*)(a1 + 528);
			LODWORD(v22) = v8;
			v25[1] = v23;
			*(__m128*)v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, v9), v10);
			v25[0] = v22;
			sub_1401B0590((int*)v25, (__int64)v24);
			v13 = *(_DWORD*)(a1 + 676);
			if (*(_DWORD*)(a1 + 672) != v13 && (!v13 || sub_1404CA4F0(v12, v13)))
			{
				*(_DWORD*)(a1 + 672) = v13;
				*(_DWORD*)(a1 + 248) = v13;
				sub_1404C6B10(a1);
			}
			sub_1404C2960(a1);
			*(_QWORD*)v19 = *(_QWORD*)(a1 + 88);
			v14 = sub_1404C2740(a1);
			if ((*(int(__fastcall**)(__int64, _BYTE*, __int64, _BYTE*, __int64*, __int64))(v15 + 200))(
				v16,
				v24,
				v6,
				v19,
				v4,
				v14) >= 0)
			{
				(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*(_QWORD*)v6 + 648i64))(
					v6,
					sub_1404C2880,
					a1);
				v17 = sub_1401AE6F0(0, -1);
				*(_DWORD*)&v19[8] = 1065353216;
				*(_DWORD*)&v19[4] = v17;
				v18 = *(_QWORD*)v6;
				*(_DWORD*)v19 = 6691;
				*(_QWORD*)&v19[12] = 0i64;
				v20 = 0i64;
				v21 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, _BYTE*))(v18 + 584))(v6, 0i64, v19);
				sub_1404C7FF0(*(_QWORD*)(a1 + 296), *v4, a1);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			return sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HousingFreePlaceDecorMoving",
				byte_1409EBF24,
				*(unsigned int*)(a1 + 496));
		}
	}
	return result;
}
// 1404C5A56: variable 'v12' is possibly undefined
// 1404C5A63: variable 'v13' is possibly undefined
// 1404C5AB8: variable 'v15' is possibly undefined
// 1404C5AB8: variable 'v16' is possibly undefined
// 1409EBF24: using guessed type _BYTE byte_1409EBF24[32];
// 140C65898: using guessed type __int64 qword_140C65898;

