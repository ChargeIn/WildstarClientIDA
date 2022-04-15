//----- (000000014042F9D0) ----------------------------------------------------
void __fastcall sub_14042F9D0(__int64 a1, __int64 a2, unsigned int* a3)
{
	__int64 v3; // rdi
	__int64 v5; // r9
	unsigned __int64 v7; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	unsigned int v13; // ebx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	int v20; // r11d
	__int64 v21; // rcx
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // r10
	int v25; // ebp
	__int64 v26; // rdx
	__m128 v27; // [rsp+20h] [rbp-58h] BYREF
	__int64(__fastcall * *v28)(); // [rsp+30h] [rbp-48h] BYREF
	int v29; // [rsp+38h] [rbp-40h]
	__int64 v30; // [rsp+40h] [rbp-38h]
	int v31; // [rsp+48h] [rbp-30h]
	char v32[8]; // [rsp+50h] [rbp-28h] BYREF
	int v33; // [rsp+58h] [rbp-20h]
	__int64 v34; // [rsp+60h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 400);
	v5 = *(_QWORD*)(v3 + 32);
	v28 = off_140B569F0;
	v7 = *(_QWORD*)(v5 + 112);
	v30 = v3;
	v31 = 1;
	if (*(_QWORD*)(v5 + 120) >= v7)
		sub_14005E2C0(v3);
	v9 = *(_QWORD*)(v3 + 16);
	v10 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v3 + 16) += 16i64;
	v11 = sub_1400578C0(v3);
	v12 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
	v13 = v11;
	v29 = v11;
	v14 = sub_14005C3C0(v12, v11);
	v15 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v15 = *v14;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v15, L"idDestination", v16);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v13);
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v19, L"eType", v20);
	*(_QWORD*)(v3 + 16) -= 16i64;
	sub_14034BDD0(v21, *(_DWORD*)(a2 + 8));
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v13);
	v23 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F0870(v3, v23, L"strName", v24);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v27 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[3], (__m128)a3[5]), _mm_unpacklo_ps((__m128)a3[4], (__m128)0i64));
	sub_1400FA3C0((__int64)v32, v3, v27.m128_f32);
	v25 = v33;
	sub_1400FB2A0((__int64)&v28, (__int64)L"tLoc", v33);
	sub_1400EA3E0(a1, "CityDirectionMarked", L"T", v13);
	if (v34)
		sub_1400579E0(v34, v26, v25);
	sub_1400579E0(v3, v26, v13);
}
// 14042FA8E: variable 'v16' is possibly undefined
// 14042FABF: variable 'v18' is possibly undefined
// 14042FAD1: variable 'v19' is possibly undefined
// 14042FAD1: variable 'v20' is possibly undefined
// 14042FADF: variable 'v21' is possibly undefined
// 14042FB1B: variable 'v24' is possibly undefined
// 14042FB95: variable 'v26' is possibly undefined
// 1409EE974: using guessed type wchar_t aT_0[2];
// 140B01400: using guessed type wchar_t aStrname_17[8];
// 140B01410: using guessed type wchar_t aEtype_1[6];
// 140B01420: using guessed type wchar_t aIddestination_0[14];
// 140B01440: using guessed type wchar_t aTloc[5];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 14042F9D0: using guessed type char var_28[8];

