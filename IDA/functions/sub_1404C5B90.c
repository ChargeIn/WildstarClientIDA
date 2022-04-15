//----- (00000001404C5B90) ----------------------------------------------------
__int64 __fastcall sub_1404C5B90(__int64 a1)
{
	__int64 result; // rax
	__int64* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rsi
	int v6; // xmm0_4
	__int64 v7; // rax
	__int64 v8; // r10
	__int64 v9; // r11
	__m128 v10; // [rsp+30h] [rbp-E8h] BYREF
	unsigned __int64 v11; // [rsp+40h] [rbp-D8h]
	__int64 v12; // [rsp+48h] [rbp-D0h]
	__int128 v13; // [rsp+50h] [rbp-C8h]
	char v14[64]; // [rsp+60h] [rbp-B8h] BYREF
	__int128 v15[6]; // [rsp+A0h] [rbp-78h] BYREF

	result = (unsigned int)(*(_DWORD*)(a1 + 128) - 5);
	if ((result & 0xFFFFFFFA) == 0)
	{
		v3 = (__int64*)(a1 + 288);
		v4 = *(_QWORD*)(a1 + 288);
		if (v4)
		{
			v5 = (*(__int64 (**)(void))(*(_QWORD*)v4 + 336i64))();
			(**(void(__fastcall***)(__int64))v5)(v5);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 936i64))(v5);
			sub_1404C2960(a1);
			*(_OWORD*)(a1 + 512) = *(_OWORD*)(a1 + 144);
			*(_QWORD*)&v13 = a1 + 512;
			*((_QWORD*)&v13 + 1) = &v10;
			v12 = 0i64;
			v6 = *(_DWORD*)(a1 + 540);
			v10 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 528), (__m128) * (unsigned int*)(a1 + 536)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 532), (__m128)0i64));
			v15[1] = v13;
			LODWORD(v11) = v6;
			v15[0] = v11;
			sub_1401B0590((int*)v15, (__int64)v14);
			v10.m128_u64[0] = *(_QWORD*)(a1 + 88);
			v7 = sub_1404C2740(a1);
			if ((*(int(__fastcall**)(__int64, char*, __int64, __m128*, __int64*, __int64))(v8 + 200))(
				v9,
				v14,
				v5,
				&v10,
				v3,
				v7) >= 0)
				sub_1404C7FF0(*(_QWORD*)(a1 + 296), *v3, a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)*v3 + 296i64))(*v3, 0i64);
			return sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"HousingFreePlaceDecorMoving",
				byte_1409EBF24,
				*(unsigned int*)(a1 + 496));
		}
	}
	return result;
}
// 1404C5CC3: variable 'v8' is possibly undefined
// 1404C5CC3: variable 'v9' is possibly undefined
// 1409EBF24: using guessed type _BYTE byte_1409EBF24[32];
// 140C65898: using guessed type __int64 qword_140C65898;

