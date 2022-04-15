#include "../winhttp.h"

//----- (0000000140787D10) ----------------------------------------------------
void __fastcall sub_140787D10(_QWORD* a1)
{
	int v2; // r12d
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rsi
	unsigned int v11; // edi
	int* v12; // rax
	__int64 v13; // rcx
	int* v14; // r9
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64* v17; // rdx
	int* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rax
	int* v21; // rax
	__int64 v22; // rax
	int* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	int* v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rdx
	int* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rdx
	int* v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rax
	int* v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rdx
	int* v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rdx
	int* v41; // rax
	__int64 v42; // rcx
	__int64 v43; // rdx
	int* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rdx
	int* v47; // rax
	__int64 v48; // rcx
	int* v49; // rcx
	__int64 v50; // rbx
	__int64 v51; // r8
	int* v52; // rax
	__int64 v53; // rcx
	__int64 v54; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v57; // rax
	__int64 v58; // rbx
	__int64 v59; // rdx
	__int64 v60; // rax
	__int64 v61; // rcx
	unsigned int v62; // r8d
	__int64* v63; // rax
	__int64 v64; // rax
	unsigned int** v65; // rax
	__int64 v66; // rax
	__int64 n; // rax
	__int64 ii; // rax
	int v69; // edi
	__int64 v70; // rbx
	unsigned int v71; // eax
	int* v72; // rax
	__int64 v73; // rdi
	__int64 v74; // rbx
	__int64 v75; // rax
	__int64 v76; // rdi
	__int64 v77; // rbx
	int* v78; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v79; // [rsp+40h] [rbp-C8h] BYREF
	int* v80; // [rsp+48h] [rbp-C0h]
	__int64 v81; // [rsp+50h] [rbp-B8h]
	__int64 v82; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v83; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v84; // [rsp+70h] [rbp-98h] BYREF
	__int64 v85; // [rsp+78h] [rbp-90h] BYREF
	__int64 v86; // [rsp+80h] [rbp-88h] BYREF
	__int64 v87; // [rsp+88h] [rbp-80h] BYREF
	__int64 v88; // [rsp+90h] [rbp-78h] BYREF
	char v89[8]; // [rsp+98h] [rbp-70h] BYREF
	__int64 v90; // [rsp+A0h] [rbp-68h]
	__int64 v91; // [rsp+A8h] [rbp-60h]
	__int64 v92; // [rsp+B8h] [rbp-50h] BYREF
	int* v93; // [rsp+C0h] [rbp-48h] BYREF
	int* v94; // [rsp+C8h] [rbp-40h] BYREF
	int* v95; // [rsp+D0h] [rbp-38h] BYREF
	int* v96; // [rsp+D8h] [rbp-30h] BYREF
	int* v97; // [rsp+E0h] [rbp-28h] BYREF
	int* v98; // [rsp+E8h] [rbp-20h] BYREF
	int* v99; // [rsp+F0h] [rbp-18h] BYREF
	int* v100; // [rsp+F8h] [rbp-10h] BYREF
	int* v101; // [rsp+100h] [rbp-8h] BYREF
	int* v102; // [rsp+108h] [rbp+0h] BYREF
	__int64 v103; // [rsp+110h] [rbp+8h] BYREF
	int* v104; // [rsp+118h] [rbp+10h] BYREF
	__int64 v105; // [rsp+120h] [rbp+18h] BYREF
	__int64 v106; // [rsp+178h] [rbp+70h] BYREF
	__int64 v107; // [rsp+180h] [rbp+78h] BYREF
	unsigned __int64 v108; // [rsp+188h] [rbp+80h] BYREF
	__int64 v109; // [rsp+190h] [rbp+88h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 192i64))(a1);
	LODWORD(v106) = v2;
	sub_140030C70((__int64)v89, (__int64)(a1 + 9));
	v80 = sub_14018B280(40i64, 0);
	v81 = 0i64;
	*(_BYTE*)v80 = 0;
	*((_QWORD*)v80 + 1) = 0i64;
	*((_QWORD*)v80 + 2) = v80;
	*((_QWORD*)v80 + 3) = v80;
	v3 = a1[10];
	v4 = *(_QWORD*)(v3 + 16);
	if (v4 != v3)
	{
		do
		{
			v5 = *(_QWORD*)(v4 + 24);
			*(_DWORD*)(v4 + 36) = 0;
			if (v5)
			{
				v4 = v5;
				for (i = *(_QWORD*)(v5 + 16); i; i = *(_QWORD*)(i + 16))
					v4 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = j;
				if (*(_QWORD*)(v4 + 24) != j)
					v4 = j;
			}
		} while (v4 != a1[10]);
	}
	v8 = (_QWORD*)a1[5];
	v9 = (_QWORD*)*v8;
	if ((_QWORD*)*v8 != v8)
	{
		do
		{
			v10 = v9[3];
			v11 = *(_DWORD*)(*(_QWORD*)(v10 + 8) + 420i64);
			v12 = (int*)a1[10];
			v13 = *((_QWORD*)v12 + 1);
			v14 = v12;
			if (!v11)
				v11 = 1;
			v15 = a1[10];
			v16 = *((_QWORD*)v12 + 1);
			if (v13)
			{
				do
				{
					if (*(_DWORD*)(v16 + 32) < v11)
					{
						v16 = *(_QWORD*)(v16 + 24);
					}
					else
					{
						v15 = v16;
						v16 = *(_QWORD*)(v16 + 16);
					}
				} while (v16);
			}
			if ((int*)v15 == v12 || v11 < *(_DWORD*)(v15 + 32))
			{
				v105 = a1[10];
				v17 = &v105;
			}
			else
			{
				v103 = v15;
				v17 = &v103;
			}
			if ((int*)*v17 == v12)
			{
				while (v13)
				{
					if (*(_DWORD*)(v13 + 32) < v11)
					{
						v13 = *(_QWORD*)(v13 + 24);
					}
					else
					{
						v12 = (int*)v13;
						v13 = *(_QWORD*)(v13 + 16);
					}
				}
				if (v12 == v14 || v11 < v12[8])
				{
					v107 = v11;
					v78 = v12;
					sub_140032B30((__int64)(a1 + 9), &v93, (__int64*)&v78, &v107);
					v12 = v93;
				}
				v12[9] = 0;
			}
			v18 = v80;
			v19 = *((_QWORD*)v80 + 1);
			v20 = v19;
			if (!v19)
				goto LABEL_40;
			do
			{
				if (*(_DWORD*)(v20 + 32) < v11)
				{
					v20 = *(_QWORD*)(v20 + 24);
				}
				else
				{
					v18 = (int*)v20;
					v20 = *(_QWORD*)(v20 + 16);
				}
			} while (v20);
			if (v18 == v80 || v11 < v18[8])
			{
			LABEL_40:
				v21 = v80;
				while (v19)
				{
					if (*(_DWORD*)(v19 + 32) < v11)
					{
						v19 = *(_QWORD*)(v19 + 24);
					}
					else
					{
						v21 = (int*)v19;
						v19 = *(_QWORD*)(v19 + 16);
					}
				}
				if (v21 == v80 || v11 < v21[8])
				{
					v108 = v11;
					v78 = v21;
					sub_140032B30((__int64)&v79, &v100, (__int64*)&v78, &v108);
					v21 = v100;
				}
				v21[9] = 1;
			}
			switch ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v10 + 8)))
			{
			case 0u:
				v22 = v9[2];
				if (!v22 || (*(_DWORD*)(v22 + 16) & 1) == 0)
				{
					v23 = v80;
					v24 = *((_QWORD*)v80 + 1);
					while (v24)
					{
						if (*(_DWORD*)(v24 + 32) < v11)
						{
							v24 = *(_QWORD*)(v24 + 24);
						}
						else
						{
							v23 = (int*)v24;
							v24 = *(_QWORD*)(v24 + 16);
						}
					}
					if (v23 == v80 || v11 < v23[8])
					{
						v109 = v11;
						v78 = v23;
						sub_140032B30((__int64)&v79, &v96, (__int64*)&v78, &v109);
						v96[9] = 0;
					}
					else
					{
						v23[9] = 0;
					}
				}
				break;
			case 1u:
			case 2u:
			case 4u:
				v25 = v9[2];
				if (!v25 || (*(_DWORD*)(v25 + 16) & 1) == 0)
				{
					v26 = v80;
					v27 = *((_QWORD*)v80 + 1);
					while (v27)
					{
						if (*(_DWORD*)(v27 + 32) < v11)
						{
							v27 = *(_QWORD*)(v27 + 24);
						}
						else
						{
							v26 = (int*)v27;
							v27 = *(_QWORD*)(v27 + 16);
						}
					}
					if (v26 == v80 || v11 < v26[8])
					{
						v88 = v11;
						v78 = v26;
						sub_140032B30((__int64)&v79, &v104, (__int64*)&v78, &v88);
						v104[9] = 0;
					}
					else
					{
						v26[9] = 0;
					}
				}
				v28 = a1[10];
				v29 = (int*)v28;
				v30 = *(_QWORD*)(v28 + 8);
				while (v30)
				{
					if (*(_DWORD*)(v30 + 32) < v11)
					{
						v30 = *(_QWORD*)(v30 + 24);
					}
					else
					{
						v29 = (int*)v30;
						v30 = *(_QWORD*)(v30 + 16);
					}
				}
				if (v29 == (int*)v28 || v11 < v29[8])
				{
					v86 = v11;
					v78 = v29;
					sub_140032B30((__int64)(a1 + 9), &v98, (__int64*)&v78, &v86);
					v29 = v98;
				}
				if (v29[9] < 2)
				{
					v31 = a1[10];
					v32 = (int*)v31;
					v33 = *(_QWORD*)(v31 + 8);
					while (v33)
					{
						if (*(_DWORD*)(v33 + 32) < v11)
						{
							v33 = *(_QWORD*)(v33 + 24);
						}
						else
						{
							v32 = (int*)v33;
							v33 = *(_QWORD*)(v33 + 16);
						}
					}
					if (v32 == (int*)v31 || v11 < v32[8])
					{
						v92 = v11;
						v78 = v32;
						sub_140032B30((__int64)(a1 + 9), &v102, (__int64*)&v78, &v92);
						v32 = v102;
					}
					v32[9] = 2;
				}
				break;
			case 3u:
				v43 = a1[10];
				v44 = (int*)v43;
				v45 = *(_QWORD*)(v43 + 8);
				while (v45)
				{
					if (*(_DWORD*)(v45 + 32) < v11)
					{
						v45 = *(_QWORD*)(v45 + 24);
					}
					else
					{
						v44 = (int*)v45;
						v45 = *(_QWORD*)(v45 + 16);
					}
				}
				if (v44 == (int*)v43 || v11 < v44[8])
				{
					v83 = v11;
					v78 = v44;
					sub_140032B30((__int64)(a1 + 9), &v99, (__int64*)&v78, &v83);
					v44 = v99;
				}
				if (v44[9] < 2)
				{
					v46 = a1[10];
					v47 = (int*)v46;
					v48 = *(_QWORD*)(v46 + 8);
					while (v48)
					{
						if (*(_DWORD*)(v48 + 32) < v11)
						{
							v48 = *(_QWORD*)(v48 + 24);
						}
						else
						{
							v47 = (int*)v48;
							v48 = *(_QWORD*)(v48 + 16);
						}
					}
					if (v47 == (int*)v46 || v11 < v47[8])
					{
						v84 = v11;
						v78 = v47;
						sub_140032B30((__int64)(a1 + 9), &v101, (__int64*)&v78, &v84);
						v47 = v101;
					}
					v47[9] = 2;
				}
				break;
			case 5u:
			case 6u:
			case 7u:
				v34 = v9[2];
				if (!v34 || (*(_DWORD*)(v34 + 16) & 1) == 0)
				{
					v35 = v80;
					v36 = *((_QWORD*)v80 + 1);
					while (v36)
					{
						if (*(_DWORD*)(v36 + 32) < v11)
						{
							v36 = *(_QWORD*)(v36 + 24);
						}
						else
						{
							v35 = (int*)v36;
							v36 = *(_QWORD*)(v36 + 16);
						}
					}
					if (v35 == v80 || v11 < v35[8])
					{
						v87 = v11;
						v78 = v35;
						sub_140032B30((__int64)&v79, &v94, (__int64*)&v78, &v87);
						v94[9] = 0;
					}
					else
					{
						v35[9] = 0;
					}
				}
				v37 = a1[10];
				v38 = (int*)v37;
				v39 = *(_QWORD*)(v37 + 8);
				while (v39)
				{
					if (*(_DWORD*)(v39 + 32) < v11)
					{
						v39 = *(_QWORD*)(v39 + 24);
					}
					else
					{
						v38 = (int*)v39;
						v39 = *(_QWORD*)(v39 + 16);
					}
				}
				if (v38 == (int*)v37 || v11 < v38[8])
				{
					v85 = v11;
					v78 = v38;
					sub_140032B30((__int64)(a1 + 9), &v95, (__int64*)&v78, &v85);
					v38 = v95;
				}
				if (v38[9] < 1)
				{
					v40 = a1[10];
					v41 = (int*)v40;
					v42 = *(_QWORD*)(v40 + 8);
					while (v42)
					{
						if (*(_DWORD*)(v42 + 32) < v11)
						{
							v42 = *(_QWORD*)(v42 + 24);
						}
						else
						{
							v41 = (int*)v42;
							v42 = *(_QWORD*)(v42 + 16);
						}
					}
					if (v41 == (int*)v40 || v11 < v41[8])
					{
						v82 = v11;
						v78 = v41;
						sub_140032B30((__int64)(a1 + 9), &v97, (__int64*)&v78, &v82);
						v41 = v97;
					}
					v41[9] = 1;
				}
				break;
			default:
				break;
			}
			v9 = (_QWORD*)*v9;
		} while (v9 != (_QWORD*)a1[5]);
		v2 = v106;
	}
	v49 = v80;
	v50 = *((_QWORD*)v80 + 2);
	if ((int*)v50 != v80)
	{
		do
		{
			if (*(_DWORD*)(v50 + 36))
			{
				v51 = a1[10];
				v52 = (int*)v51;
				v53 = *(_QWORD*)(v51 + 8);
				while (v53)
				{
					if (*(_DWORD*)(v53 + 32) < *(_DWORD*)(v50 + 32))
					{
						v53 = *(_QWORD*)(v53 + 24);
					}
					else
					{
						v52 = (int*)v53;
						v53 = *(_QWORD*)(v53 + 16);
					}
				}
				if (v52 == (int*)v51 || *(_DWORD*)(v50 + 32) < (unsigned int)v52[8])
				{
					v106 = *(unsigned int*)(v50 + 32);
					v107 = (__int64)v52;
					sub_140032B30((__int64)(a1 + 9), (int**)&v108, &v107, &v106);
					v52 = (int*)v108;
				}
				v52[9] = 3;
				v49 = v80;
			}
			v54 = *(_QWORD*)(v50 + 24);
			if (v54)
			{
				v50 = *(_QWORD*)(v50 + 24);
				for (k = *(_QWORD*)(v54 + 16); k; k = *(_QWORD*)(k + 16))
					v50 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v50 + 8); v50 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v50 = m;
				if (*(_QWORD*)(v50 + 24) != m)
					v50 = m;
			}
		} while ((int*)v50 != v49);
	}
	v57 = a1[10];
	v58 = *(_QWORD*)(v57 + 16);
	if (v58 != v57)
	{
		v59 = v90;
		do
		{
			v60 = *(_QWORD*)(v59 + 8);
			v61 = v59;
			if (!v60)
				goto LABEL_170;
			v62 = *(_DWORD*)(v58 + 32);
			do
			{
				if (*(_DWORD*)(v60 + 32) < v62)
				{
					v60 = *(_QWORD*)(v60 + 24);
				}
				else
				{
					v61 = v60;
					v60 = *(_QWORD*)(v60 + 16);
				}
			} while (v60);
			if (v61 == v59 || v62 < *(_DWORD*)(v61 + 32))
			{
			LABEL_170:
				v107 = v59;
				v63 = &v107;
			}
			else
			{
				v106 = v61;
				v63 = &v106;
			}
			v64 = *v63;
			if (v64 == v59 || (v61 = *(unsigned int*)(v58 + 36), *(_DWORD*)(v64 + 36) != (_DWORD)v61))
			{
				v65 = (unsigned int**)sub_1405A9420(v61, *(_DWORD*)(v58 + 32));
				if (v65)
					sub_14077D8B0(v65, (__int64)a1);
				v59 = v90;
			}
			v66 = *(_QWORD*)(v58 + 24);
			if (v66)
			{
				v58 = *(_QWORD*)(v58 + 24);
				for (n = *(_QWORD*)(v66 + 16); n; n = *(_QWORD*)(n + 16))
					v58 = n;
			}
			else
			{
				for (ii = *(_QWORD*)(v58 + 8); v58 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
					v58 = ii;
				if (*(_QWORD*)(v58 + 24) != ii)
					v58 = ii;
			}
		} while (v58 != a1[10]);
	}
	v69 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 192i64))(a1);
	if (v2 != v69)
	{
		v70 = *(_QWORD*)(qword_140C65898 + 29504);
		v71 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
		sub_1400EA3E0(v70, "EpisodeStateChanged", byte_1409E95F4, v71, v2, v69);
	}
	if (v81)
	{
		v72 = v80;
		v73 = *((_QWORD*)v80 + 1);
		if (v73)
		{
			do
			{
				sub_1400083B0((__int64)&v79, *(_QWORD*)(v73 + 24));
				v74 = *(_QWORD*)(v73 + 16);
				sub_14018B900(v73, 0);
				v73 = v74;
			} while (v74);
			v72 = v80;
		}
		*((_QWORD*)v72 + 2) = v72;
		*((_QWORD*)v80 + 1) = 0i64;
		*((_QWORD*)v80 + 3) = v80;
		v81 = 0i64;
	}
	sub_14018B900((__int64)v80, 0);
	if (v91)
	{
		v75 = v90;
		v76 = *(_QWORD*)(v90 + 8);
		if (v76)
		{
			do
			{
				sub_1400083B0((__int64)v89, *(_QWORD*)(v76 + 24));
				v77 = *(_QWORD*)(v76 + 16);
				sub_14018B900(v76, 0);
				v76 = v77;
			} while (v77);
			v75 = v90;
		}
		*(_QWORD*)(v75 + 16) = v75;
		*(_QWORD*)(v90 + 8) = 0i64;
		*(_QWORD*)(v90 + 24) = v90;
		v91 = 0i64;
	}
	sub_14018B900(v90, 0);
}
// 1409E95F4: using guessed type _BYTE byte_1409E95F4[104];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140787D10: using guessed type char var_D0[8];

