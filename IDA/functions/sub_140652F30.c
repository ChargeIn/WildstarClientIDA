//----- (0000000140652F30) ----------------------------------------------------
__int64 __fastcall sub_140652F30(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // r15d
	__int64 v9; // rbp
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	int v13; // r11d
	__int64 v14; // rdi
	_QWORD* v15; // rax
	__int64 v16; // rdx
	int v17; // r11d
	_QWORD* v18; // rax
	__int64 v19; // r11
	__int64 v20; // rdx
	__int64 v21; // rcx
	unsigned __int64 v22; // rax
	_QWORD* v23; // rsi
	__int64 v24; // rdi
	__int64 v25; // rax
	unsigned int v26; // edi
	int v27; // r14d
	__int64 v28; // rcx
	__int64 v29; // rdx
	_QWORD* v30; // rax
	__int64 v31; // rdx
	__int64(__fastcall * *v33)(); // [rsp+20h] [rbp-58h] BYREF
	int v34; // [rsp+28h] [rbp-50h]
	_QWORD* v35; // [rsp+30h] [rbp-48h]
	int v36; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v37)(); // [rsp+40h] [rbp-38h] BYREF
	int v38; // [rsp+48h] [rbp-30h]
	__int64 v39; // [rsp+50h] [rbp-28h]
	int v40; // [rsp+58h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_QWORD*)(a1 + 32);
		v5 = *(_QWORD*)(v4 + 112);
		v37 = off_140B569F0;
		v39 = a1;
		v40 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(a1);
		v6 = *(_QWORD*)(a1 + 16);
		v7 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v8 = sub_1400578C0(a1);
		v38 = v8;
		v9 = sub_1403DEC00(qword_140C65898, v3);
		if (v9)
		{
			v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
			v11 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v11 = *v10;
			*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v12, L"eDifficulty", v13);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v14 = *(_QWORD*)(a1 + 16);
			v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
			*(_QWORD*)v14 = *v15;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v15 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v16, L"nCount", v17);
			*(_QWORD*)(a1 + 16) -= 16i64;
			LODWORD(v14) = *(_DWORD*)(v9 + 8);
			v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
			*(_QWORD*)v19 = *v18;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400F06F0(a1, v20, L"nIconCount", v14);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v21 = *(_QWORD*)(a1 + 32);
			v33 = off_140B569F0;
			v22 = *(_QWORD*)(v21 + 112);
			v23 = (_QWORD*)a1;
			v35 = (_QWORD*)a1;
			v36 = 1;
			if (*(_QWORD*)(v21 + 120) >= v22)
				sub_14005E2C0(a1);
			v24 = *(_QWORD*)(a1 + 16);
			v25 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v24 + 8) = 5;
			*(_QWORD*)v24 = v25;
			*(_QWORD*)(a1 + 16) += 16i64;
			v26 = 0;
			v27 = sub_1400578C0(a1);
			v34 = v27;
			if (*(_QWORD*)(v9 + 24))
			{
				v28 = 0i64;
				do
				{
					if ((unsigned int)sub_140649870(v23, *(_DWORD*)(*(_QWORD*)(v9 + 16) + 4 * v28)))
					{
						sub_1400FB470((__int64)&v33);
						v23 = v35;
						v35[2] -= 16i64;
					}
					v28 = ++v26;
				} while ((unsigned __int64)v26 < *(_QWORD*)(v9 + 24));
				v27 = v34;
			}
			sub_1400FB2A0((__int64)&v37, (__int64)L"tUnits", v27);
			if (v23)
				sub_1400579E0((__int64)v23, v29, v27);
		}
		v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
		v31 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v31 = *v30;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v31, v8);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140653036: variable 'v12' is possibly undefined
// 140653036: variable 'v13' is possibly undefined
// 14065307D: variable 'v16' is possibly undefined
// 14065307D: variable 'v17' is possibly undefined
// 1406530B4: variable 'v19' is possibly undefined
// 1406530C4: variable 'v20' is possibly undefined
// 140653195: variable 'v29' is possibly undefined
// 140B2C700: using guessed type wchar_t aNiconcount[11];
// 140B2C718: using guessed type wchar_t aTunits[7];
// 140B2C728: using guessed type wchar_t aEdifficulty[12];
// 140B2C740: using guessed type wchar_t aNcount_32[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

