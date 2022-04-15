//----- (00000001406B8F60) ----------------------------------------------------
__int64 __fastcall sub_1406B8F60(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rbx
	__int64 v5; // rcx
	unsigned int v6; // ecx
	unsigned int* v7; // rsi
	__int64 result; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	__m128 v14; // xmm3
	int v15; // ebp
	__int64 v16; // rcx
	int v17; // ebx
	unsigned int v18; // r8d
	__int64 v19; // rdx
	__int64(__fastcall * **v20)(_QWORD); // rax
	_QWORD* v21; // rax
	__int64 v22; // rdx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	__int64 v25; // r10
	__int64 v26; // rcx
	__m128 v27; // [rsp+40h] [rbp-58h] BYREF
	__int64(__fastcall * *v28)(); // [rsp+50h] [rbp-48h] BYREF
	int v29; // [rsp+58h] [rbp-40h]
	_QWORD* v30; // [rsp+60h] [rbp-38h]
	int v31; // [rsp+68h] [rbp-30h]
	char v32[8]; // [rsp+70h] [rbp-28h] BYREF
	int v33; // [rsp+78h] [rbp-20h]
	__int64 v34; // [rsp+80h] [rbp-18h]
	__int64 v35; // [rsp+A8h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0 && qword_140C658F8)
	{
		v5 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v5 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) == 167)
			v6 = *(_DWORD*)(v4 + 72);
		else
			v6 = *(_DWORD*)(v4 + 76);
		v7 = (unsigned int*)sub_14024B980(v6);
		if (v7)
		{
			v9 = a1[4];
			v28 = off_140B569F0;
			v10 = *(_QWORD*)(v9 + 112);
			v30 = a1;
			v31 = 1;
			if (*(_QWORD*)(v9 + 120) >= v10)
				sub_14005E2C0((__int64)a1);
			v11 = a1[2];
			v12 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			a1[2] += 16i64;
			v13 = sub_1400578C0((__int64)a1);
			v14 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v7[3], (__m128)v7[5]), _mm_unpacklo_ps((__m128)v7[4], (__m128)0i64));
			v15 = v13;
			v29 = v13;
			v27 = v14;
			sub_1400FA3C0((__int64)v32, (__int64)a1, v27.m128_f32);
			sub_1400FB2A0((__int64)&v28, (__int64)L"tPosition", v33);
			v17 = 0;
			if (qword_140C658F8)
			{
				v18 = v7[11];
				v19 = v7[10];
				v35 = qword_140C77760;
				v20 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(v16, v19, v18, v27.m128_f32, 0i64, 1, &v35);
				if (v20)
					v17 = (**v20)(v20);
			}
			v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			v22 = a1[2];
			*(_QWORD*)v22 = *v21;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v22, L"nMapZoneId", v17);
			a1[2] -= 16i64;
			v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v25 = *v23;
			v26 = v34;
			*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
			a1[2] += 16i64;
			if (v26)
				sub_1400579E0(v26, v24, v33);
			sub_1400579E0((__int64)a1, v24, v15);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406B9111: variable 'v16' is possibly undefined
// 1406B917C: variable 'v25' is possibly undefined
// 1406B919D: variable 'v24' is possibly undefined
// 140B37778: using guessed type wchar_t aTposition_1[10];
// 140B37828: using guessed type wchar_t aNmapzoneid_1[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 1406B8F60: using guessed type char var_28[8];

