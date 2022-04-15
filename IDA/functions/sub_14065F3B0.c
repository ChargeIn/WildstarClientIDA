//----- (000000014065F3B0) ----------------------------------------------------
__int64 __fastcall sub_14065F3B0(__int64 a1)
{
	__int64 v1; // rdi
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // ebx
	__int64 v12; // rdx
	__int64 v13; // rbp
	unsigned int v14; // esi
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rcx
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // r10
	__int64 v25; // rdx
	unsigned int v26; // esi
	unsigned int v27; // ebp
	unsigned int* v28; // rax
	__int64 v29; // rcx
	unsigned int* v30; // r14
	__int64 v31; // rax
	int v32; // eax
	__int64 v33; // rbx
	__int64 v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // rdx
	int v37; // r10d
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int16* v41; // r10
	__int64 v42; // rdx
	__int64* v43; // rax
	__int64 v44; // r8
	__int64(__fastcall * *v46)(); // [rsp+20h] [rbp-28h] BYREF
	int v47; // [rsp+28h] [rbp-20h]
	__int64 v48; // [rsp+30h] [rbp-18h]
	int v49; // [rsp+38h] [rbp-10h]

	v1 = a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
	{
		v5 = *(_DWORD*)(v4 + 68);
		if (v5)
		{
			v6 = *(_QWORD*)(v1 + 32);
			v46 = off_140B569F0;
			v7 = *(_QWORD*)(v6 + 112);
			v48 = v1;
			v49 = 1;
			if (*(_QWORD*)(v6 + 120) >= v7)
				sub_14005E2C0(v1);
			v8 = *(_QWORD*)(v1 + 16);
			v9 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			*(_QWORD*)(v1 + 16) += 16i64;
			v11 = sub_1400578C0(v1);
			v47 = v11;
			if (v5 <= 0)
			{
				if (v5 != -1)
					goto LABEL_24;
				v26 = 0;
				v27 = sub_140242CF0();
				if (!v27)
					goto LABEL_24;
				do
				{
					v28 = (unsigned int*)sub_140242DA0(v26);
					v30 = v28;
					if (v28)
					{
						v31 = sub_1405BE150(v29, *v28);
						if (v31)
						{
							v32 = *(_DWORD*)(v31 + 16);
							if ((v32 & 4) != 0 || (v32 & 8) != 0)
							{
								if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
									sub_14005E2C0(v1);
								v33 = *(_QWORD*)(v1 + 16);
								v34 = sub_14005C1B0(v1, 0, 0);
								*(_DWORD*)(v33 + 8) = 5;
								*(_QWORD*)v33 = v34;
								*(_QWORD*)(v1 + 16) += 16i64;
								LODWORD(v33) = sub_1400578C0(v1);
								v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v33);
								v36 = *(_QWORD*)(v1 + 16);
								*(_QWORD*)v36 = *v35;
								*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
								*(_QWORD*)(v1 + 16) += 16i64;
								sub_1400F06F0(v1, v36, L"eTradeskillId", v37);
								*(_QWORD*)(v1 + 16) -= 16i64;
								sub_14034BDD0(v38, v30[1]);
								v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v33);
								v40 = *(_QWORD*)(v1 + 16);
								*(_QWORD*)v40 = *v39;
								*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
								*(_QWORD*)(v1 + 16) += 16i64;
								sub_1400F0870(v1, v40, L"strName", v41);
								*(_QWORD*)(v1 + 16) -= 16i64;
								sub_1400FB1D0((__int64)&v46);
								sub_1400579E0(v1, v42, v33);
							}
						}
					}
					++v26;
				} while (v26 < v27);
			}
			else
			{
				v13 = sub_1405BE150(v10, v5);
				if (!v13)
				{
					v14 = 0;
				LABEL_25:
					sub_1400579E0(v1, v12, v11);
					return v14;
				}
				v15 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v15 = 0x3FF0000000000000i64;
				*(_DWORD*)(v15 + 8) = 3;
				v16 = *(_QWORD*)(v1 + 32);
				*(_QWORD*)(v1 + 16) += 16i64;
				if (*(_QWORD*)(v16 + 120) >= *(_QWORD*)(v16 + 112))
					sub_14005E2C0(v1);
				v17 = *(_QWORD*)(v1 + 16);
				v18 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v17 + 8) = 5;
				*(_QWORD*)v17 = v18;
				*(_QWORD*)(v1 + 16) += 16i64;
				LODWORD(v17) = sub_1400578C0(v1);
				v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
				v20 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F06F0(v1, v20, L"eTradeskillId", v5);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_14034BDD0(v21, *(_DWORD*)(v13 + 4));
				v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
				v23 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v23 = *v22;
				*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v23, L"strName", v24);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v46);
				sub_1400579E0(v1, v25, v17);
			}
			v11 = v47;
			v1 = v48;
		LABEL_24:
			v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v11);
			v44 = *(_QWORD*)(v1 + 16);
			v14 = 1;
			v12 = *v43;
			*(_QWORD*)v44 = *v43;
			*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			goto LABEL_25;
		}
	}
	return 0i64;
}
// 14065F471: variable 'v10' is possibly undefined
// 14065F523: variable 'v21' is possibly undefined
// 14065F55F: variable 'v24' is possibly undefined
// 14065F57B: variable 'v25' is possibly undefined
// 14065F5B9: variable 'v29' is possibly undefined
// 14065F64D: variable 'v37' is possibly undefined
// 14065F65B: variable 'v38' is possibly undefined
// 14065F697: variable 'v41' is possibly undefined
// 14065F6B3: variable 'v42' is possibly undefined
// 14065F703: variable 'v12' is possibly undefined
// 140B2D8C0: using guessed type wchar_t aStrname_54[8];
// 140B2D8E8: using guessed type wchar_t aStrname_53[8];
// 140B2D8F8: using guessed type wchar_t aEtradeskillid_5[14];
// 140B2D928: using guessed type wchar_t aEtradeskillid_4[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

