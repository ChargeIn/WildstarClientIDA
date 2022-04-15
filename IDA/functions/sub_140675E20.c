//----- (0000000140675E20) ----------------------------------------------------
__int64 __fastcall sub_140675E20(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	unsigned __int16* v13; // r11
	int* v14; // rax
	__int64 v15; // rcx
	int v16; // edi
	int* v17; // rax
	_QWORD* v18; // r15
	int* v19; // rdi
	__int64 v20; // rax
	wchar_t* v21; // rcx
	bool v22; // zf
	__int64 v23; // r14
	int* v24; // rax
	int* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rax
	int* v28; // rax
	__int64 v29; // rax
	int* v30; // rax
	int* v31; // rdx
	__int64 v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	unsigned __int16* v36; // r11
	int v37; // r12d
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	__int64 v41; // rdi
	unsigned __int64 v42; // rbx
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	_DWORD* v45; // rax
	__int64* v46; // rax
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	__int64 v50; // rdi
	unsigned __int64* v51; // rdx
	_DWORD* v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // r10
	__int64 v55; // rdx
	__int64 v56; // rdi
	unsigned __int64 v57; // rbx
	unsigned __int64* v58; // rdx
	unsigned __int64 v59; // r8
	_DWORD* v60; // rax
	__int64* v61; // rax
	_QWORD* v62; // rax
	__int64 v63; // r10
	__int64 v64; // rdx
	unsigned __int64* v65; // rdx
	__int64* v66; // rax
	unsigned int v67; // ecx
	__int64 v68; // rax
	int v69; // ebx
	int* v70; // rax
	int* v71; // rdx
	__int64 v72; // rax
	__int64 v73; // rax
	int* v74; // rdi
	int* v75; // r14
	__int64 v76; // rbx
	unsigned __int64 v77; // rbx
	int* v78; // rax
	_QWORD* v79; // rax
	__int64 v80; // r10
	__int64 v81; // rdx
	_QWORD* v82; // rcx
	__int64 v83; // [rsp+30h] [rbp-D0h] BYREF
	int* v84; // [rsp+38h] [rbp-C8h]
	int* v85; // [rsp+40h] [rbp-C0h]
	__int64 v86; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v87)(); // [rsp+50h] [rbp-B0h] BYREF
	char v88[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v89; // [rsp+60h] [rbp-A0h]
	_WORD* v90; // [rsp+68h] [rbp-98h]
	__int128 v91; // [rsp+110h] [rbp+10h]
	int* v92; // [rsp+120h] [rbp+20h]
	int v93; // [rsp+170h] [rbp+70h] BYREF

	if (!a3)
		return 0i64;
	sub_14034BDD0(a1, *(_DWORD*)(*(_QWORD*)(a3 + 8) + 16i64));
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v12, L"strName", v13);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (*(_DWORD*)(*(_QWORD*)(a3 + 8) + 32i64))
	{
		sub_1400B6F30((__int64)&v87);
		v87 = off_140B69230;
		v92 = 0i64;
		v91 = 0i64;
		v14 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v91 = v14;
		*((_QWORD*)&v91 + 1) = v14;
		v15 = (__int64)(v14 + 4);
		v92 = v14 + 4;
		if (v14)
			*(_WORD*)v14 = 0;
		v16 = a5;
		if (a5)
		{
			v17 = sub_14018B280(88i64, 0);
			if (v17)
				v18 = (_QWORD*)sub_1404DDA70((__int64)v17, v16);
			else
				v18 = 0i64;
			v19 = 0i64;
			v84 = 0i64;
			v85 = 0i64;
			v86 = 0i64;
			v20 = 0i64;
			v21 = L"CasterItemLevel";
			do
				v22 = aCasteritemleve_2[++v20] == 0;
			while (!v22);
			v23 = (2 * v20) >> 1;
			if ((unsigned __int64)(v23 + 1) > 0x7FFFFFFFFFFFFFFEi64)
				goto LABEL_37;
			v24 = sub_14018B280(2 * (v23 + 1), 0);
			v86 = (__int64)v24 + 2 * v23 + 2;
			v21 = L"CasterItemLevel";
		}
		else if (!*(_DWORD*)(a1 + 1336) || a1 == -192)
		{
			if (!*(_DWORD*)(a1 + 1344) || !*(_QWORD*)(a1 + 168))
				goto LABEL_41;
			v28 = sub_14018B280(88i64, 0);
			if (v28)
			{
				if (*(_DWORD*)(a1 + 1344))
					v18 = (_QWORD*)sub_1404DDA70((__int64)v28, *(_DWORD*)(*(_QWORD*)(a1 + 168) + 20i64));
				else
					v18 = (_QWORD*)sub_1404DDA70((__int64)v28, MEMORY[0x14]);
			}
			else
			{
				v18 = 0i64;
			}
			v19 = 0i64;
			v84 = 0i64;
			v85 = 0i64;
			v86 = 0i64;
			v29 = 0i64;
			v21 = L"CasterItemLevel";
			do
				v22 = aCasteritemleve_4[++v29] == 0;
			while (!v22);
			v23 = (2 * v29) >> 1;
			if ((unsigned __int64)(v23 + 1) > 0x7FFFFFFFFFFFFFFEi64)
			{
			LABEL_37:
				sub_1407DB590(v19, (int*)v21, 2 * v23);
				v30 = (int*)((char*)v19 + 2 * v23);
				v85 = v30;
				if (v30)
					*(_WORD*)v30 = 0;
				sub_1400B7480((__int64)&v87, v18);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v18 + 72i64))(v18, &v83);
				v15 = (__int64)v84;
				if (v84)
					sub_14018B900((__int64)v84, 0);
			LABEL_41:
				v31 = (int*)sub_14034BDD0(v15, *(_DWORD*)(*(_QWORD*)(a3 + 8) + 32i64));
				if (v31)
				{
					v32 = 0i64;
					if (*(_WORD*)v31)
					{
						do
							++v32;
						while (*((_WORD*)v31 + v32));
					}
					sub_14001C480((__int64)v88, v31, (int*)((char*)v31 + 2 * v32));
				}
				else if (v89 != v90)
				{
					*v89 = 0;
					v90 = v89;
				}
				sub_1400B7660(&v87);
				v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
				v35 = *(_QWORD*)(v34 + 16);
				*(_QWORD*)v35 = *v33;
				*(_DWORD*)(v35 + 8) = *((_DWORD*)v33 + 2);
				*(_QWORD*)(v34 + 16) += 16i64;
				sub_1400F0870(*(_QWORD*)(a2 + 16), v35, L"strFlavor", v36);
				*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
				v37 = a4 - 1;
				if (v37)
				{
					if (v37 != 1)
					{
					LABEL_78:
						if ((_QWORD)v91)
							sub_14018B900(v91, 0);
						sub_1400B7390(&v87);
						goto LABEL_81;
					}
					v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
					v40 = *(_QWORD*)(v39 + 16);
					*(_QWORD*)v40 = *v38;
					*(_DWORD*)(v40 + 8) = *((_DWORD*)v38 + 2);
					*(_QWORD*)(v39 + 16) += 16i64;
					v41 = *(_QWORD*)(a2 + 16);
					v42 = -1i64;
					v43 = (unsigned __int64*)sub_14018F0E0(&v83, L"bActivate")[1];
					if (v43)
					{
						v44 = -1i64;
						do
							++v44;
						while (*((_BYTE*)v43 + v44));
						sub_140058710(v41, v43, v44);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v41 + 16) + 8i64) = 0;
						*(_QWORD*)(v41 + 16) += 16i64;
					}
					if (v84)
						sub_14018B900((__int64)v84, 0);
					v45 = *(_DWORD**)(v41 + 16);
					*v45 = 1;
					v45[2] = 1;
					*(_QWORD*)(v41 + 16) += 16i64;
					v46 = (__int64*)sub_1400580E0(v41, -3);
					sub_14005EA50(
						v41,
						v46,
						(int*)(*(_QWORD*)(v41 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v41 + 16) - 16i64));
					*(_QWORD*)(v41 + 16) -= 32i64;
					*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
					v49 = *(_QWORD*)(v48 + 16);
					*(_QWORD*)v49 = *v47;
					*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
					*(_QWORD*)(v48 + 16) += 16i64;
					v50 = *(_QWORD*)(a2 + 16);
					v51 = (unsigned __int64*)sub_14018F0E0(&v83, L"bOnEquip")[1];
					if (v51)
					{
						do
							++v42;
						while (*((_BYTE*)v51 + v42));
						sub_140058710(v50, v51, v42);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v50 + 16) + 8i64) = 0;
						*(_QWORD*)(v50 + 16) += 16i64;
					}
					if (v84)
						sub_14018B900((__int64)v84, 0);
					v52 = *(_DWORD**)(v50 + 16);
					*v52 = 0;
				}
				else
				{
					v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
					v55 = *(_QWORD*)(v54 + 16);
					*(_QWORD*)v55 = *v53;
					*(_DWORD*)(v55 + 8) = *((_DWORD*)v53 + 2);
					*(_QWORD*)(v54 + 16) += 16i64;
					v56 = *(_QWORD*)(a2 + 16);
					v57 = -1i64;
					v58 = (unsigned __int64*)sub_14018F0E0(&v83, L"bActivate")[1];
					if (v58)
					{
						v59 = -1i64;
						do
							++v59;
						while (*((_BYTE*)v58 + v59));
						sub_140058710(v56, v58, v59);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v56 + 16) + 8i64) = 0;
						*(_QWORD*)(v56 + 16) += 16i64;
					}
					if (v84)
						sub_14018B900((__int64)v84, 0);
					v60 = *(_DWORD**)(v56 + 16);
					*v60 = 0;
					v60[2] = 1;
					*(_QWORD*)(v56 + 16) += 16i64;
					v61 = (__int64*)sub_1400580E0(v56, -3);
					sub_14005EA50(
						v56,
						v61,
						(int*)(*(_QWORD*)(v56 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v56 + 16) - 16i64));
					*(_QWORD*)(v56 + 16) -= 32i64;
					*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					v62 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
					v64 = *(_QWORD*)(v63 + 16);
					*(_QWORD*)v64 = *v62;
					*(_DWORD*)(v64 + 8) = *((_DWORD*)v62 + 2);
					*(_QWORD*)(v63 + 16) += 16i64;
					v50 = *(_QWORD*)(a2 + 16);
					v65 = (unsigned __int64*)sub_14018F0E0(&v83, L"bOnEquip")[1];
					if (v65)
					{
						do
							++v57;
						while (*((_BYTE*)v65 + v57));
						sub_140058710(v50, v65, v57);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v50 + 16) + 8i64) = 0;
						*(_QWORD*)(v50 + 16) += 16i64;
					}
					if (v84)
						sub_14018B900((__int64)v84, 0);
					v52 = *(_DWORD**)(v50 + 16);
					*v52 = 1;
				}
				v52[2] = 1;
				*(_QWORD*)(v50 + 16) += 16i64;
				v66 = (__int64*)sub_1400580E0(v50, -3);
				sub_14005EA50(v50, v66, (int*)(*(_QWORD*)(v50 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v50 + 16) - 16i64));
				*(_QWORD*)(v50 + 16) -= 32i64;
				*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
				goto LABEL_78;
			}
			v24 = sub_14018B280(2 * (v23 + 1), 0);
			v86 = (__int64)v24 + 2 * v23 + 2;
			v21 = L"CasterItemLevel";
		}
		else
		{
			v25 = sub_14018B280(88i64, 0);
			if (v25)
			{
				v26 = 0i64;
				if (*(_DWORD*)(a1 + 1336))
					v26 = a1 + 192;
				v18 = (_QWORD*)sub_1404DDA70((__int64)v25, *(_DWORD*)(v26 + 12));
			}
			else
			{
				v18 = 0i64;
			}
			v19 = 0i64;
			v84 = 0i64;
			v85 = 0i64;
			v86 = 0i64;
			v27 = 0i64;
			v21 = L"CasterItemLevel";
			do
				v22 = aCasteritemleve_3[++v27] == 0;
			while (!v22);
			v23 = (2 * v27) >> 1;
			if ((unsigned __int64)(v23 + 1) > 0x7FFFFFFFFFFFFFFEi64)
				goto LABEL_37;
			v24 = sub_14018B280(2 * (v23 + 1), 0);
			v86 = (__int64)v24 + 2 * v23 + 2;
			v21 = L"CasterItemLevel";
		}
		v19 = v24;
		v84 = v24;
		v85 = v24;
		goto LABEL_37;
	}
LABEL_81:
	v67 = *(_DWORD*)(*(_QWORD*)(a3 + 112) + 360i64);
	if (v67)
	{
		v68 = sub_1402259C0(v67);
		if (v68)
		{
			v69 = *(_DWORD*)(v68 + 56);
			if (v69)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(qword_140C65898 + 120),
						*(unsigned int*)(*(_QWORD*)(a3 + 112) + 360i64),
						0i64,
						0i64,
						0))
				{
					sub_1400B6F30((__int64)&v87);
					v87 = off_140B69230;
					v92 = 0i64;
					v91 = 0i64;
					v70 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v91 = v70;
					*((_QWORD*)&v91 + 1) = v70;
					v92 = v70 + 4;
					if (v70)
						*(_WORD*)v70 = 0;
					v71 = (int*)sub_14034BDD0((__int64)(v70 + 4), v69);
					if (v71)
					{
						v72 = 0i64;
						if (*(_WORD*)v71)
						{
							do
								++v72;
							while (*((_WORD*)v71 + v72));
						}
						sub_14001C480((__int64)v88, v71, (int*)((char*)v71 + 2 * v72));
					}
					else if (v89 != v90)
					{
						*v89 = 0;
						v90 = v89;
					}
					v73 = sub_1400B7660(&v87);
					v74 = 0i64;
					v75 = *(int**)(v73 + 8);
					v76 = (__int64)(*(_QWORD*)(v73 + 16) - (_QWORD)v75) >> 1;
					if ((unsigned __int64)(v76 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v74 = sub_14018B280(2 * (v76 + 1), 0);
					v77 = 2 * v76;
					sub_1407DB590(v74, v75, v77);
					v78 = (int*)((char*)v74 + v77);
					if ((int*)((char*)v74 + v77))
						*(_WORD*)v78 = 0;
					if (v74 != v78)
					{
						v79 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
						v81 = *(_QWORD*)(v80 + 16);
						*(_QWORD*)v81 = *v79;
						*(_DWORD*)(v81 + 8) = *((_DWORD*)v79 + 2);
						*(_QWORD*)(v80 + 16) += 16i64;
						sub_1400F0870(*(_QWORD*)(a2 + 16), v81, L"strFailure", (unsigned __int16*)v74);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
					if (v74)
						sub_14018B900((__int64)v74, 0);
					if ((_QWORD)v91)
						sub_14018B900(v91, 0);
					sub_1400B7390(&v87);
				}
			}
		}
	}
	v82 = *(_QWORD**)(a2 + 16);
	v93 = **(_DWORD**)(a3 + 112);
	if ((unsigned int)sub_1403D3470(v82, &v93))
	{
		sub_1400FB540(a2);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	return 1i64;
}
// 140675E94: variable 'v11' is possibly undefined
// 140675EB7: variable 'v13' is possibly undefined
// 1406761B6: variable 'v15' is possibly undefined
// 14067622D: variable 'v34' is possibly undefined
// 140676250: variable 'v36' is possibly undefined
// 140676287: variable 'v39' is possibly undefined
// 140676352: variable 'v48' is possibly undefined
// 1406763DC: variable 'v54' is possibly undefined
// 1406764A4: variable 'v63' is possibly undefined
// 1406766D4: variable 'v80' is possibly undefined
// 140B30020: using guessed type wchar_t aBonequip_1[9];
// 140B30038: using guessed type wchar_t aStrfailure_0[11];
// 140B30050: using guessed type wchar_t aBonequip_0[9];
// 140B30068: using guessed type wchar_t aBactivate_0[10];
// 140B30080: using guessed type wchar_t aStrflavor_1[10];
// 140B30098: using guessed type wchar_t aBactivate[10];
// 140B300B0: using guessed type wchar_t aCasteritemleve_3[16];
// 140B300D0: using guessed type wchar_t aCasteritemleve_4[16];
// 140B300F0: using guessed type wchar_t aStrname_65[8];
// 140B30100: using guessed type wchar_t aCasteritemleve_2[16];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140675E20: using guessed type char var_F8[8];

