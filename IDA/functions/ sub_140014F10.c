//----- (0000000140014F10) ----------------------------------------------------
__int64 __fastcall sub_140014F10(_QWORD* a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD** a5)
{
	int* v5; // r14
	int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // r12
	int* v11; // rbx
	__int64 v12; // rax
	bool v13; // zf
	char* v14; // r15
	unsigned __int64 v15; // r13
	_BYTE* v16; // r15
	int v17; // ebx
	void* v18; // rdx
	int* v19; // rbx
	__int64 v20; // rax
	char* v21; // r15
	unsigned __int64 v22; // r13
	_BYTE* v23; // r15
	_DWORD* v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rax
	unsigned int v28; // edi
	__int64 v29; // r13
	__int64 v30; // rax
	int* v31; // rbx
	__int64 v32; // rax
	char* v33; // r12
	unsigned __int64 v34; // r15
	char* v35; // rax
	int v36; // ebx
	int* v37; // rbx
	__int64 v38; // rax
	char* v39; // r13
	unsigned __int64 v40; // r15
	char* v41; // rax
	_WORD* v42; // rbx
	int v43; // ebx
	__int64 v44; // rcx
	int v45; // eax
	unsigned int v46; // edi
	__int64 v47; // rcx
	__int64* v48; // rax
	__int64 v49; // rbx
	__int16* v50; // rax
	__int64* v51; // rax
	__int64 v52; // rax
	__int64 v53; // rcx
	int v54; // eax
	int v55; // eax
	__int64* v56; // rdi
	unsigned int v57; // ebx
	__int64 v58; // rax
	__int64 v59; // r12
	unsigned __int8 v60; // r15
	__int64 v61; // rdx
	int* v62; // rsi
	__int64 v63; // rbx
	int* v64; // rax
	__int64 v65; // rdi
	unsigned __int64 v66; // rbx
	_QWORD* v67; // rsi
	int v68; // eax
	int* v69; // rbx
	__int64 v70; // rax
	char* v71; // r15
	unsigned __int64 v72; // rdi
	char* v73; // rax
	__int64* v74; // rax
	__int64 v75; // rcx
	__int64 v76; // rbx
	__int16* v77; // rax
	__int64* v78; // rax
	__int64(__fastcall * **v79)(); // rax
	__int64 v80; // rcx
	__int64(__fastcall * *v81)(); // rbx
	__int16* v82; // rax
	__int64* v83; // rax
	int v84; // ebx
	__int64 v85; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v86; // [rsp+48h] [rbp-B8h] BYREF
	int* v87; // [rsp+50h] [rbp-B0h]
	_DWORD** v88; // [rsp+68h] [rbp-98h] BYREF
	__int64 v89; // [rsp+70h] [rbp-90h] BYREF
	unsigned int i; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v91)(); // [rsp+80h] [rbp-80h] BYREF
	__int64 v92; // [rsp+88h] [rbp-78h]
	LPVOID v93; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v94)(); // [rsp+A0h] [rbp-60h] BYREF
	__int64 v95; // [rsp+A8h] [rbp-58h]
	LPVOID v96; // [rsp+B0h] [rbp-50h]
	__int64* v97; // [rsp+B8h] [rbp-48h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+C0h] [rbp-40h] BYREF
	__int64 v99; // [rsp+C8h] [rbp-38h]
	LPVOID v100; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v101)(); // [rsp+D8h] [rbp-28h] BYREF
	__int64 v102; // [rsp+E0h] [rbp-20h]
	LPVOID Value; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v104)(); // [rsp+F0h] [rbp-10h] BYREF
	__int64 v105; // [rsp+F8h] [rbp-8h]
	LPVOID lpTlsValue; // [rsp+100h] [rbp+0h]
	unsigned int v108; // [rsp+168h] [rbp+68h] BYREF

	v5 = 0i64;
	v8 = 0;
	v108 = 0;
	v88 = 0i64;
	switch (a4)
	{
	case 3u:
		v30 = a1[708];
		if (!v30)
		{
			v102 = 0i64;
			v101 = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v101);
			v91 = v101;
			v92 = v102;
			v93 = Value;
			if (qword_140C65828)
			{
				if ((unsigned int)dword_140C1E564 > 3)
				{
					v31 = *(int**)(qword_140C65828 + 8);
					if (v31)
					{
						v32 = -1i64;
						do
							v13 = *((_BYTE*)v31 + ++v32) == 0;
						while (!v13);
						v33 = (char*)v31 + v32;
						v34 = v32;
						if (v32 != -2)
							v5 = sub_14018B280(v32 + 1, 0);
						sub_1407DB590(v5, v31, v34);
						v35 = &v33[(char*)v5 - (char*)v31];
						if (v35)
							*v35 = 0;
					LABEL_65:
						v85 = 0x141CDAD80i64;
						v36 = sub_1401971E0(&dword_140C89EE4, 22, &v85, 3i64, v5, &v91);
						if (v5)
							sub_14018B900((__int64)v5, 0);
						v101 = &off_140B5E648;
						TlsSetValue(dwTlsIndex, Value);
						if (!v36)
							return 1i64;
						goto LABEL_68;
					}
				}
				sub_14018EE90(&v86, (__int64)"Invalid or foreign Message Id #%d", 3i64);
			}
			else
			{
				sub_14018EE90(&v86, (__int64)"Message Id #%d", 3i64);
			}
			v5 = v87;
			goto LABEL_65;
		}
		if (a3 == *(_DWORD*)(v30 + 152))
		{
			v29 = (__int64)a5;
			v28 = 3;
			v88 = a5;
			v108 = 3;
			goto LABEL_89;
		}
		v95 = 0i64;
		v94 = &off_140B5E648;
		v96 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v94);
		v91 = v94;
		v92 = v95;
		v93 = v96;
		if (qword_140C65828)
		{
			if ((unsigned int)dword_140C1E564 > 3)
			{
				v37 = *(int**)(qword_140C65828 + 8);
				if (v37)
				{
					v38 = -1i64;
					do
						v13 = *((_BYTE*)v37 + ++v38) == 0;
					while (!v13);
					v39 = (char*)v37 + v38;
					v40 = v38;
					if (v38 != -2)
						v5 = sub_14018B280(v38 + 1, 0);
					sub_1407DB590(v5, v37, v40);
					v41 = &v39[(char*)v5 - (char*)v37];
					if (v41)
						*v41 = 0;
				LABEL_82:
					v42 = (_WORD*)(a1[708] + 102i64);
					if (!*v42)
						sub_140334D90(a1[708] + 24i64);
					v85 = 0x141CDAE30i64;
					v43 = sub_1401971E0(&dword_140C89EE0, 22, &v85, v42, 3, v5, &v91);
					if (v5)
						sub_14018B900((__int64)v5, 0);
					v94 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, v96);
					if (!v43)
						return 1i64;
				LABEL_68:
					DebugBreak();
					return 1i64;
				}
			}
			sub_14018EE90(&v86, (__int64)"Invalid or foreign Message Id #%d", 3i64);
		}
		else
		{
			sub_14018EE90(&v86, (__int64)"Message Id #%d", 3i64);
		}
		v5 = v87;
		goto LABEL_82;
	case 0x76u:
		v25 = *a5;
		v26 = a1[708];
		break;
	case 0x3DCu:
		v25 = *a5;
		v26 = a1[709];
		break;
	default:
		v88 = a5;
		v9 = *(_QWORD*)qword_140C65808;
		v108 = a4;
		v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(v9 + 48))(qword_140C65808, a3);
		if (v10)
		{
			TlsValue = &off_140B5E648;
			v99 = 0i64;
			v100 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v91 = TlsValue;
			v92 = v99;
			v93 = v100;
			if (qword_140C65828)
			{
				if (a4 < 3)
				{
					sub_14018EE90(&v86, (__int64)"Base Message Id #%d", a4);
				}
				else
				{
					if (a4 < dword_140C1E564)
					{
						v11 = *(int**)(qword_140C65828 + 16i64 * (a4 - 3) + 8);
						if (v11)
						{
							v12 = -1i64;
							do
								v13 = *((_BYTE*)v11 + ++v12) == 0;
							while (!v13);
							v14 = (char*)v11 + v12;
							v15 = v12;
							if (v12 != -2)
								v5 = sub_14018B280(v12 + 1, 0);
							sub_1407DB590(v5, v11, v15);
							v16 = (char*)v5 + v14 - (char*)v11;
							if (v16)
								*v16 = 0;
							goto LABEL_19;
						}
					}
					sub_14018EE90(&v86, (__int64)"Invalid or foreign Message Id #%d", a4);
				}
			}
			else
			{
				sub_14018EE90(&v86, (__int64)"Message Id #%d", a4);
			}
			v5 = v87;
		LABEL_19:
			if (!*(_WORD*)(v10 + 102))
				sub_140334D90(v10 + 24);
			v85 = 0x141CDAC30i64;
			v17 = sub_1401971E0(&dword_140C89EEC, 22, &v85, v10 + 102, a4, v5, &v91);
			if (v5)
				sub_14018B900((__int64)v5, 0);
			v18 = v100;
			TlsValue = &off_140B5E648;
		LABEL_41:
			TlsSetValue(dwTlsIndex, v18);
			if (v17)
				DebugBreak();
			return 1i64;
		}
		v104 = &off_140B5E648;
		v105 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v104);
		v91 = v104;
		v92 = v105;
		v93 = lpTlsValue;
		if (qword_140C65828)
		{
			if (a4 < 3)
			{
				sub_14018EE90(&v86, (__int64)"Base Message Id #%d", a4);
			}
			else
			{
				if (a4 < dword_140C1E564)
				{
					v19 = *(int**)(qword_140C65828 + 16i64 * (a4 - 3) + 8);
					if (v19)
					{
						v20 = -1i64;
						do
							v13 = *((_BYTE*)v19 + ++v20) == 0;
						while (!v13);
						v21 = (char*)v19 + v20;
						v22 = v20;
						if (v20 != -2)
							v5 = sub_14018B280(v20 + 1, 0);
						sub_1407DB590(v5, v19, v22);
						v23 = (char*)v5 + v21 - (char*)v19;
						if (v23)
							*v23 = 0;
						goto LABEL_38;
					}
				}
				sub_14018EE90(&v86, (__int64)"Invalid or foreign Message Id #%d", a4);
			}
		}
		else
		{
			sub_14018EE90(&v86, (__int64)"Message Id #%d", a4);
		}
		v5 = v87;
	LABEL_38:
		v85 = 0x141CDACD0i64;
		v17 = sub_1401971E0(&dword_140C89EE8, 22, &v85, a4, v5, &v91);
		if (v5)
			sub_14018B900((__int64)v5, 0);
		v18 = lpTlsValue;
		v104 = &off_140B5E648;
		goto LABEL_41;
	}
	if (v26)
	{
		v27 = *(_QWORD*)(v26 + 16);
		if (v27)
			(*(void(__fastcall**)(_QWORD, _DWORD*, _QWORD))(v27 + 32))(
				*(_QWORD*)(v27 + 24),
				v25 + 1,
				(unsigned int)(*v25 - 4));
	}
	if ((*(unsigned int(__fastcall**)(__int64, _DWORD***, unsigned int*, _QWORD, _DWORD*))(*(_QWORD*)qword_140C65808
		+ 256i64))(
			qword_140C65808,
			&v88,
			&v108,
			a1[2],
			v25))
	{
		return 2147500037i64;
	}
	v28 = v108;
	v29 = (__int64)v88;
LABEL_89:
	v44 = a1[666];
	if (!v44)
		goto LABEL_102;
	v45 = sub_140003FB0(v44, a2, v28, (unsigned int*)v29);
	v46 = v45;
	if (v45 >= 0)
	{
		v28 = v108;
		v29 = (__int64)v88;
		if (!v45)
			v8 = 1;
	LABEL_102:
		if (qword_140C65910)
		{
			v54 = sub_140452670(v44, a2, v28, (int*)v29);
			v46 = v54;
			if (v54 < 0)
			{
				if (!qword_140C65828)
					goto LABEL_92;
			LABEL_111:
				v48 = sub_140335F10(&v86, v108);
				goto LABEL_93;
			}
			v28 = v108;
			v29 = (__int64)v88;
			if (!v54)
				v8 = 1;
		}
		if (qword_140C65908)
		{
			v55 = sub_14044B630(v44, a2, v28, v29);
			v46 = v55;
			if (v55 < 0)
			{
				if (!qword_140C65828)
					goto LABEL_92;
				goto LABEL_111;
			}
			if (!v55)
				return 0i64;
			v28 = v108;
			v29 = (__int64)v88;
		}
		if (!v8)
		{
			if (v28 == 1891)
			{
				v56 = a1 + 711;
				v97 = a1 + 711;
				sub_14001A1B0(a1 + 711);
				v57 = 0;
				for (i = 0; v57 < *(_DWORD*)v29; i = v57)
				{
					v58 = sub_14001A070(v56);
					v59 = 16i64 * v57;
					v60 = 0;
					v61 = v59 + *(_QWORD*)(v29 + 8);
					if (*(_BYTE*)(v61 + 4))
					{
						v89 = 16 * v58;
						do
						{
							v62 = *(int**)(*(_QWORD*)(v61 + 8) + 8i64 * v60);
							if (v62)
							{
								v63 = 0i64;
								if (*(_WORD*)v62)
								{
									do
										++v63;
									while (*((_WORD*)v62 + v63));
								}
								v64 = sub_14018B280(2 * v63 + 18, 0);
								if (v64)
								{
									*((_QWORD*)v64 + 1) = v63;
									*(_QWORD*)v64 = off_140B55060;
								}
								else
								{
									v64 = 0i64;
								}
								v65 = (__int64)(v64 + 4);
								v66 = 2 * v63;
								sub_1407DB590(v64 + 4, v62, v66);
								*(_WORD*)(v65 + v66) = 0;
								v85 = v65;
								v56 = v97;
							}
							else
							{
								v85 = 0i64;
							}
							sub_140019B70((__int64*)(*v56 + v89), &v85);
							if (v85)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v85 - 16) + 8i64))(v85 - 16);
							++v60;
							v61 = v59 + *(_QWORD*)(v29 + 8);
						} while (v60 < *(_BYTE*)(v61 + 4));
						v57 = i;
					}
					++v57;
				}
				return 0i64;
			}
			v67 = (_QWORD*)a1[662];
			if (v67)
			{
				while (!v8)
				{
					v68 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, __int64))(*v67 + 88i64))(v67, a3, v28, v29);
					v46 = v68;
					if (v68 < 0)
					{
						if (v68 != -1609891839)
						{
							if (qword_140C65828)
							{
								v74 = sub_140335F10(&v86, v108);
							}
							else
							{
								sub_14018EE90(&v86, (__int64)"Message Id #%d", v108);
								v74 = &v86;
							}
							v76 = v74[1];
							v77 = sub_14034BDD0(v75, 143520);
							v78 = sub_14018D540(&v89, (__int64)v77, v76);
							sub_140015EC0((__int64)(a1 - 32), *v78, 0i64, 0);
							v52 = v89;
							goto LABEL_94;
						}
						if (qword_140C65828)
						{
							v79 = (__int64(__fastcall***)())sub_140335F10(&v91, v108);
						}
						else
						{
							sub_14018EE90(&v91, (__int64)"Message Id #%d", v108);
							v79 = &v91;
						}
						v81 = v79[1];
						v82 = sub_14034BDD0(v80, 418527);
						v83 = sub_14018D540(&v97, (__int64)v82, v81);
						sub_140015EC0((__int64)(a1 - 32), *v83, 0i64, 0);
						if (v97)
							(*(void(__fastcall**)(__int64*))(*(v97 - 2) + 8))(v97 - 2);
						v53 = v92;
						goto LABEL_97;
					}
					v67 = (_QWORD*)v67[4];
					if (!v68)
						v8 = 1;
					if (!v67)
					{
						if (v8)
							return 0i64;
						goto LABEL_141;
					}
					v28 = v108;
					v29 = (__int64)v88;
				}
				return 0i64;
			}
		LABEL_141:
			v95 = 0i64;
			v94 = &off_140B5E648;
			v96 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v94);
			v91 = v94;
			v92 = v95;
			v93 = v96;
			if (qword_140C65828)
			{
				if (v108 < 3)
				{
					sub_14018EE90(&v86, (__int64)"Base Message Id #%d");
				}
				else
				{
					if (v108 < dword_140C1E564)
					{
						v69 = *(int**)(qword_140C65828 + 16i64 * (v108 - 3) + 8);
						if (v69)
						{
							v70 = -1i64;
							do
								v13 = *((_BYTE*)v69 + ++v70) == 0;
							while (!v13);
							v71 = (char*)v69 + v70;
							v72 = v70;
							if (v70 != -2)
								v5 = sub_14018B280(v70 + 1, 0);
							sub_1407DB590(v5, v69, v72);
							v73 = &v71[(char*)v5 - (char*)v69];
							if (v73)
								*v73 = 0;
							goto LABEL_166;
						}
					}
					sub_14018EE90(&v86, (__int64)"Invalid or foreign Message Id #%d");
				}
			}
			else
			{
				sub_14018EE90(&v86, (__int64)"Message Id #%d");
			}
			v5 = v87;
		LABEL_166:
			v89 = 0x141CDAE90i64;
			v84 = sub_1401971E0(&dword_140C89EDC, 22, &v89, v5, &v91);
			if (v5)
				sub_14018B900((__int64)v5, 0);
			v94 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v96);
			if (v84)
				DebugBreak();
		}
		return 0i64;
	}
	if (qword_140C65828)
		goto LABEL_111;
LABEL_92:
	sub_14018EE90(&v86, (__int64)"Message Id #%d", v108);
	v48 = &v86;
LABEL_93:
	v49 = v48[1];
	v50 = sub_14034BDD0(v47, 143520);
	v51 = sub_14018D540(&v85, (__int64)v50, v49);
	sub_140015EC0((__int64)(a1 - 32), *v51, 0i64, 0);
	v52 = v85;
LABEL_94:
	if (v52)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
	v53 = (__int64)v87;
LABEL_97:
	if (v53)
		sub_14018B900(v53, 0);
	return v46;
}
// 1400155B7: variable 'a2' is possibly undefined
// 1400155FC: variable 'v47' is possibly undefined
// 14001566F: variable 'v44' is possibly undefined
// 14001598F: variable 'v75' is possibly undefined
// 1400159F8: variable 'v80' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C1E564: using guessed type int dword_140C1E564;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65828: using guessed type __int64 qword_140C65828;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C65910: using guessed type __int64 qword_140C65910;
// 140C89EDC: using guessed type _DWORD dword_140C89EDC;
// 140C89EE0: using guessed type _DWORD dword_140C89EE0;
// 140C89EE4: using guessed type _DWORD dword_140C89EE4;
// 140C89EE8: using guessed type _DWORD dword_140C89EE8;
// 140C89EEC: using guessed type _DWORD dword_140C89EEC;

