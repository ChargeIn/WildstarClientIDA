#include "../winhttp.h"

//----- (000000014076C830) ----------------------------------------------------
__int64 __fastcall sub_14076C830(__int64 a1, __int64 a2)
{
	unsigned int v3; // r8d
	unsigned __int64 v4; // r13
	int* v5; // rax
	int v6; // ecx
	int v7; // edx
	__int64 v8; // rdi
	int v9; // ebx
	int v10; // esi
	__int64 v11; // r9
	int* v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	int v15; // edx
	int v16; // r12d
	int v17; // r10d
	int v18; // r11d
	__int64 v19; // rbx
	__int64 v20; // rdx
	__int64 v21; // r9
	__int64 v22; // r10
	int v23; // edx
	int v24; // edx
	char* v25; // rax
	int v26; // eax
	__int64* v27; // r8
	unsigned int v28; // edx
	__int64 v29; // rcx
	__int64 v30; // r10
	int v31; // r11d
	int v32; // edx
	int v33; // edx
	char* v34; // rax
	int v35; // eax
	unsigned __int64 v36; // rsi
	__int64 v37; // r15
	unsigned int v38; // r14d
	unsigned __int64 v39; // r13
	int v40; // edi
	unsigned int v41; // r12d
	__int64 v42; // r10
	int* v43; // r8
	__int64 v44; // rdx
	__int64 v45; // rax
	int v46; // ecx
	__int64 v47; // rdx
	__int64 v48; // r8
	unsigned int v49; // ebx
	int v50; // edx
	__int64 v51; // rcx
	int v52; // edx
	char* v53; // rax
	unsigned int v54; // eax
	unsigned int v55; // ecx
	unsigned __int64* v56; // r8
	unsigned int v57; // edx
	unsigned int v58; // ebx
	int v59; // edx
	__int64 v60; // rcx
	int v61; // edx
	char* v62; // rax
	unsigned int v63; // eax
	unsigned int v64; // ecx
	__int64 v65; // rdx
	int v66; // ecx
	unsigned int* v67; // rax
	int* v68; // rdx
	__int64 v69; // rax
	__int64 v70; // rdx
	__int64 v71; // r8
	unsigned int v72; // ebx
	int v73; // ecx
	__int64 v74; // rcx
	char* v75; // rax
	unsigned int v76; // eax
	unsigned int v77; // edx
	unsigned int v78; // ebx
	int v79; // ecx
	__int64 v80; // rcx
	char* v81; // rax
	unsigned int v82; // eax
	unsigned int v83; // ebx
	unsigned int v85; // [rsp+30h] [rbp-D0h] BYREF
	int v86; // [rsp+34h] [rbp-CCh]
	__int64 v87; // [rsp+38h] [rbp-C8h] BYREF
	unsigned __int64 v88; // [rsp+40h] [rbp-C0h]
	int v89[2]; // [rsp+48h] [rbp-B8h] BYREF
	int v90; // [rsp+50h] [rbp-B0h]
	int v91; // [rsp+54h] [rbp-ACh]
	int v92; // [rsp+58h] [rbp-A8h]
	__int64 v93; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v94; // [rsp+68h] [rbp-98h]
	unsigned __int64 v95; // [rsp+70h] [rbp-90h] BYREF
	__int64 v96; // [rsp+78h] [rbp-88h]
	__int64 v97; // [rsp+80h] [rbp-80h]
	__int64 v98; // [rsp+88h] [rbp-78h]
	__int64 v99; // [rsp+90h] [rbp-70h] BYREF
	int v100; // [rsp+98h] [rbp-68h]
	unsigned __int64 v101; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v102; // [rsp+A8h] [rbp-58h]
	__int64 v103; // [rsp+B0h] [rbp-50h]
	unsigned __int64 v104; // [rsp+B8h] [rbp-48h]
	unsigned __int64 v105; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v106; // [rsp+C8h] [rbp-38h]
	__int64 v107; // [rsp+D0h] [rbp-30h]
	unsigned __int64 v108; // [rsp+D8h] [rbp-28h]
	char v109[8]; // [rsp+E0h] [rbp-20h] BYREF
	int* v110; // [rsp+E8h] [rbp-18h]
	__int64 v111; // [rsp+F0h] [rbp-10h]
	int v112; // [rsp+148h] [rbp+48h]
	int v113; // [rsp+150h] [rbp+50h]
	int v114; // [rsp+158h] [rbp+58h]

	v112 = a2;
	v94 = 0i64;
	v93 = 0i64;
	if (!sub_14073A630(a1, a2, &v93) || !(unsigned int)sub_1405BF1D0((__int64)v89, a1, v3))
	{
		v83 = 9;
		goto LABEL_185;
	}
	v4 = v94;
	if (v94 > 1)
	{
		sub_14076D3A0(&v93);
		v4 = v94;
	}
	v5 = sub_14018B280(40i64, 0);
	v111 = 0i64;
	v6 = 0;
	v110 = v5;
	*(_BYTE*)v5 = 0;
	*((_QWORD*)v110 + 1) = 0i64;
	v7 = 0;
	*((_QWORD*)v110 + 2) = v110;
	v8 = 0i64;
	*((_QWORD*)v110 + 3) = v110;
	v86 = 0;
	v113 = v92;
	v9 = v92;
	v114 = 0;
	if (v4)
	{
		v10 = v89[0];
		v11 = v93;
		while (1)
		{
			v12 = v110;
			v13 = *(_QWORD*)(v11 + 8 * v8);
			v14 = *((_QWORD*)v110 + 1);
			if (v14)
			{
				v15 = *(_DWORD*)v13;
				do
				{
					if (*(_DWORD*)(v14 + 32) < v15)
					{
						v14 = *(_QWORD*)(v14 + 24);
					}
					else
					{
						v12 = (int*)v14;
						v14 = *(_QWORD*)(v14 + 16);
					}
				} while (v14);
				if (v12 != v110 && v15 >= v12[8])
					goto LABEL_65;
			}
			if (*(_QWORD*)(v13 + 16) || *(_QWORD*)(v13 + 24))
				goto LABEL_65;
			v16 = *(_DWORD*)(v13 + 4);
			v17 = *(_DWORD*)v13;
			v113 = v16;
			if (v112)
			{
				v18 = *(_DWORD*)(qword_140C65B98 + 268);
				if ((v18 == 16 || *(_DWORD*)(qword_140C65B98 + 340))
					&& (v19 = qword_140C65898, (v20 = *(_QWORD*)(qword_140C65898 + 27728)) != 0)
					&& *(_QWORD*)(v20 + 96)
					&& (v21 = *(_QWORD*)(*(_QWORD*)(v20 + 88) + 8i64 * *(_QWORD*)(v20 + 104))) != 0
					&& *(_DWORD*)(v21 + 16) == *(_DWORD*)(v20 + 16)
					&& *(_QWORD*)(v21 + 24) == *(_QWORD*)(v20 + 24))
				{
					if (v18 != 16 && !*(_DWORD*)(qword_140C65B98 + 340)
						|| *(_QWORD*)(qword_140C65B98 + 208)
						|| *(_DWORD*)(qword_140C65B98 + 172)
						|| *(_DWORD*)(qword_140C65B98 + 180))
					{
						goto LABEL_73;
					}
					if (sub_1405BFB30(qword_140C65B98, v17))
					{
						v9 = 14;
					LABEL_74:
						if (v9)
						{
							v86 = v9;
							goto LABEL_64;
						}
						goto LABEL_63;
					}
					v23 = 64;
					v100 = 0;
					v99 = (unsigned int)v22;
					if (v90)
						v23 = 32;
					v24 = (v16 != 0 ? 0x100 : 0) | v23;
					if (v91)
						v24 |= 0x80u;
					if ((unsigned int)v22 < 0x10)
						v25 = (char*)&unk_140B51560 + 16 * v22;
					else
						v25 = (char*)&unk_140B51550;
					v26 = *((_DWORD*)v25 + 2);
					v100 = v10;
					HIDWORD(v99) = v24 & v26;
					if ((unsigned int)(v22 - 1) > 1 || v10)
					{
						v27 = &v99;
						v28 = 1529;
						v29 = v19;
						goto LABEL_62;
					}
					v9 = 6;
					v86 = 6;
				}
				else
				{
					v9 = 7;
					v86 = 7;
				}
			}
			else
			{
				if (*(_DWORD*)(qword_140C65B98 + 268) != 16 && !*(_DWORD*)(qword_140C65B98 + 340)
					|| *(_QWORD*)(qword_140C65B98 + 208)
					|| *(_DWORD*)(qword_140C65B98 + 172)
					|| *(_DWORD*)(qword_140C65B98 + 180))
				{
				LABEL_73:
					v9 = 1;
					goto LABEL_74;
				}
				if (sub_1405BFB30(qword_140C65B98, v17))
				{
					v9 = v31;
					goto LABEL_74;
				}
				v32 = 64;
				LODWORD(v88) = 0;
				v87 = (unsigned int)v30;
				if (v90)
					v32 = 32;
				v33 = (v16 != 0 ? 0x100 : 0) | v32;
				if (v91)
					v33 |= 0x80u;
				if ((unsigned int)v30 < 0x10)
					v34 = (char*)&unk_140B51560 + 16 * v30;
				else
					v34 = (char*)&unk_140B51550;
				v35 = *((_DWORD*)v34 + 2);
				LODWORD(v88) = v10;
				HIDWORD(v87) = v33 & v35;
				if ((unsigned int)(v30 - 1) > 1 || v10)
				{
					v29 = qword_140C65898;
					v27 = &v87;
					v28 = 1528;
				LABEL_62:
					sub_1403F4900(v29, v28, (__int64)v27);
					v9 = 0;
				LABEL_63:
					v114 = 1;
					goto LABEL_64;
				}
				v9 = 6;
				v86 = 6;
			}
		LABEL_64:
			sub_1403ADDD0((__int64)v109, (__int64)&v101, *(int**)(v93 + 8 * v8));
			v11 = v93;
		LABEL_65:
			if (++v8 >= v4)
			{
				v6 = v86;
				v7 = v114;
				break;
			}
		}
	}
	v36 = 0i64;
	v37 = 0i64;
	v38 = 0;
	v39 = 0i64;
	v40 = 16;
	v88 = 0i64;
	v87 = 0i64;
	if (!v94)
		goto LABEL_176;
	v41 = v89[1];
	v42 = qword_140C65B98;
	do
	{
		v43 = v110;
		v44 = *(_QWORD*)(v93 + 8 * v39);
		v45 = *((_QWORD*)v110 + 1);
		if (v45)
		{
			v46 = *(_DWORD*)v44;
			do
			{
				if (*(_DWORD*)(v45 + 32) < v46)
				{
					v45 = *(_QWORD*)(v45 + 24);
				}
				else
				{
					v43 = (int*)v45;
					v45 = *(_QWORD*)(v45 + 16);
				}
			} while (v45);
			if (v43 != v110 && v46 >= v43[8])
				goto LABEL_132;
		}
		if (!*(_QWORD*)(v44 + 16) && !*(_QWORD*)(v44 + 24))
			goto LABEL_132;
		if (v40 != 16 && v40 != *(_DWORD*)v44)
		{
			if (v112)
			{
				if (*(_DWORD*)(v42 + 268) != 16 && !*(_DWORD*)(v42 + 340)
					|| (v47 = *(_QWORD*)(qword_140C65898 + 27728)) == 0
					|| !*(_QWORD*)(v47 + 96)
					|| (v48 = *(_QWORD*)(*(_QWORD*)(v47 + 88) + 8i64 * *(_QWORD*)(v47 + 104))) == 0
					|| *(_DWORD*)(v48 + 16) != *(_DWORD*)(v47 + 16)
					|| *(_QWORD*)(v48 + 24) != *(_QWORD*)(v47 + 24))
				{
					v9 = 7;
					v86 = 7;
				LABEL_122:
					v38 = 0;
					v36 = 0i64;
					v40 = 16;
					v88 = 0i64;
					goto LABEL_123;
				}
				v85 = 16;
				v9 = sub_1405C48E0(v42, &v85, v38, &v87, 1);
				if (!v9)
				{
					v49 = v85;
					v50 = 64;
					v101 = 0i64;
					v102 = 0i64;
					v103 = 0i64;
					v104 = 0i64;
					if (v90)
						v50 = 32;
					v102 = v37;
					LODWORD(v103) = v38;
					v101 = __PAIR64__(v36, v85);
					v51 = v113 != 0 ? 0x100 : 0;
					v52 = v51 | v50;
					if (v91)
						v52 |= 0x80u;
					if (v85 < 0x10)
					{
						v51 = (__int64)&unk_140B51560;
						v53 = (char*)&unk_140B51560 + 16 * (int)v85;
					}
					else
					{
						v53 = (char*)&unk_140B51550;
					}
					HIDWORD(v103) = v52 & *((_DWORD*)v53 + 2);
					v54 = sub_1405C3360(v51, &v87);
					v55 = v41;
					if (v41 > v54)
						v55 = v54;
					v104 = __PAIR64__(v55, v89[0]);
					if (v49 - 1 > 1 || v89[0])
					{
						v56 = &v101;
						v57 = 1523;
					LABEL_121:
						sub_1403F4900(qword_140C65898, v57, (__int64)v56);
						v9 = 0;
						v42 = qword_140C65B98;
						v114 = 1;
						goto LABEL_122;
					}
				LABEL_119:
					v42 = qword_140C65B98;
					v9 = 6;
					v86 = 6;
					goto LABEL_122;
				}
			}
			else
			{
				v85 = 16;
				v9 = sub_1405C48E0(v42, &v85, v38, &v87, 0);
				if (!v9)
				{
					v58 = v85;
					v59 = 64;
					v105 = 0i64;
					v106 = 0i64;
					v107 = 0i64;
					v108 = 0i64;
					if (v90)
						v59 = 32;
					v106 = v37;
					LODWORD(v107) = v38;
					v105 = __PAIR64__(v36, v85);
					v60 = v113 != 0 ? 0x100 : 0;
					v61 = v60 | v59;
					if (v91)
						v61 |= 0x80u;
					if (v85 < 0x10)
					{
						v60 = (__int64)&unk_140B51560;
						v62 = (char*)&unk_140B51560 + 16 * (int)v85;
					}
					else
					{
						v62 = (char*)&unk_140B51550;
					}
					HIDWORD(v107) = v61 & *((_DWORD*)v62 + 2);
					v63 = sub_1405C3360(v60, &v87);
					v64 = v41;
					if (v41 > v63)
						v64 = v63;
					v108 = __PAIR64__(v64, v89[0]);
					if (v58 - 1 > 1 || v89[0])
					{
						v56 = &v105;
						v57 = 1519;
						goto LABEL_121;
					}
					goto LABEL_119;
				}
			}
			v42 = qword_140C65B98;
			v86 = v9;
			goto LABEL_122;
		}
	LABEL_123:
		v65 = *(_QWORD*)(v93 + 8 * v39);
		v66 = *(_DWORD*)v65;
		if (((*(_DWORD*)v65 - 3) & 0xFFFFFFFC) != 0 || v66 == 5)
		{
			v68 = *(int**)(v65 + 16);
			if (v68)
			{
				v69 = 0i64;
				v40 = v66;
				if (v36)
				{
					while (*(_DWORD*)(v37 + 4 * v69) != *v68)
					{
						if (++v69 >= v36)
							goto LABEL_131;
					}
				}
				else
				{
				LABEL_131:
					sub_140003460(&v87, v68);
					v36 = v88;
					v37 = v87;
					v42 = qword_140C65B98;
				}
			}
		}
		else
		{
			v67 = *(unsigned int**)(v65 + 24);
			if (v67)
			{
				v38 = *v67;
				v40 = *(_DWORD*)v65;
			}
		}
	LABEL_132:
		++v39;
	} while (v39 < v94);
	if (v40 != 16)
	{
		if (v112)
		{
			if ((*(_DWORD*)(v42 + 268) == 16 || *(_DWORD*)(v42 + 340))
				&& (v70 = *(_QWORD*)(qword_140C65898 + 27728)) != 0
				&& *(_QWORD*)(v70 + 96)
				&& (v71 = *(_QWORD*)(*(_QWORD*)(v70 + 88) + 8i64 * *(_QWORD*)(v70 + 104))) != 0
				&& *(_DWORD*)(v71 + 16) == *(_DWORD*)(v70 + 16)
				&& *(_QWORD*)(v71 + 24) == *(_QWORD*)(v70 + 24))
			{
				v85 = 16;
				v9 = sub_1405C48E0(v42, &v85, v38, &v87, 1);
				if (v9)
					goto LABEL_172;
				v72 = v85;
				v73 = 64;
				v95 = 0i64;
				v96 = 0i64;
				v97 = 0i64;
				v98 = 0i64;
				if (v90)
					v73 = 32;
				v96 = v37;
				LODWORD(v97) = v38;
				v95 = __PAIR64__(v36, v85);
				v74 = (v113 != 0 ? 0x100 : 0) | (unsigned int)v73;
				if (v91)
					LODWORD(v74) = v74 | 0x80;
				if (v85 < 0x10)
					v75 = (char*)&unk_140B51560 + 16 * (int)v85;
				else
					v75 = (char*)&unk_140B51550;
				HIDWORD(v97) = v74 & *((_DWORD*)v75 + 2);
				v76 = sub_1405C3360(v74, &v87);
				LODWORD(v98) = v89[0];
				if (v41 > v76)
					v41 = v76;
				HIDWORD(v98) = v41;
				if (v72 - 1 <= 1 && !v89[0])
				{
					v9 = 6;
					goto LABEL_172;
				}
				v77 = 1523;
			LABEL_171:
				sub_1403F4900(qword_140C65898, v77, (__int64)&v95);
				v9 = 0;
			}
			else
			{
				v9 = 7;
			}
		}
		else
		{
			v85 = 16;
			v9 = sub_1405C48E0(v42, &v85, v38, &v87, 0);
			if (!v9)
			{
				v78 = v85;
				v79 = 64;
				v95 = 0i64;
				v96 = 0i64;
				v97 = 0i64;
				v98 = 0i64;
				if (v90)
					v79 = 32;
				v96 = v37;
				LODWORD(v97) = v38;
				v95 = __PAIR64__(v36, v85);
				v80 = (v113 != 0 ? 0x100 : 0) | (unsigned int)v79;
				if (v91)
					LODWORD(v80) = v80 | 0x80;
				if (v85 < 0x10)
					v81 = (char*)&unk_140B51560 + 16 * (int)v85;
				else
					v81 = (char*)&unk_140B51550;
				HIDWORD(v97) = v80 & *((_DWORD*)v81 + 2);
				v82 = sub_1405C3360(v80, &v87);
				LODWORD(v98) = v89[0];
				if (v41 > v82)
					v41 = v82;
				HIDWORD(v98) = v41;
				if (v78 - 1 > 1 || v89[0])
				{
					v77 = 1519;
					goto LABEL_171;
				}
				v9 = 6;
			}
		}
	LABEL_172:
		if (v9)
		{
			v6 = v9;
			goto LABEL_175;
		}
		v6 = v86;
	LABEL_180:
		v83 = v6;
		goto LABEL_181;
	}
	v6 = v86;
LABEL_175:
	v7 = v114;
LABEL_176:
	if (v7 || v9)
		goto LABEL_180;
	v83 = 14;
LABEL_181:
	if (v37)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
	sub_140008410((__int64)v109);
	sub_14018B900((__int64)v110, 0);
LABEL_185:
	if (v93)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v93 - 16) + 8i64))(v93 - 16);
	return v83;
}
// 14076CE58: conditional instruction was optimized away because ebx.4!=0
// 14076C86B: variable 'v3' is possibly undefined
// 14076CA75: variable 'v22' is possibly undefined
// 14076CB48: variable 'v31' is possibly undefined
// 14076CB67: variable 'v30' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 14076C830: using guessed type char var_50[8];

