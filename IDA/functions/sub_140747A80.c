//----- (0000000140747A80) ----------------------------------------------------
__int64 __fastcall sub_140747A80(__int64 a1)
{
	int v1; // esi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // ebp
	__int64 v9; // rcx
	__int64 v10; // r13
	unsigned int v11; // r12d
	__int64 result; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r15d
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // r14
	__int64 v20; // r8
	int v21; // r15d
	int* v22; // rbx
	unsigned int v23; // ecx
	__int64 v24; // rax
	int v25; // ebp
	__int64 v26; // rcx
	int* v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rax
	int v30; // ebp
	_QWORD* v31; // rax
	__int64 v32; // rdx
	_QWORD* v33; // rax
	__int64 v34; // rdx
	unsigned __int64 v35; // rbp
	unsigned __int64* v36; // rdx
	unsigned __int64 v37; // r8
	_DWORD* v38; // rcx
	__int64* v39; // rax
	int v40; // ebx
	_QWORD* v41; // rax
	__int64 v42; // r10
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	_DWORD* v45; // rcx
	__int64* v46; // rax
	unsigned __int8 v47; // cl
	unsigned int v48; // ebx
	unsigned int v49; // r14d
	_QWORD* v50; // rax
	__int64 v51; // r10
	unsigned __int64* v52; // rdx
	unsigned __int64 v53; // r8
	_DWORD* v54; // rcx
	__int64* v55; // rax
	unsigned __int64 v56; // rcx
	_DWORD* v57; // rax
	unsigned int v58; // ebx
	bool v59; // cc
	int v60; // ebx
	_QWORD* v61; // rax
	__int64 v62; // rdx
	unsigned __int64* v63; // rdx
	_DWORD* v64; // rax
	__int64* v65; // rax
	_QWORD* v66; // rax
	__int64 v67; // r10
	__int64 v68; // [rsp+30h] [rbp-138h] BYREF
	int* v69; // [rsp+38h] [rbp-130h]
	int* v70; // [rsp+40h] [rbp-128h]
	__int64 v71; // [rsp+48h] [rbp-120h]
	__int64 v72; // [rsp+50h] [rbp-118h] BYREF
	char v73[8]; // [rsp+58h] [rbp-110h] BYREF
	_WORD* v74; // [rsp+60h] [rbp-108h]
	_WORD* v75; // [rsp+68h] [rbp-100h]
	__int64 v76; // [rsp+110h] [rbp-58h]
	int v77; // [rsp+178h] [rbp+10h]
	__int64 v78; // [rsp+180h] [rbp+18h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = (unsigned int)sub_1400F26A0(v7 + 384, 2);
	v10 = *(_QWORD*)(qword_140C65898 + 120);
	if (v8 && v10)
	{
		v11 = sub_1407A1440(v9, v8, v9);
		if (v11)
		{
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v13 = *(_QWORD*)(a1 + 16);
			v14 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v13 + 8) = 5;
			*(_QWORD*)v13 = v14;
			*(_QWORD*)(a1 + 16) += 16i64;
			v15 = sub_1400578C0(a1);
			v77 = v15;
			v78 = sub_1403ACD90(qword_140C65B70, v11, v10);
			if (v78)
			{
				v18 = sub_1407A1630(v17, *(_DWORD*)(v10 + 220), v11);
				v19 = v18;
				if (v18
					&& (v20 = *(unsigned int*)(v18 + 16), (_DWORD)v20)
					&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							v10,
							v20,
							0i64,
							0i64,
							0))
				{
					v21 = 0;
					v22 = sub_14018B280(2i64, 0);
					v69 = v22;
					v71 = (__int64)v22 + 2;
					sub_1407DB590(v22, dword_1409F94BC, 0i64);
					v70 = v22;
					if (v22)
						*(_WORD*)v22 = 0;
					v23 = *(_DWORD*)(v19 + 16);
					if (v23)
					{
						v24 = sub_1402259C0(v23);
						if (v24)
						{
							v25 = *(_DWORD*)(v24 + 56);
							if (v25)
							{
								sub_1404DDE90(&v72);
								v27 = (int*)sub_14034BDD0(v26, v25);
								if (v27)
								{
									v28 = 0i64;
									if (*(_WORD*)v27)
									{
										do
											++v28;
										while (*((_WORD*)v27 + v28));
									}
									sub_14001C480((__int64)v73, v27, (int*)((char*)v27 + 2 * v28));
								}
								else if (v74 != v75)
								{
									*v74 = 0;
									v75 = v74;
								}
								v29 = sub_1400B7660(&v72);
								if ((__int64*)v29 != &v68)
								{
									sub_14001C480((__int64)&v68, *(int**)(v29 + 8), *(int**)(v29 + 16));
									v22 = v69;
								}
								if (v76)
									sub_14018B900(v76, 0);
								sub_1400B7390(&v72);
							}
						}
					}
					v30 = v77;
					v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v77);
					v32 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v32 = *v31;
					*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v32, L"strPrereqFailure", (unsigned __int16*)v22);
					*(_QWORD*)(a1 + 16) -= 16i64;
					if (v22)
						sub_14018B900((__int64)v22, 0);
				}
				else
				{
					v30 = v15;
					v21 = 1;
				}
				v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v30);
				v34 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v34 = *v33;
				*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v35 = -1i64;
				v36 = (unsigned __int64*)sub_14018F0E0(&v68, L"bPrereq")[1];
				if (v36)
				{
					v37 = -1i64;
					do
						++v37;
					while (*((_BYTE*)v36 + v37));
					sub_140058710(a1, v36, v37);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v69)
					sub_14018B900((__int64)v69, 0);
				v38 = *(_DWORD**)(a1 + 16);
				v38[2] = 1;
				*v38 = v21 != 0;
				*(_QWORD*)(a1 + 16) += 16i64;
				v39 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v39, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 48i64;
				if (!v19 || (v40 = 0, *(_DWORD*)(v19 + 8) <= *(_DWORD*)(v10 + 56)))
					v40 = 1;
				v15 = v77;
				v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v77);
				*(_QWORD*)v42 = *v41;
				*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v43 = (unsigned __int64*)sub_14018F0E0(&v68, L"bLevelReq")[1];
				if (v43)
				{
					v44 = -1i64;
					do
						++v44;
					while (*((_BYTE*)v43 + v44));
					sub_140058710(a1, v43, v44);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v69)
					sub_14018B900((__int64)v69, 0);
				v45 = *(_DWORD**)(a1 + 16);
				v45[2] = 1;
				*v45 = v40 != 0;
				*(_QWORD*)(a1 + 16) += 16i64;
				v46 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v46, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 48i64;
				v47 = *(_BYTE*)(*(_QWORD*)(v78 + 112) + 8i64);
				if (v47 <= 0xAu)
					v48 = *(_DWORD*)(qword_140C65B70 + 4i64 * v47 + 1264);
				else
					v48 = -1;
				v49 = *(_DWORD*)(v10 + 56);
				v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v77);
				*(_QWORD*)v51 = *v50;
				*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v52 = (unsigned __int64*)sub_14018F0E0(&v68, L"bTierLevelReq")[1];
				if (v52)
				{
					v53 = -1i64;
					do
						++v53;
					while (*((_BYTE*)v52 + v53));
					sub_140058710(a1, v52, v53);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v69)
					sub_14018B900((__int64)v69, 0);
				v54 = *(_DWORD**)(a1 + 16);
				v54[2] = 1;
				*v54 = v48 <= v49;
				*(_QWORD*)(a1 + 16) += 16i64;
				v55 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v55, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 48i64;
				v56 = 0i64;
				v57 = (_DWORD*)(*(_QWORD*)(v78 + 112) + 408i64);
				while (*v57 != 3)
				{
					++v56;
					++v57;
					if (v56 >= 5)
						goto LABEL_70;
				}
				v58 = sub_140491E90(v56, v11);
				v59 = (unsigned int)sub_14047C450(v10) <= v58;
				v60 = 0;
				if (!v59)
					goto LABEL_71;
			LABEL_70:
				v60 = 1;
			LABEL_71:
				v61 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v77);
				v62 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v62 = *v61;
				*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v63 = (unsigned __int64*)sub_14018F0E0(&v68, L"bPathLevelReq")[1];
				if (v63)
				{
					do
						++v35;
					while (*((_BYTE*)v63 + v35));
					sub_140058710(a1, v63, v35);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v69)
					sub_14018B900((__int64)v69, 0);
				v64 = *(_DWORD**)(a1 + 16);
				LOBYTE(v1) = v60 != 0;
				v64[2] = 1;
				*v64 = v1;
				*(_QWORD*)(a1 + 16) += 16i64;
				v65 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v65, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 48i64;
				v66 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v77);
				*(_QWORD*)v67 = *v66;
				*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400579E0(a1, v16, v15);
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140747BED: variable 'v17' is possibly undefined
// 140747C9E: variable 'v26' is possibly undefined
// 140747E97: variable 'v42' is possibly undefined
// 140747F87: variable 'v51' is possibly undefined
// 140748143: variable 'v67' is possibly undefined
// 140748158: variable 'v16' is possibly undefined
// 1409F94BC: using guessed type int dword_1409F94BC[12];
// 140B49DA0: using guessed type wchar_t aStrprereqfailu_0[17];
// 140B49EC0: using guessed type wchar_t aBpathlevelreq[14];
// 140B49EE0: using guessed type wchar_t aBtierlevelreq[14];
// 140B49F00: using guessed type wchar_t aBlevelreq[10];
// 140B49F18: using guessed type wchar_t aBprereq[8];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140747A80: using guessed type char var_110[8];

