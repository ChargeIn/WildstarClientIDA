//----- (0000000140699E60) ----------------------------------------------------
__int64 __fastcall sub_140699E60(_QWORD* a1)
{
	_QWORD* v1; // rbx
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rdi
	__int64 v6; // rdx
	int v7; // r15d
	__int64 v8; // rsi
	_DWORD* v9; // rax
	__int64 v10; // r8
	_DWORD* v11; // rcx
	unsigned __int64 v12; // rdx
	int v13; // r13d
	__int64 v14; // rsi
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rbx
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // r14
	int v23; // r12d
	_QWORD* v24; // rax
	_DWORD* v25; // r10
	int v26; // eax
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rax
	int v30; // ecx
	__int64* v31; // rax
	char v32; // r15
	char v33; // r15
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	__int64 v37; // rbx
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // r8
	__int64 v40; // r8
	_DWORD* v41; // rax
	int v42; // ecx
	BOOL v43; // ecx
	int v44; // r8d
	char v45; // al
	__int64 v46; // rbx
	__int64 v47; // rbx
	_QWORD* v48; // rax
	__int64 v49; // r10
	__int64 v50; // rdx
	__int64 v51; // rdi
	unsigned __int64* v52; // rdx
	unsigned __int64 v53; // r8
	__int64 v54; // r8
	_DWORD* v55; // rax
	int v56; // ecx
	BOOL v57; // ecx
	int v58; // r8d
	char v59; // al
	__int64 v60; // rdi
	__int64 v61; // rdi
	_QWORD* v62; // rax
	__int64 v63; // r10
	__int64 v64; // rdx
	__int64 v65; // rbx
	unsigned __int64* v66; // rdx
	unsigned __int64 v67; // r8
	__int64 v68; // r8
	_DWORD* v69; // rax
	int v70; // ecx
	BOOL v71; // ecx
	int v72; // r8d
	char v73; // al
	__int64 v74; // rsi
	_QWORD* v75; // rax
	__int64 v76; // r10
	__int64 v77; // rdx
	__int64 v78; // rbx
	unsigned __int64* v79; // rdx
	unsigned __int64 v80; // r8
	int v81; // eax
	unsigned int v82; // r8d
	char v83; // al
	char v84; // cl
	__int64 v85; // rdx
	__int64(__fastcall * *v87)(); // [rsp+20h] [rbp-89h] BYREF
	int v88; // [rsp+28h] [rbp-81h]
	__int64 v89; // [rsp+30h] [rbp-79h]
	int v90; // [rsp+38h] [rbp-71h]
	__int64(__fastcall * *v91)(); // [rsp+40h] [rbp-69h] BYREF
	int v92; // [rsp+48h] [rbp-61h]
	_QWORD* v93; // [rsp+50h] [rbp-59h]
	int v94; // [rsp+58h] [rbp-51h]
	__int64(__fastcall * *v95)(); // [rsp+60h] [rbp-49h] BYREF
	int v96; // [rsp+68h] [rbp-41h]
	_QWORD* v97; // [rsp+70h] [rbp-39h]
	__int64(__fastcall * **v98)(); // [rsp+78h] [rbp-31h]
	__int64 v99; // [rsp+80h] [rbp-29h] BYREF
	__int64 v100; // [rsp+88h] [rbp-21h]
	__int64 v101; // [rsp+90h] [rbp-19h]
	__int64 v102; // [rsp+A0h] [rbp-9h] BYREF
	int v103; // [rsp+A8h] [rbp-1h]
	__int64(__fastcall * *v104)(); // [rsp+B0h] [rbp+7h] BYREF
	int v105; // [rsp+B8h] [rbp+Fh]
	__int64 v106; // [rsp+C0h] [rbp+17h]
	int v107; // [rsp+118h] [rbp+6Fh]
	__int64 v108; // [rsp+120h] [rbp+77h]
	__int64 v109; // [rsp+128h] [rbp+7Fh] BYREF

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 8);
	if (!v4)
		return 0i64;
	v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
	v108 = v5;
	if (!v5)
		return 0i64;
	v7 = sub_140056D60(v1, 2u) - 1;
	v107 = v7;
	if ((unsigned __int64)v7 >= 0xA)
		return 0i64;
	v8 = v5 + 8 * (v7 + 4i64 * v7 + 3);
	if (!v8)
		return 0i64;
	v93 = v1;
	v94 = 1;
	v92 = -2;
	v91 = off_140B569F0;
	v9 = (_DWORD*)(v1[3] + 48i64);
	if ((unsigned __int64)v9 < v1[2] && v9 != dword_140A12138 && *(_DWORD*)(v1[3] + 56i64) == 5)
	{
		sub_1400579E0((__int64)v1, v6, -2);
		v10 = (__int64)v93;
		v11 = dword_140A12138;
		v12 = v93[2];
		if (v93[3] + 48i64 < v12)
			v11 = (_DWORD*)(v93[3] + 48i64);
		*(_QWORD*)v12 = *(_QWORD*)v11;
		*(_DWORD*)(v12 + 8) = v11[2];
		*(_QWORD*)(v10 + 16) += 16i64;
		v1 = v93;
		v92 = sub_1400578C0((__int64)v93);
	}
	v97 = v1;
	v96 = -2;
	v98 = &v91;
	v95 = off_140B56A08;
	*(_DWORD*)(v1[2] + 8i64) = 0;
	v1[2] += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v95[2])(&v95, 0xFFFFFFFFi64);
	v13 = v7;
	v93[2] -= 16i64;
	v14 = *(_QWORD*)(v8 + 16);
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v98)[1])(v98)
		&& (unsigned int)sub_1400FCBA0((__int64)&v95))
	{
		sub_1400FBD20((__int64)&v95, (__int64)&v99);
		v15 = sub_1400FB8D0((__int64)&v95, (__int64)&v104);
		v89 = 0i64;
		v88 = -2;
		v87 = off_140B569F0;
		v17 = *(_QWORD*)(v15 + 16);
		v90 = 1;
		v88 = -2;
		v89 = v17;
		v18 = v15;
		if (*(_QWORD*)(v15 + 16) && (unsigned int)sub_1400F9ED0(v15) == 5)
		{
			v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v18 + 16) + 32i64) + 160i64), *(_DWORD*)(v18 + 8));
			v21 = *(_QWORD*)(v20 + 16);
			*(_QWORD*)v21 = *v19;
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
			*(_QWORD*)(v20 + 16) += 16i64;
			v88 = sub_1400578C0(v89);
		}
		v104 = off_140B56A08;
		if (v106)
			sub_1400579E0(v106, v16, v105);
		v22 = v101;
		v23 = v100;
		if (v101 && (_DWORD)v100 != -2)
		{
			v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v101 + 32) + 160i64), v100);
			v16 = *(_QWORD*)(v22 + 16);
			*(_QWORD*)v16 = *v24;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v24 + 2);
			*(_QWORD*)(v22 + 16) += 16i64;
			v25 = (_DWORD*)(*(_QWORD*)(v22 + 16) - 16i64);
			v26 = v25 == dword_140A12138 ? -1 : v25[2];
			*(_QWORD*)(v22 + 16) = v25;
			if (v26 == 3)
			{
				v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v23);
				*(_QWORD*)v28 = *v27;
				*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
				*(_QWORD*)(v22 + 16) += 16i64;
				v29 = *(_QWORD*)(v22 + 16);
				v30 = *(_DWORD*)(v29 - 8);
				v31 = (__int64*)(v29 - 16);
				if (v30 == 3)
					goto LABEL_30;
				if (v30 == 4 && sub_14005AC80((char*)(*v31 + 32), (unsigned __int64*)&v109))
				{
					v103 = 3;
					v31 = &v102;
					v102 = v109;
				LABEL_30:
					v13 = (int)*(double*)v31;
				}
				else
				{
					v13 = 0;
				}
				*(_QWORD*)(v22 + 16) -= 16i64;
				goto LABEL_32;
			}
		}
		if (v13 > 0)
			goto LABEL_39;
	LABEL_32:
		v32 = -56;
		if (*(_DWORD*)(v5 + 16) == 1)
			v32 = 100;
		v33 = v13 + v32 - 1;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v87[1])(&v87))
		{
			v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v89 + 32) + 160i64), v88);
			v36 = *(_QWORD*)(v35 + 16);
			*(_QWORD*)v36 = *v34;
			*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
			*(_QWORD*)(v35 + 16) += 16i64;
			v37 = v89;
			v38 = (unsigned __int64*)sub_14018F0E0(&v99, L"bVisible")[1];
			if (v38)
			{
				v39 = -1i64;
				do
					++v39;
				while (*((_BYTE*)v38 + v39));
				sub_140058710(v37, v38, v39);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v37 + 16) + 8i64) = 0;
				*(_QWORD*)(v37 + 16) += 16i64;
			}
			if (v100)
				sub_14018B900(v100, 0);
			sub_14005E8E0(
				v89,
				*(_QWORD*)(v89 + 16) - 32i64,
				(int*)(*(_QWORD*)(v89 + 16) - 16i64),
				*(_QWORD*)(v89 + 16) - 16i64);
			v40 = *(_QWORD*)(v89 + 16);
			v41 = (_DWORD*)(v40 - 16);
			if ((_DWORD*)(v40 - 16) == dword_140A12138 || v41[2] != 1)
			{
				*(_QWORD*)(v89 + 16) = v40 - 32;
			}
			else
			{
				v42 = v41[2];
				v43 = v42 && (v42 != 1 || *v41);
				*(_QWORD*)(v89 + 16) = v40 - 32;
				if (v43)
				{
					v44 = 1;
					goto LABEL_59;
				}
			}
		}
		v44 = 0;
	LABEL_59:
		v45 = -56;
		if (*(_DWORD*)(v5 + 16) == 1)
			v45 = 100;
		v46 = 0i64;
		if (v44)
			v46 = 8i64 << (6 * (v33 - v45));
		v47 = v14 & ~(8i64 << (6 * (v33 - v45))) | (8i64 << (6 * (v33 - v45))) & v46;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v87[1])(&v87))
		{
			v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v89 + 32) + 160i64), v88);
			v50 = *(_QWORD*)(v49 + 16);
			*(_QWORD*)v50 = *v48;
			*(_DWORD*)(v50 + 8) = *((_DWORD*)v48 + 2);
			*(_QWORD*)(v49 + 16) += 16i64;
			v51 = v89;
			v52 = (unsigned __int64*)sub_14018F0E0(&v99, L"bDeposit")[1];
			if (v52)
			{
				v53 = -1i64;
				do
					++v53;
				while (*((_BYTE*)v52 + v53));
				sub_140058710(v51, v52, v53);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v51 + 16) + 8i64) = 0;
				*(_QWORD*)(v51 + 16) += 16i64;
			}
			if (v100)
				sub_14018B900(v100, 0);
			sub_14005E8E0(
				v89,
				*(_QWORD*)(v89 + 16) - 32i64,
				(int*)(*(_QWORD*)(v89 + 16) - 16i64),
				*(_QWORD*)(v89 + 16) - 16i64);
			v54 = *(_QWORD*)(v89 + 16);
			v55 = (_DWORD*)(v54 - 16);
			if ((_DWORD*)(v54 - 16) == dword_140A12138 || v55[2] != 1)
			{
				*(_QWORD*)(v89 + 16) = v54 - 32;
			}
			else
			{
				v56 = v55[2];
				v57 = v56 && (v56 != 1 || *v55);
				*(_QWORD*)(v89 + 16) = v54 - 32;
				if (v57)
				{
					v58 = 1;
					goto LABEL_82;
				}
			}
		}
		v58 = 0;
	LABEL_82:
		v59 = -56;
		if (*(_DWORD*)(v108 + 16) == 1)
			v59 = 100;
		v60 = 0i64;
		if (v58)
			v60 = 16i64 << (6 * (v33 - v59));
		v61 = v47 & ~(16i64 << (6 * (v33 - v59))) | (16i64 << (6 * (v33 - v59))) & v60;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v87[1])(&v87))
		{
			v62 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v89 + 32) + 160i64), v88);
			v64 = *(_QWORD*)(v63 + 16);
			*(_QWORD*)v64 = *v62;
			*(_DWORD*)(v64 + 8) = *((_DWORD*)v62 + 2);
			*(_QWORD*)(v63 + 16) += 16i64;
			v65 = v89;
			v66 = (unsigned __int64*)sub_14018F0E0(&v99, L"bAuthenticator")[1];
			if (v66)
			{
				v67 = -1i64;
				do
					++v67;
				while (*((_BYTE*)v66 + v67));
				sub_140058710(v65, v66, v67);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v65 + 16) + 8i64) = 0;
				*(_QWORD*)(v65 + 16) += 16i64;
			}
			if (v100)
				sub_14018B900(v100, 0);
			sub_14005E8E0(
				v89,
				*(_QWORD*)(v89 + 16) - 32i64,
				(int*)(*(_QWORD*)(v89 + 16) - 16i64),
				*(_QWORD*)(v89 + 16) - 16i64);
			v68 = *(_QWORD*)(v89 + 16);
			v69 = (_DWORD*)(v68 - 16);
			if ((_DWORD*)(v68 - 16) == dword_140A12138 || v69[2] != 1)
			{
				*(_QWORD*)(v89 + 16) = v68 - 32;
			}
			else
			{
				v70 = v69[2];
				v71 = v70 && (v70 != 1 || *v69);
				*(_QWORD*)(v89 + 16) = v68 - 32;
				if (v71)
				{
					v72 = 1;
					goto LABEL_105;
				}
			}
		}
		v72 = 0;
	LABEL_105:
		v73 = -56;
		if (*(_DWORD*)(v108 + 16) == 1)
			v73 = 100;
		v74 = 0i64;
		if (v72)
			v74 = 32i64 << (6 * (v33 - v73));
		v14 = v61 & ~(32i64 << (6 * (v33 - v73))) | (32i64 << (6 * (v33 - v73))) & v74;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v87[1])(&v87))
		{
			v75 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v89 + 32) + 160i64), v88);
			v77 = *(_QWORD*)(v76 + 16);
			*(_QWORD*)v77 = *v75;
			*(_DWORD*)(v77 + 8) = *((_DWORD*)v75 + 2);
			*(_QWORD*)(v76 + 16) += 16i64;
			v78 = v89;
			v79 = (unsigned __int64*)sub_14018F0E0(&v99, L"idWithdrawLimit")[1];
			if (v79)
			{
				v80 = -1i64;
				do
					++v80;
				while (*((_BYTE*)v79 + v80));
				sub_140058710(v78, v79, v80);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v78 + 16) + 8i64) = 0;
				*(_QWORD*)(v78 + 16) += 16i64;
			}
			if (v100)
				sub_14018B900(v100, 0);
			sub_14005E8E0(
				v89,
				*(_QWORD*)(v89 + 16) - 32i64,
				(int*)(*(_QWORD*)(v89 + 16) - 16i64),
				*(_QWORD*)(v89 + 16) - 16i64);
			v16 = *(_QWORD*)(v89 + 16);
			if ((_DWORD*)(v16 - 16) != dword_140A12138 && *(_DWORD*)(v16 - 16 + 8) == 3)
			{
				v81 = sub_1400584E0(v89, -1);
				*(_QWORD*)(v89 + 16) -= 32i64;
				v82 = v81 - 1;
				goto LABEL_122;
			}
			*(_QWORD*)(v89 + 16) = v16 - 32;
		}
		v82 = 0;
	LABEL_122:
		v5 = v108;
		if (v82 <= 7)
		{
			v83 = -56;
			if (*(_DWORD*)(v108 + 16) == 1)
				v83 = 100;
			v84 = 6 * (v33 - v83);
			v16 = v14 & ~(7i64 << v84);
			v14 = v16 | (7i64 << v84) & ((__int64)(int)v82 << v84);
		}
	LABEL_39:
		v87 = off_140B56A08;
		if (v89)
			sub_1400579E0(v89, v16, v88);
		if (v22)
			sub_1400579E0(v22, v16, v23);
	}
	sub_14057F9A0((__int64*)v5, v107, v14);
	v95 = off_140B56A08;
	if (v97)
		sub_1400579E0((__int64)v97, v85, v96);
	v91 = off_140B56A08;
	if (v93)
		sub_1400579E0((__int64)v93, v85, v92);
	return 0i64;
}
// 140699E9E: variable 'v3' is possibly undefined
// 140699F5B: variable 'v6' is possibly undefined
// 14069A088: variable 'v20' is possibly undefined
// 14069A0BB: variable 'v16' is possibly undefined
// 14069A143: variable 'v28' is possibly undefined
// 14069A1E8: variable 'v35' is possibly undefined
// 14069A36B: variable 'v49' is possibly undefined
// 14069A4AF: variable 'v63' is possibly undefined
// 14069A5EE: variable 'v76' is possibly undefined
// 14069A734: variable 'v85' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B348E8: using guessed type wchar_t aBauthenticator_0[15];
// 140B34908: using guessed type wchar_t aIdwithdrawlimi_0[16];
// 140B34928: using guessed type wchar_t aBvisible_0[9];
// 140B34940: using guessed type wchar_t aBdeposit_0[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

