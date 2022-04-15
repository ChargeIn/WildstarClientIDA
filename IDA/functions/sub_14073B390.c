//----- (000000014073B390) ----------------------------------------------------
__int64 __fastcall sub_14073B390(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // edx
	int v5; // r8d
	_DWORD* v6; // rsi
	__int64 v8; // rax
	int v9; // eax
	int v10; // r12d
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	int v15; // ecx
	int v16; // r15d
	unsigned int v17; // edx
	int* v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r10d
	__m128 v22; // xmm1
	int v23; // ecx
	unsigned __int64 v24; // rax
	__int64 v25; // rbx
	bool v26; // zf
	__int64 v27; // rbx
	int v28; // eax
	__int64 v29; // rax
	unsigned __int64 v30; // rcx
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // r9
	_QWORD* v34; // rax
	int v35; // r10d
	unsigned __int16* v36; // r8
	unsigned int v37; // edx
	int* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // rdx
	int v41; // r10d
	__int64 v42; // rbx
	int v43; // eax
	__int64 v44; // rax
	unsigned __int64 v45; // rcx
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // r9
	__int64 v49; // rdx
	_QWORD* v50; // rax
	__int64 v51; // rdx
	__int64 v52; // [rsp+20h] [rbp-50h] BYREF
	__int128 v53; // [rsp+28h] [rbp-48h]
	__int64(__fastcall * *v54)(); // [rsp+38h] [rbp-38h] BYREF
	int v55; // [rsp+40h] [rbp-30h]
	_QWORD* v56; // [rsp+48h] [rbp-28h]
	int v57; // [rsp+50h] [rbp-20h]

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2 && !*(_QWORD*)(v2 + 16) && !*(_QWORD*)(v2 + 24))
	{
		v4 = *(_DWORD*)v2;
		v5 = 0;
		if (*(_DWORD*)v2 <= 0xFu)
		{
			v3 = 57606i64;
			if (_bittest((const int*)&v3, v4))
				LOBYTE(v5) = *(_DWORD*)(v2 + 4) != 0;
		}
		v6 = (_DWORD*)sub_1405C2D40(v3, v4, v5);
		if (!v6)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		if ((dword_140DC4D58 & 1) == 0)
		{
			dword_140DC4D58 |= 1u;
			v8 = sub_140200220(0x91u);
			if (v8)
				v9 = *(_DWORD*)(v8 + 4);
			else
				v9 = 50;
			dword_140DC4D5C = v9;
		}
		v56 = a1;
		v57 = 1;
		v10 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 56i64);
		v11 = a1[4];
		v54 = off_140B569F0;
		if (*(_QWORD*)(v11 + 120) >= *(_QWORD*)(v11 + 112))
			sub_14005E2C0((__int64)a1);
		v12 = a1[2];
		v13 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		a1[2] += 16i64;
		v14 = sub_1400578C0((__int64)a1);
		v15 = dword_140DC4D5C;
		v16 = v14;
		v55 = v14;
		if (v10 >= (unsigned int)dword_140DC4D5C)
		{
			v37 = v6[2];
			if (v37 && v6[3])
			{
				v38 = sub_1400B5DF0(qword_140C658F0, v37, 0i64);
				if ((unsigned int)sub_140415C70(a1, (__int64)v38))
				{
					sub_1400FB540((__int64)&v54);
					a1[2] -= 16i64;
				}
				v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
				v40 = a1[2];
				*(_QWORD*)v40 = *v39;
				*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v40, L"nItemCount", v41);
				a1[2] -= 16i64;
			}
			v42 = (unsigned int)v6[5];
			v43 = v6[4];
			*(_QWORD*)((char*)&v53 + 4) = 0i64;
			LODWORD(v53) = v43;
			HIDWORD(v53) = 0;
			if (v42 && v43 < 15)
			{
				v44 = sub_140059170(a1, 0x18ui64);
				v45 = v53;
				*(_QWORD*)v44 = v42;
				*(_OWORD*)(v44 + 8) = __PAIR128__(*((unsigned __int64*)&v53 + 1), v45);
				v46 = a1[4];
				v47 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
				v48 = a1[2];
				v52 = v47;
				LODWORD(v53) = 4;
				sub_14005E8E0((__int64)a1, v46 + 160, (int*)&v52, v48);
				a1[2] += 16i64;
				sub_140058BF0((__int64)a1, -2);
				sub_1400FB540((__int64)&v54);
				a1[2] -= 16i64;
			}
			if (!v6[6])
				goto LABEL_44;
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v36 = L"nXpEarned";
		}
		else
		{
			v17 = v6[7];
			if (v17 && v6[8])
			{
				v18 = sub_1400B5DF0(qword_140C658F0, v17, 0i64);
				if ((unsigned int)sub_140415C70(a1, (__int64)v18))
				{
					sub_1400FB540((__int64)&v54);
					a1[2] -= 16i64;
				}
				v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
				v20 = a1[2];
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v20, L"nItemCount", v21);
				a1[2] -= 16i64;
				v15 = dword_140DC4D5C;
			}
			v22 = 0i64;
			v22.m128_f32[0] = (float)(int)v6[10] * (float)((float)v10 / (float)v15);
			v23 = (int)v22.m128_f32[0];
			if ((int)v22.m128_f32[0] != 0x80000000 && (float)v23 != v22.m128_f32[0])
				v22.m128_f32[0] = (float)(v23 - (_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1));
			v24 = 0i64;
			if (v22.m128_f32[0] >= 9.223372e18)
			{
				v22.m128_f32[0] = v22.m128_f32[0] - 9.223372e18;
				if (v22.m128_f32[0] < 9.223372e18)
					v24 = 0x8000000000000000ui64;
			}
			v25 = (unsigned int)(int)v22.m128_f32[0];
			*(_QWORD*)((char*)&v53 + 4) = 0i64;
			HIDWORD(v53) = 0;
			v26 = v24 + v25 == 0;
			v27 = v24 + v25;
			v28 = v6[9];
			LODWORD(v53) = v28;
			if (!v26 && v28 < 15)
			{
				v29 = sub_140059170(a1, 0x18ui64);
				v30 = v53;
				*(_QWORD*)v29 = v27;
				*(_OWORD*)(v29 + 8) = __PAIR128__(*((unsigned __int64*)&v53 + 1), v30);
				v31 = a1[4];
				v32 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
				v33 = a1[2];
				v52 = v32;
				LODWORD(v53) = 4;
				sub_14005E8E0((__int64)a1, v31 + 160, (int*)&v52, v33);
				a1[2] += 16i64;
				sub_140058BF0((__int64)a1, -2);
				sub_1400FB540((__int64)&v54);
				a1[2] -= 16i64;
			}
			if (!v6[11])
				goto LABEL_44;
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v36 = L"nXpEarned";
		}
		v49 = a1[2];
		*(_QWORD*)v49 = *v34;
		*(_DWORD*)(v49 + 8) = *((_DWORD*)v34 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v49, v36, v35);
		a1[2] -= 16i64;
	LABEL_44:
		v50 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v51 = a1[2];
		*(_QWORD*)v51 = *v50;
		*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v51, v16);
		return 1i64;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 14073B3F4: variable 'v3' is possibly undefined
// 14073B566: variable 'v21' is possibly undefined
// 14073B76F: variable 'v41' is possibly undefined
// 14073B85C: variable 'v35' is possibly undefined
// 140B48B80: using guessed type wchar_t aNxpearned_0[10];
// 140B48BB0: using guessed type wchar_t aNitemcount_0[11];
// 140B48BE0: using guessed type wchar_t aNxpearned[10];
// 140B48C10: using guessed type wchar_t aNitemcount[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC4D58: using guessed type int dword_140DC4D58;
// 140DC4D5C: using guessed type int dword_140DC4D5C;

