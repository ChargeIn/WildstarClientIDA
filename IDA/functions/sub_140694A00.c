//----- (0000000140694A00) ----------------------------------------------------
__int64 __fastcall sub_140694A00(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // r13
	_QWORD* v6; // r12
	int v7; // eax
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	unsigned int v13; // esi
	__int64 i; // r15
	__int16* v15; // r14
	__int64 v16; // rdi
	__int64 v17; // rax
	int v18; // edi
	int* v19; // rax
	int* v20; // rax
	_QWORD* v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // r10
	int v25; // r14d
	_QWORD* v26; // rax
	__int64 v27; // rdx
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	_DWORD* v30; // rcx
	__int64* v31; // rax
	_QWORD* v32; // rcx
	int v33; // edx
	__int64 v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // rdx
	int v37; // r10d
	unsigned __int16* v38; // r8
	__int64 v39; // r11
	__int64 v40; // rax
	__int64 v41; // rcx
	int* v42; // rax
	_QWORD* v43; // rax
	__int64 v44; // rdx
	__int64* v45; // rax
	__int64 v46; // r11
	__int64 v47; // r9
	int v48; // r8d
	__int64 v49; // rdx
	__int64(__fastcall * *v50)(); // [rsp+20h] [rbp-148h] BYREF
	int v51; // [rsp+28h] [rbp-140h]
	_QWORD* v52; // [rsp+30h] [rbp-138h]
	int v53; // [rsp+38h] [rbp-130h]
	__int64 v54; // [rsp+40h] [rbp-128h] BYREF
	__int64 v55; // [rsp+48h] [rbp-120h]
	__int64 v56[24]; // [rsp+60h] [rbp-108h] BYREF
	__int128 v57; // [rsp+120h] [rbp-48h]
	int* v58; // [rsp+130h] [rbp-38h]

	if (qword_140C65C28)
	{
		v2 = sub_140056AB0(a1, 1u);
		if (v2)
		{
			v3 = *(_QWORD*)(v2 + 8);
			if (v3)
			{
				v4 = sub_140643EA0(qword_140C65C28, ***(_DWORD***)(v3 + 8));
				v5 = v4;
				if (v4)
				{
					v6 = *(_QWORD**)(v4 + 40);
					v7 = sub_1406428D0((__int64)v6);
					if (v7 != 1 && v7 != 3 && v7 != 5)
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
						return 1i64;
					}
					v9 = a1[4];
					v50 = off_140B569F0;
					v10 = *(_QWORD*)(v9 + 112);
					v52 = a1;
					v53 = 1;
					if (*(_QWORD*)(v9 + 120) >= v10)
						sub_14005E2C0((__int64)a1);
					v11 = a1[2];
					v12 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v11 + 8) = 5;
					*(_QWORD*)v11 = v12;
					a1[2] += 16i64;
					v51 = sub_1400578C0((__int64)a1);
					v13 = 0;
					for (i = 0i64; ; i += 8i64)
					{
						v15 = sub_14048C100(v6, v13);
						if (v15)
							break;
					LABEL_41:
						if (++v13 >= 0x20)
						{
							v45 = sub_14005C3C0(*(_QWORD*)(v52[4] + 160i64), v51);
							v47 = *(_QWORD*)(v46 + 16);
							v48 = v51;
							v49 = *v45;
							*(_QWORD*)v47 = *v45;
							*(_DWORD*)(v47 + 8) = *((_DWORD*)v45 + 2);
							*(_QWORD*)(v46 + 16) += 16i64;
							sub_1400579E0(v46, v49, v48);
							return 1i64;
						}
					}
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v16 = a1[2];
					v17 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v16 + 8) = 5;
					*(_QWORD*)v16 = v17;
					a1[2] += 16i64;
					v18 = sub_1400578C0((__int64)a1);
					sub_1400B7210((__int64)v56, (int*)L"$1n");
					v56[0] = (__int64)off_140B69230;
					v58 = 0i64;
					v57 = 0i64;
					v19 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v57 = v19;
					*((_QWORD*)&v57 + 1) = v19;
					v58 = v19 + 4;
					if (v19)
						*(_WORD*)v19 = 0;
					v20 = sub_14018B280(96i64, 0);
					if (v20)
						v21 = (_QWORD*)sub_1404DDB40((__int64)v20, (int*)v15);
					else
						v21 = 0i64;
					sub_1400B7480((__int64)v56, v21);
					sub_1400B7660(v56);
					v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
					v23 = a1[2];
					*(_QWORD*)v23 = *v22;
					*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v23, L"strChecklistEntry", v24);
					a1[2] -= 16i64;
					v25 = sub_140642A00((_DWORD*)v5, v13);
					v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
					v27 = a1[2];
					*(_QWORD*)v27 = *v26;
					*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
					a1[2] += 16i64;
					v28 = (unsigned __int64*)sub_14018F0E0(&v54, L"bIsComplete")[1];
					if (v28)
					{
						v29 = -1i64;
						do
							++v29;
						while (*((_BYTE*)v28 + v29));
						sub_140058710((__int64)a1, v28, v29);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v55)
						sub_14018B900(v55, 0);
					v30 = (_DWORD*)a1[2];
					v30[2] = 1;
					*v30 = v25 != 0;
					a1[2] += 16i64;
					v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					a1[2] -= 48i64;
					v32 = *(_QWORD**)(v5 + 40);
					v33 = *(_DWORD*)(*v32 + 4i64);
					if (v33 == 40)
					{
						v40 = v32[3];
						if (v40)
						{
							v41 = *(_QWORD*)(v40 + i);
							if (v41)
							{
								v42 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v41 + 12), 0i64);
								if (v42)
								{
									if (v42[115])
									{
										v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
										v36 = a1[2];
										v38 = L"idSchematic";
										*(_QWORD*)v36 = *v43;
										*(_DWORD*)(v36 + 8) = *((_DWORD*)v43 + 2);
										goto LABEL_37;
									}
								}
							}
						}
					}
					else if (v33 == 44)
					{
						v34 = v32[3];
						if (v34)
						{
							if (*(_QWORD*)(v34 + i))
							{
								v35 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
								v38 = L"idSchematic";
								*(_QWORD*)v39 = *v35;
								*(_DWORD*)(v39 + 8) = *((_DWORD*)v35 + 2);
							LABEL_37:
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v36, v38, v37);
								a1[2] -= 16i64;
							}
						}
					}
					sub_1400FB1D0((__int64)&v50);
					if ((_QWORD)v57)
						sub_14018B900(v57, 0);
					sub_1400B7390(v56);
					sub_1400579E0((__int64)a1, v44, v18);
					goto LABEL_41;
				}
			}
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140694D55: conditional instruction was optimized away because esi.4<20u
// 140694DA0: conditional instruction was optimized away because esi.4<20u
// 140694C57: variable 'v24' is possibly undefined
// 140694D88: variable 'v39' is possibly undefined
// 140694E02: variable 'v36' is possibly undefined
// 140694E02: variable 'v37' is possibly undefined
// 140694E3C: variable 'v44' is possibly undefined
// 140694E69: variable 'v46' is possibly undefined
// 140B33EC8: using guessed type wchar_t aIdschematic[12];
// 140B33EF0: using guessed type wchar_t aBiscomplete_1[12];
// 140B33F08: using guessed type wchar_t aIdschematic_0[12];
// 140B33F20: using guessed type wchar_t a1n_15[4];
// 140B33F28: using guessed type wchar_t aStrchecklisten[18];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65C28: using guessed type __int64 qword_140C65C28;

