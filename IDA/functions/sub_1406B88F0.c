//----- (00000001406B88F0) ----------------------------------------------------
__int64 __fastcall sub_1406B88F0(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	_DWORD* v8; // r13
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	_QWORD* v11; // r14
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rdx
	int v16; // r15d
	unsigned __int64 v17; // rcx
	__int64 v18; // r12
	__int64 v19; // rdi
	__int64 v20; // rax
	int v21; // edi
	unsigned int v22; // esi
	unsigned int v23; // eax
	__int64 v24; // rax
	_DWORD* v25; // rdi
	unsigned int v26; // edx
	int* v27; // rax
	unsigned int v28; // edx
	__int64 v29; // rax
	unsigned int* v30; // r12
	__int64 v31; // rdx
	unsigned __int64 v32; // rcx
	__int64 v33; // rdi
	__int64 v34; // rax
	int v35; // eax
	__int64 v36; // rcx
	int v37; // r13d
	_QWORD* v38; // rax
	__int64 v39; // rdx
	int v40; // r10d
	__int64 v41; // rcx
	__int64 v42; // rdi
	__int64 v43; // rax
	int v44; // eax
	unsigned int v45; // ecx
	int v46; // edi
	__int64 v47; // rax
	__int64 v48; // rdx
	__int64 v49; // rdx
	int v50; // esi
	__int64* v51; // rax
	__int64 v52; // r8
	__int64 v53; // rdx
	_QWORD* v54; // rax
	__int64(__fastcall * *v56)(); // [rsp+20h] [rbp-79h] BYREF
	int v57; // [rsp+28h] [rbp-71h]
	_QWORD* v58; // [rsp+30h] [rbp-69h]
	int v59; // [rsp+38h] [rbp-61h]
	__int64(__fastcall * *v60)(); // [rsp+40h] [rbp-59h] BYREF
	int v61; // [rsp+48h] [rbp-51h]
	_QWORD* v62; // [rsp+50h] [rbp-49h]
	int v63; // [rsp+58h] [rbp-41h]
	__int64(__fastcall * *v64)(); // [rsp+60h] [rbp-39h] BYREF
	int v65; // [rsp+68h] [rbp-31h]
	_QWORD* v66; // [rsp+70h] [rbp-29h]
	int v67; // [rsp+78h] [rbp-21h]
	__int64(__fastcall * *v68)(); // [rsp+80h] [rbp-19h] BYREF
	int v69; // [rsp+88h] [rbp-11h]
	_QWORD* v70; // [rsp+90h] [rbp-9h]
	int v71; // [rsp+98h] [rbp-1h]
	__int64(__fastcall * *v72)(); // [rsp+A0h] [rbp+7h] BYREF
	int v73; // [rsp+A8h] [rbp+Fh]
	_QWORD* v74; // [rsp+B0h] [rbp+17h]
	int v75; // [rsp+B8h] [rbp+1Fh]
	unsigned int v76; // [rsp+100h] [rbp+67h]
	_DWORD* v77; // [rsp+108h] [rbp+6Fh]

	v58 = a1;
	v2 = a1[4];
	v3 = *(_QWORD*)(v2 + 112);
	v59 = 1;
	v56 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v57 = sub_1400578C0((__int64)a1);
	v6 = sub_140056AB0(a1, 1u);
	if (v6 && (v7 = *(_QWORD*)(v6 + 8)) != 0 && (v8 = *(_DWORD**)(v7 + 8), (v77 = v8) != 0i64))
	{
		v9 = a1[4];
		v64 = off_140B569F0;
		v10 = *(_QWORD*)(v9 + 112);
		v11 = a1;
		v66 = a1;
		v67 = 1;
		if (*(_QWORD*)(v9 + 120) >= v10)
			sub_14005E2C0((__int64)a1);
		v12 = a1[2];
		v13 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		a1[2] += 16i64;
		v14 = sub_1400578C0((__int64)a1);
		v15 = a1[4];
		v16 = v14;
		v65 = v14;
		v17 = *(_QWORD*)(v15 + 112);
		v60 = off_140B569F0;
		v18 = (__int64)a1;
		v62 = a1;
		v63 = 1;
		if (*(_QWORD*)(v15 + 120) >= v17)
			sub_14005E2C0((__int64)a1);
		v19 = a1[2];
		v20 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v19 + 8) = 5;
		*(_QWORD*)v19 = v20;
		a1[2] += 16i64;
		v21 = sub_1400578C0((__int64)a1);
		v61 = v21;
		v22 = 0;
		if (qword_140C63838)
		{
			v23 = qword_140C63838(off_140A6B128, qword_140C63858);
			goto LABEL_15;
		}
		if (!dword_140C64C54 && (int)sub_14020FF20() >= 0)
		{
			v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64550 + 40i64))(qword_140C64550);
		LABEL_15:
			v76 = v23;
			if (!v23)
				goto LABEL_40;
			while (!qword_140C63848)
			{
				if (dword_140C64C54)
				{
					v25 = 0i64;
				}
				else
				{
					if ((int)sub_14020FF20() >= 0)
					{
						v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64550 + 32i64))(
							qword_140C64550,
							v22);
						goto LABEL_23;
					}
					v25 = 0i64;
				}
			LABEL_24:
				if (v25[1] == *v8)
				{
					v26 = v25[2];
					if (v26)
					{
						v27 = sub_1400B5DF0(qword_140C658F0, v26, 0i64);
						if ((unsigned int)sub_140415C70(v11, (__int64)v27))
						{
							sub_1400FB470((__int64)&v64);
							v11 = v66;
							v66[2] -= 16i64;
						}
					}
					v28 = v25[3];
					if (v28)
					{
						v29 = sub_14044FAC0(qword_140C65908, v28);
						if (v29)
						{
							v30 = (unsigned int*)sub_1401E8C20(*(_DWORD*)(v29 + 8));
							if (v30)
							{
								v31 = a1[4];
								v74 = a1;
								v32 = *(_QWORD*)(v31 + 112);
								v72 = off_140B569F0;
								v75 = 1;
								if (*(_QWORD*)(v31 + 120) >= v32)
									sub_14005E2C0((__int64)a1);
								v33 = a1[2];
								v34 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v33 + 8) = 5;
								*(_QWORD*)v33 = v34;
								a1[2] += 16i64;
								v35 = sub_1400578C0((__int64)a1);
								v36 = *(_QWORD*)(a1[4] + 160i64);
								v37 = v35;
								v73 = v35;
								v38 = sub_14005C3C0(v36, v35);
								v39 = a1[2];
								*(_QWORD*)v39 = *v38;
								*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v39, L"nStoreLinkId", v40);
								a1[2] -= 16i64;
								v41 = a1[4];
								v70 = a1;
								v71 = 1;
								v68 = off_140B569F0;
								if (*(_QWORD*)(v41 + 120) >= *(_QWORD*)(v41 + 112))
									sub_14005E2C0((__int64)a1);
								v42 = a1[2];
								v43 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v42 + 8) = 5;
								*(_QWORD*)v42 = v43;
								a1[2] += 16i64;
								v44 = sub_1400578C0((__int64)a1);
								v45 = *v30;
								v46 = v44;
								v69 = v44;
								v47 = sub_1401E8C20(v45);
								if (v47)
									sub_1404E34B0((__int64)&v68, v47);
								sub_1400FB2A0((__int64)&v72, (__int64)L"tAccountItem", v46);
								sub_1400FB1D0((__int64)&v60);
								sub_1400579E0((__int64)a1, v48, v46);
								sub_1400579E0((__int64)a1, v49, v37);
								v8 = v77;
							}
						}
					}
				}
				if (++v22 >= v76)
				{
					v16 = v65;
					v18 = (__int64)v62;
					v21 = v61;
					goto LABEL_40;
				}
			}
			v24 = qword_140C63848(off_140A6B128, v22, qword_140C63858);
		LABEL_23:
			v25 = (_DWORD*)v24;
			goto LABEL_24;
		}
	LABEL_40:
		sub_1400FB2A0((__int64)&v56, (__int64)L"tItems", v16);
		sub_1400FB2A0((__int64)&v56, (__int64)L"tStoreLinks", v21);
		v50 = v57;
		v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v57);
		v52 = a1[2];
		v53 = *v51;
		*(_QWORD*)v52 = *v51;
		*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
		a1[2] += 16i64;
		if (v18)
			sub_1400579E0(v18, v53, v21);
		if (v11)
			sub_1400579E0((__int64)v11, v53, v16);
	}
	else
	{
		v50 = v57;
		v54 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v57);
		v53 = a1[2];
		*(_QWORD*)v53 = *v54;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v54 + 2);
		a1[2] += 16i64;
	}
	sub_1400579E0((__int64)a1, v53, v50);
	return 1i64;
}
// 1406B8C0A: variable 'v40' is possibly undefined
// 1406B8CAC: variable 'v48' is possibly undefined
// 1406B8CB7: variable 'v49' is possibly undefined
// 1406B8D4A: variable 'v53' is possibly undefined
// 140A6B128: using guessed type wchar_t *off_140A6B128[2];
// 140B37760: using guessed type wchar_t aTstorelinks[12];
// 140B37790: using guessed type wchar_t aTaccountitem_0[13];
// 140B377B0: using guessed type wchar_t aTitems_0[7];
// 140B377C0: using guessed type wchar_t aNstorelinkid[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64550: using guessed type __int64 qword_140C64550;
// 140C64C54: using guessed type int dword_140C64C54;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65908: using guessed type __int64 qword_140C65908;

