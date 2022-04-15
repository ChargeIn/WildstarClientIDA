//----- (00000001404ED2D0) ----------------------------------------------------
void __fastcall sub_1404ED2D0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
	_QWORD* v7; // rdi
	__int64 v9; // r10
	__int64 v10; // r15
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // eax
	float v16; // xmm0_4
	int v17; // esi
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rbx
	_QWORD* v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // r9
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rbx
	_QWORD* v27; // rax
	__int64 v28; // rdx
	int v29; // r10d
	double v30; // xmm6_8
	_QWORD* v31; // rax
	__int64 v32; // r10
	unsigned __int64* v33; // rdx
	unsigned __int64 v34; // r8
	__int64 v35; // rax
	__int64* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // rdx
	int v39; // r10d
	int v40; // r9d
	unsigned __int16* v41; // r8
	__int64 v42; // r11
	_QWORD* v43; // rax
	_QWORD* v44; // rax
	__int64 v45; // rdx
	__m128 v46; // xmm12
	int v47; // ebx
	_QWORD* v48; // rax
	__int64 v49; // rdx
	_QWORD* v50; // rax
	__int64 v51; // r10
	__int64 v52; // rdx
	__m128 v53; // xmm0
	int v54; // ecx
	unsigned __int64 v55; // rax
	unsigned __int64 v56; // rbx
	_QWORD* v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rbx
	__int64 v60; // rax
	__int64 v61; // r9
	__int64 v62; // rdx
	__int64 v63; // [rsp+28h] [rbp-A1h] BYREF
	__int64 v64; // [rsp+30h] [rbp-99h]
	__int64 v65; // [rsp+38h] [rbp-91h]
	__int64(__fastcall * *v66)(); // [rsp+48h] [rbp-81h] BYREF
	int v67; // [rsp+50h] [rbp-79h]
	_QWORD* v68; // [rsp+58h] [rbp-71h]
	__int128 v69; // [rsp+60h] [rbp-69h]

	v7 = *(_QWORD**)(a5 + 16);
	v66 = off_140B569F0;
	v9 = v7[4];
	v10 = a2;
	v12 = *(_QWORD*)(v9 + 112);
	v68 = v7;
	LODWORD(v69) = 1;
	if (*(_QWORD*)(v9 + 120) >= v12)
		sub_14005E2C0((__int64)v7);
	v13 = v7[2];
	v14 = sub_14005C1B0((__int64)v7, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	v7[2] += 16i64;
	v15 = sub_1400578C0((__int64)v7);
	v16 = *(float*)(a1 + 4 * v10 + 24);
	v17 = v15;
	v67 = v15;
	v18 = 0i64;
	if (v16 >= 9.223372e18)
	{
		v16 = v16 - 9.223372e18;
		if (v16 < 9.223372e18)
			v18 = 0x8000000000000000ui64;
	}
	v64 = 15i64;
	HIDWORD(v65) = a3;
	v19 = v18 + (unsigned int)(int)v16;
	LODWORD(v65) = 0;
	v20 = (_QWORD*)sub_140059170(v7, 0x18ui64);
	*v20 = v19;
	v20[1] = 15i64;
	v20[2] = v65;
	v21 = v7[4];
	v22 = sub_140062650((__int64)v7, (unsigned __int64*)"Game.Money", 0xAui64);
	v23 = v7[2];
	v63 = v22;
	LODWORD(v64) = 4;
	sub_14005E8E0((__int64)v7, v21 + 160, (int*)&v63, v23);
	v7[2] += 16i64;
	sub_140058BF0((__int64)v7, -2);
	sub_1400FB540((__int64)&v66);
	v7[2] -= 16i64;
	v24 = sub_14044FA30(a1, a3);
	v25 = *(_QWORD*)(v7[4] + 160i64);
	v26 = v24;
	if (v24)
	{
		v27 = sub_14005C3C0(v25, v17);
		v28 = v7[2];
		*(_QWORD*)v28 = *v27;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
		v7[2] += 16i64;
		sub_1400F06F0((__int64)v7, v28, L"eDiscountType", v29);
		v7[2] -= 16i64;
		v30 = *(float*)(v26 + 12);
		v31 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v17);
		*(_QWORD*)v32 = *v31;
		*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
		v7[2] += 16i64;
		v33 = (unsigned __int64*)sub_14018F0E0(&v63, L"nDiscountAmount")[1];
		if (v33)
		{
			v34 = -1i64;
			do
				++v34;
			while (*((_BYTE*)v33 + v34));
			sub_140058710((__int64)v7, v33, v34);
		}
		else
		{
			*(_DWORD*)(v7[2] + 8i64) = 0;
			v7[2] += 16i64;
		}
		if (v64)
			sub_14018B900(v64, 0);
		v35 = v7[2];
		*(_DWORD*)(v35 + 8) = 3;
		*(double*)v35 = v30;
		v7[2] += 16i64;
		v36 = (__int64*)sub_1400580E0((__int64)v7, -3);
		sub_14005EA50((__int64)v7, v36, (int*)(v7[2] - 32i64), (unsigned int*)(v7[2] - 16i64));
		v7[2] -= 48i64;
		v37 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v17);
		v40 = v39;
		v41 = L"nDiscountTimeRemaining";
		*(_QWORD*)v42 = *v37;
		*(_DWORD*)(v42 + 8) = *((_DWORD*)v37 + 2);
	}
	else
	{
		v43 = sub_14005C3C0(v25, v17);
		v38 = v7[2];
		v40 = 0;
		v41 = L"eDiscountType";
		*(_QWORD*)v38 = *v43;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v43 + 2);
	}
	v7[2] += 16i64;
	sub_1400F06F0((__int64)v7, v38, v41, v40);
	v7[2] -= 16i64;
	v44 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v17);
	v45 = v7[2];
	*(_QWORD*)v45 = *v44;
	*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
	v7[2] += 16i64;
	sub_1400F06F0((__int64)v7, v45, L"eCurrencyType", a3);
	v7[2] -= 16i64;
	if (v26)
		v46.m128_i32[0] = *(_DWORD*)(v26 + 4);
	else
		v46.m128_i32[0] = *(_DWORD*)(a1 + 4 * v10 + 24);
	if (qword_140C65898)
		v47 = sub_1403ABFE0(qword_140C65898 + 7160, 30, 0);
	else
		v47 = 0;
	if (*(_DWORD*)qword_140C658C8 == 2)
	{
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)qword_140C658D0 + 16i64))(qword_140C658D0))
		{
			if (v47)
			{
				if (a7)
				{
					v48 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v17);
					v49 = v7[2];
					*(_QWORD*)v49 = *v48;
					*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
					v7[2] += 16i64;
					sub_1400F06F0((__int64)v7, v49, L"ePremiumDiscountType", 2);
					v7[2] -= 16i64;
					v50 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v17);
					*(_QWORD*)v51 = *v50;
					*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
					v7[2] += 16i64;
					sub_1400F06F0((__int64)v7, v52, L"nPremiumDiscountAmount", v47);
					v7[2] -= 16i64;
					v53 = 0i64;
					v53.m128_f32[0] = fmaxf(
						0.0,
						fminf(
							(float)(100.0 - fmaxf(-3.4028235e38, fminf(3.4028235e38, (float)v47))) * 0.0099999998,
							1.0))
						* v46.m128_f32[0];
					v46 = v53;
					v46.m128_f32[0] = v53.m128_f32[0] + 0.5;
					v54 = (int)(float)(v53.m128_f32[0] + 0.5);
					if (v54 != 0x80000000 && (float)v54 != v46.m128_f32[0])
						v46.m128_f32[0] = (float)(v54 - (_mm_movemask_ps(_mm_unpacklo_ps(v46, v46)) & 1));
				}
			}
		}
	}
	v55 = 0i64;
	if (v46.m128_f32[0] >= 9.223372e18)
	{
		v46.m128_f32[0] = v46.m128_f32[0] - 9.223372e18;
		if (v46.m128_f32[0] < 9.223372e18)
			v55 = 0x8000000000000000ui64;
	}
	v64 = 15i64;
	LODWORD(v65) = 0;
	HIDWORD(v65) = a3;
	v56 = v55 + (unsigned int)(int)v46.m128_f32[0];
	v57 = (_QWORD*)sub_140059170(v7, 0x18ui64);
	v58 = v64;
	*v57 = v56;
	v57[1] = v58;
	v57[2] = v65;
	v59 = v7[4];
	v60 = sub_140062650((__int64)v7, (unsigned __int64*)"Game.Money", 0xAui64);
	v61 = v7[2];
	v63 = v60;
	LODWORD(v64) = 4;
	sub_14005E8E0((__int64)v7, v59 + 160, (int*)&v63, v61);
	v7[2] += 16i64;
	sub_140058BF0((__int64)v7, -2);
	sub_1400FB540((__int64)&v66);
	v7[2] -= 16i64;
	sub_1400FB2A0(a5, a6, v17);
	sub_1400579E0((__int64)v7, v62, v17);
}
// 1404ED495: variable 'v29' is possibly undefined
// 1404ED4C7: variable 'v32' is possibly undefined
// 1404ED5A0: variable 'v39' is possibly undefined
// 1404ED5AD: variable 'v42' is possibly undefined
// 1404ED5E0: variable 'v38' is possibly undefined
// 1404ED738: variable 'v51' is possibly undefined
// 1404ED74A: variable 'v52' is possibly undefined
// 1404ED917: variable 'v62' is possibly undefined
// 140B0D4D8: using guessed type wchar_t aEdiscounttype[14];
// 140B0D4F8: using guessed type wchar_t aNdiscountamoun[16];
// 140B0D518: using guessed type wchar_t aNdiscounttimer[23];
// 140B0D548: using guessed type wchar_t aEdiscounttype_0[14];
// 140B0D830: using guessed type wchar_t aEcurrencytype[14];
// 140B0D850: using guessed type wchar_t aEpremiumdiscou[21];
// 140B0D880: using guessed type wchar_t aNpremiumdiscou[23];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140C658D0: using guessed type __int64 qword_140C658D0;

