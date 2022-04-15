//----- (00000001406FB750) ----------------------------------------------------
__int64 __fastcall sub_1406FB750(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	_QWORD* v4; // r15
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rbx
	int v10; // r10d
	unsigned int* v11; // r14
	unsigned int v12; // edi
	__int64 v13; // rax
	__int64 v14; // rbp
	__int64 v15; // rdi
	__int64 v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r10d
	__int64 v20; // rcx
	_QWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int16* v23; // r10
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	__int64 v28; // rdx
	_QWORD* v29; // rax
	__int64 v30; // r8
	__int64 v31; // rdx
	int v32; // r10d
	__int64(__fastcall * *v34)(); // [rsp+20h] [rbp-38h] BYREF
	int v35; // [rsp+28h] [rbp-30h]
	__int64 v36; // [rsp+30h] [rbp-28h]
	int v37; // [rsp+38h] [rbp-20h]

	v2 = *(_QWORD*)(qword_140C65898 + 7152);
	if (!v2)
		return 0i64;
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2);
	if (v3 == 166)
	{
		v4 = *(_QWORD**)(qword_140C65A20 + 24);
	}
	else
	{
		if (v3 != 167)
			return 0i64;
		v4 = *(_QWORD**)(qword_140C65A20 + 16);
	}
	if (!v4)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 32);
	v34 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v36 = a1;
	v37 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0(a1);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = 0i64;
	v10 = sub_1400578C0(a1);
	v35 = v10;
	if (v4[1])
	{
		while (1)
		{
			v11 = *(unsigned int**)(*v4 + 8 * v9);
			if (v11)
			{
				v12 = *v11;
				if (qword_140C63840)
				{
					v13 = qword_140C63840(off_140A6B320, v12, qword_140C63858);
					goto LABEL_16;
				}
				if (!dword_140C65370 && (int)sub_140212560() >= 0)
				{
					v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BD0 + 24i64))(qword_140C63BD0, v12);
				LABEL_16:
					v14 = v13;
					if (v13)
					{
						if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
							sub_14005E2C0(a1);
						v15 = *(_QWORD*)(a1 + 16);
						v16 = sub_14005C1B0(a1, 0, 0);
						*(_DWORD*)(v15 + 8) = 5;
						*(_QWORD*)v15 = v16;
						*(_QWORD*)(a1 + 16) += 16i64;
						LODWORD(v15) = sub_1400578C0(a1);
						v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v15);
						v18 = *(_QWORD*)(a1 + 16);
						*(_QWORD*)v18 = *v17;
						*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
						*(_QWORD*)(a1 + 16) += 16i64;
						sub_1400F06F0(a1, v18, L"nMapZoneId", v19);
						*(_QWORD*)(a1 + 16) -= 16i64;
						sub_14034BDD0(v20, *(_DWORD*)(v14 + 4));
						v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v15);
						v22 = *(_QWORD*)(a1 + 16);
						*(_QWORD*)v22 = *v21;
						*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
						*(_QWORD*)(a1 + 16) += 16i64;
						sub_1400F0870(a1, v22, L"strName", v23);
						*(_QWORD*)(a1 + 16) -= 16i64;
						v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v15);
						*(_QWORD*)v25 = *v24;
						*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
						*(_QWORD*)(a1 + 16) += 16i64;
						sub_1400F06F0(a1, v26, L"nWorldZoneId", v27);
						*(_QWORD*)(a1 + 16) -= 16i64;
						sub_1400FB1D0((__int64)&v34);
						sub_1400579E0(a1, v28, v15);
					}
				}
			}
			if ((unsigned __int64)++v9 >= v4[1])
			{
				a1 = v36;
				v10 = v35;
				break;
			}
		}
	}
	v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
	v30 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v30 = *v29;
	v31 = *((unsigned int*)v29 + 2);
	*(_DWORD*)(v30 + 8) = v31;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v31, v32);
	return 1i64;
}
// 1406FB90F: variable 'v19' is possibly undefined
// 1406FB91C: variable 'v20' is possibly undefined
// 1406FB958: variable 'v23' is possibly undefined
// 1406FB989: variable 'v25' is possibly undefined
// 1406FB99B: variable 'v26' is possibly undefined
// 1406FB99B: variable 'v27' is possibly undefined
// 1406FB9B7: variable 'v28' is possibly undefined
// 1406FBA11: variable 'v32' is possibly undefined
// 140A6B320: using guessed type wchar_t *off_140A6B320[2];
// 140B41678: using guessed type wchar_t aNworldzoneid_2[13];
// 140B41698: using guessed type wchar_t aStrname_87[8];
// 140B416A8: using guessed type wchar_t aNmapzoneid_2[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BD0: using guessed type __int64 qword_140C63BD0;
// 140C65370: using guessed type int dword_140C65370;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A20: using guessed type __int64 qword_140C65A20;

