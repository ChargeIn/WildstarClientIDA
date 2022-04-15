#include "../winhttp.h"

//----- (00000001404C1D60) ----------------------------------------------------
void __fastcall sub_1404C1D60(__m128* a1, __m128* a2)
{
	unsigned __int64 v3; // rcx
	__int64 v4; // r15
	unsigned __int64 v5; // rbx
	void(__fastcall * **v7)(_QWORD); // rcx
	void(__fastcall * **v8)(_QWORD); // rcx
	__int64 v9; // rcx
	__int64* v10; // rdx
	__int64* v11; // r8
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // edi
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v16; // [rsp+38h] [rbp-C8h]
	__int64 v17; // [rsp+48h] [rbp-B8h] BYREF
	__int64(__fastcall * *v18)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v19; // [rsp+58h] [rbp-A8h]
	__m128 v20[4]; // [rsp+70h] [rbp-90h] BYREF
	__m128* v21[10]; // [rsp+B0h] [rbp-50h] BYREF

	v3 = a1[39].m128_u64[1];
	v4 = *(_QWORD*)(qword_140C65898 + 29256);
	v5 = 0i64;
	if (v3 && *(_DWORD*)qword_140C659F0)
	{
		if (!a1[38].m128_u64[0])
			return;
		(*(void(__fastcall**)(unsigned __int64, __int64))(*(_QWORD*)v3 + 896i64))(v3, 9i64);
		(*(void(__fastcall**)(unsigned __int64, __m256*))(*(_QWORD*)a1[38].m128_u64[0] + 72i64))(
			a1[38].m128_u64[0],
			&ymmword_140C78390);
		v7 = (void(__fastcall***)(_QWORD))a1[39].m128_u64[1];
		if (v7)
		{
			(**v7)(v7);
			v5 = a1[39].m128_u64[1];
		}
	}
	else
	{
		v8 = (void(__fastcall***)(_QWORD))a1[38].m128_u64[0];
		if (v8)
		{
			(**v8)(v8);
			v5 = a1[38].m128_u64[0];
		}
	}
	if (a1[18].m128_u64[0])
		sub_1404C2960((__int64)a1);
	*(_QWORD*)&v16 = a2;
	TlsValue = (__int64(__fastcall**)()) & a1[34];
	v21[1] = a2;
	v21[0] = a1 + 34;
	sub_1401AFB10(v21, v20);
	v9 = *(_QWORD*)(qword_140C659F0 + 824);
	v10 = *(__int64**)(v9 + 16);
	v11 = *(__int64**)(v9 + 24);
	if (v10 == v11)
		goto LABEL_13;
	while (1)
	{
		v12 = *v10;
		if (*(_DWORD*)(*v10 + 188) == *(_DWORD*)(a1[18].m128_u64[1] + 20))
			break;
		if (++v10 == v11)
			goto LABEL_13;
	}
	if (!v12)
		LABEL_13:
	v13 = 0i64;
	else
		v13 = *(_QWORD*)(v12 + 280);
	v17 = a1[5].m128_i64[1];
	if ((*(int(__fastcall**)(__int64, __m128*, unsigned __int64, __int64*, __m128*, __int64, __int64(__fastcall**)(), _QWORD))(*(_QWORD*)v4 + 200i64))(
		v4,
		v20,
		v5,
		&v17,
		a1 + 18,
		v13,
		TlsValue,
		v16) >= 0)
	{
		sub_1404C7FF0(a1[18].m128_i64[1], a1[18].m128_i64[0], (__int64)a1);
		(*(void(__fastcall**)(__m128*))(a1->m128_u64[0] + 104))(a1);
	}
	else
	{
		*(_QWORD*)&v16 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v18 = TlsValue;
		v17 = 0x141E04198i64;
		v19 = v16;
		v14 = sub_140196F30(&dword_140C8AD30, 46, &v17, &v18);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
		if (v14)
			DebugBreak();
	}
	if (v5)
		(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v5 + 8i64))(v5);
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C8AD30: using guessed type _DWORD dword_140C8AD30;
// 1404C1D60: using guessed type __m128 var_B0[4];

