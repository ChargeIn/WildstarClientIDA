#include "../winhttp.h"

//----- (00000001404931C0) ----------------------------------------------------
__int64 __fastcall sub_1404931C0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r12
	__int64 v3; // r8
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 i; // rax
	bool v7; // zf
	int* j; // rbx
	_QWORD* v10; // rax
	_QWORD* v11; // r13
	unsigned int v12; // eax
	unsigned int v13; // r15d
	unsigned int k; // r14d
	__int64 v15; // rax
	__int64 v16; // rsi
	unsigned int v17; // ebx
	__int64 v18; // rax
	unsigned int* v19; // rbx
	__int64 v20; // rdi
	__int64 v21; // rax
	__int64 v22; // rdi
	unsigned int v23; // edx
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // rbx
	int* v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rax
	unsigned int v30; // eax
	unsigned int v31; // r15d
	unsigned int v32; // esi
	__int64 v33; // rax
	__int64 v34; // rdi
	__int64 v35; // rdx
	__int64 v36; // rcx
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // rax
	__int64 v40; // r14
	__int64 v41; // rbx
	__int64 v42; // r8
	__int64 v43; // rcx
	__int64 v44; // rax
	__int64* v45; // rcx
	int v46; // eax
	unsigned int v47; // eax
	unsigned int v48; // r12d
	__int64 v49; // rax
	unsigned int* v50; // r14
	__int64 v51; // rax
	unsigned int v52; // r9d
	__int64 v53; // r10
	__int64 v54; // r15
	__int64 v55; // rcx
	bool v56; // r8
	__int64 v57; // rbx
	__int64 v58; // rdx
	__int64 m; // rax
	__int64 v60; // rax
	int* v61; // rcx
	__int64 v62; // rax
	__int64 v63; // rax
	_DWORD* v64; // rdi
	__int64 v65; // rsi
	__int64 v66; // r8
	__int64 v67; // rcx
	__int64 v68; // rax
	__int64* v69; // rax
	__int64 v70; // rax
	__int64 v71; // rbx
	int* v72; // rax
	__int64 v73; // r9
	__int64 v74; // rcx
	__int64 v75; // rdx
	__int64 v76; // rax
	__int64* v77; // rcx
	unsigned int v78; // r8d
	__int64 v79; // rbx
	bool v80; // al
	__int64 v81; // rcx
	__int64 n; // rax
	__int64 v83; // rax
	int* v84; // rcx
	__int64 v85; // rax
	__int64 v86; // rax
	_DWORD* v87; // rdi
	__int64 v88; // rsi
	unsigned int v89; // ecx
	__int64 v90; // rdx
	__int64 v91; // rax
	__int64 v92; // rbx
	int* v93; // rcx
	__int64 v94; // rax
	__int64 v95; // rax
	_QWORD* v96; // rax
	_QWORD* v97; // rbx
	__int64 v98; // rax
	_QWORD* ii; // rax
	__int64 jj; // rax
	__int64 v101; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v102; // [rsp+38h] [rbp-C8h]
	__int64 v103; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v104; // [rsp+48h] [rbp-B8h]
	__int64 v105; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v106[2]; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v107; // [rsp+68h] [rbp-98h]
	int* v108[2]; // [rsp+70h] [rbp-90h] BYREF
	int v109; // [rsp+80h] [rbp-80h] BYREF
	__int64 v110[28]; // [rsp+88h] [rbp-78h] BYREF
	__int64 v111[30]; // [rsp+168h] [rbp+68h] BYREF
	__int64 v112; // [rsp+2A0h] [rbp+1A0h] BYREF
	unsigned int v113; // [rsp+2A8h] [rbp+1A8h]
	int* v114; // [rsp+2B0h] [rbp+1B0h] BYREF
	__int64 v115; // [rsp+2B8h] [rbp+1B8h] BYREF

	v113 = a2;
	v112 = a1;
	v2 = qword_140C65960;
	v107 = qword_140C65960;
	v3 = *(_QWORD*)(qword_140C65960 + 16);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	for (i = v5; i; i = *(_QWORD*)(i + 16))
		v4 = i;
	if (v4 == v3 || (v7 = *(_DWORD*)(v4 + 32) == 0, v112 = v4, !v7))
		v112 = v3;
	if (v112 != v3 && v112 != -40)
		return 2147500037i64;
	for (j = (int*)v3; v5; v5 = *(_QWORD*)(v5 + 16))
		j = (int*)v5;
	if (j == (int*)v3 || j[8])
	{
		v10 = sub_140494AF0(v111);
		v109 = 0;
		sub_140494D40((__int64)v110, (__int64)v10);
		v112 = (__int64)j;
		sub_1404953C0(v2 + 8, &v114, &v112, &v109);
		j = v114;
		sub_140494C80(v110);
		sub_140494C80(v111);
	}
	v11 = j + 10;
	if (qword_140C63838)
	{
		v12 = qword_140C63838(off_140A6C008, qword_140C63858);
	}
	else
	{
		if (dword_140C64874)
		{
			v13 = 0;
			goto LABEL_22;
		}
		if ((int)sub_140222020() < 0)
		{
			v13 = 0;
			goto LABEL_22;
		}
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C650B8 + 40i64))(qword_140C650B8);
	}
	v13 = v12;
LABEL_22:
	for (k = 0; k < v13; ++k)
	{
		if (qword_140C63848)
		{
			v15 = qword_140C63848(off_140A6C008, k, qword_140C63858);
		}
		else
		{
			if (dword_140C64874 || (int)sub_140222020() < 0)
				continue;
			v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C650B8 + 32i64))(qword_140C650B8, k);
		}
		v16 = v15;
		if (v15)
		{
			v17 = *(_DWORD*)(v15 + 28);
			if (qword_140C63840)
			{
				v18 = qword_140C63840(off_140A6E3E8, v17, qword_140C63858);
				goto LABEL_34;
			}
			if (!dword_140C64634 && (int)sub_14024D920() >= 0)
			{
				v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v17);
			LABEL_34:
				if (v18)
				{
					if ((*(_BYTE*)(v16 + 36) & 1) != 0)
					{
						v19 = (unsigned int*)(v16 + 52);
						v20 = 3i64;
						do
						{
							if (*v19)
								sub_1402284A0(*v19);
							++v19;
							--v20;
						} while (v20);
					}
					v21 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 8i64))(v2, v16, 0i64);
					LODWORD(v103) = *(_DWORD*)v16;
					v22 = v21;
					v104 = v21;
					sub_140055F80((__int64)v11, (__int64)v106, &v103);
					v23 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + 28i64);
					if (v23)
					{
						v24 = v11[5];
						LODWORD(v101) = *(_DWORD*)(*(_QWORD*)(v22 + 8) + 28i64);
						v25 = *(_QWORD*)(v24 + 8);
						v26 = v24;
						while (v25)
						{
							v26 = v25;
							if (v23 >= *(_DWORD*)(v25 + 32))
								v25 = *(_QWORD*)(v25 + 24);
							else
								v25 = *(_QWORD*)(v25 + 16);
						}
						if (v26 == v24 || v23 < *(_DWORD*)(v26 + 32))
						{
							v27 = sub_14018B280(48i64, 0);
							if (v27 != (int*)-32i64)
							{
								*((_QWORD*)v27 + 4) = v101;
								*((_QWORD*)v27 + 5) = v22;
							}
							*(_QWORD*)(v26 + 16) = v27;
							v29 = v11[5];
							if (v26 == v29)
							{
								*(_QWORD*)(v29 + 8) = v27;
								*(_QWORD*)(v11[5] + 24i64) = v27;
							}
							else if (v26 == *(_QWORD*)(v29 + 16))
							{
								*(_QWORD*)(v29 + 16) = v27;
							}
						}
						else
						{
							v27 = sub_14018B280(48i64, 0);
							if (v27 != (int*)-32i64)
							{
								*((_QWORD*)v27 + 4) = v101;
								*((_QWORD*)v27 + 5) = v22;
							}
							*(_QWORD*)(v26 + 24) = v27;
							v28 = v11[5];
							if (v26 == *(_QWORD*)(v28 + 24))
								*(_QWORD*)(v28 + 24) = v27;
						}
						*((_QWORD*)v27 + 1) = v26;
						*((_QWORD*)v27 + 2) = 0i64;
						*((_QWORD*)v27 + 3) = 0i64;
						sub_1400081C0((__int64)v27, (_QWORD*)(v11[5] + 8i64));
						++v11[6];
					}
				}
			}
		}
	}
	if (qword_140C63838)
	{
		v30 = qword_140C63838(off_140A6BF98, qword_140C63858);
	}
	else
	{
		if (dword_140C650B0)
		{
			v31 = 0;
			goto LABEL_68;
		}
		if ((int)sub_1402217A0() < 0)
		{
			v31 = 0;
			goto LABEL_68;
		}
		v30 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64660 + 40i64))(qword_140C64660);
	}
	v31 = v30;
LABEL_68:
	v32 = 0;
	if (v31)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C650B0 && (int)sub_1402217A0() >= 0)
			{
				v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64660 + 32i64))(qword_140C64660, v32);
				goto LABEL_74;
			}
		LABEL_99:
			if (++v32 >= v31)
				goto LABEL_100;
		}
		v33 = qword_140C63848(off_140A6BF98, v32, qword_140C63858);
	LABEL_74:
		v34 = v33;
		if (v33 && (*(_DWORD*)(v33 + 12) || (*(_BYTE*)(v33 + 8) & 1) != 0))
		{
			v35 = v11[1];
			v36 = v35;
			v37 = *(_QWORD*)(v35 + 8);
			while (v37)
			{
				if (*(_DWORD*)(v37 + 32) < *(_DWORD*)(v34 + 4))
				{
					v37 = *(_QWORD*)(v37 + 24);
				}
				else
				{
					v36 = v37;
					v37 = *(_QWORD*)(v37 + 16);
				}
			}
			if (v36 == v35 || *(_DWORD*)(v34 + 4) < *(_DWORD*)(v36 + 32))
			{
				v114 = (int*)v11[1];
				v38 = (__int64*)&v114;
			}
			else
			{
				v112 = v36;
				v38 = &v112;
			}
			v39 = *v38;
			if (v39 != v35)
			{
				v40 = *(_QWORD*)(v39 + 40);
				v41 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v2 + 16i64))(v2, v34, v40);
				sub_140494E40(v40, v41);
				LODWORD(v103) = *(_DWORD*)v34;
				v104 = v41;
				sub_140055F80((__int64)(v11 + 8), (__int64)v106, &v103);
				if ((*(_BYTE*)(v34 + 8) & 1) == 0)
				{
					v42 = v11[13];
					v43 = v42;
					v44 = *(_QWORD*)(v42 + 8);
					while (v44)
					{
						if (*(_DWORD*)(v44 + 32) < *(_DWORD*)(v34 + 12))
						{
							v44 = *(_QWORD*)(v44 + 24);
						}
						else
						{
							v43 = v44;
							v44 = *(_QWORD*)(v44 + 16);
						}
					}
					if (v43 == v42 || *(_DWORD*)(v34 + 12) < *(_DWORD*)(v43 + 32))
					{
						v105 = v11[13];
						v45 = &v105;
					}
					else
					{
						v115 = v43;
						v45 = &v115;
					}
					if (*v45 == v42)
					{
						v46 = *(_DWORD*)(v34 + 12);
						v102 = v40;
						LODWORD(v101) = v46;
						sub_140055F80((__int64)(v11 + 12), (__int64)v108, &v101);
					}
				}
			}
		}
		goto LABEL_99;
	}
LABEL_100:
	if (qword_140C63838)
	{
		v47 = qword_140C63838(off_140A6BFD0, qword_140C63858);
	}
	else if (dword_140C64500)
	{
		v47 = 0;
	}
	else if ((int)sub_140221BE0() >= 0)
	{
		v47 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64300 + 40i64))(qword_140C64300);
	}
	else
	{
		v47 = 0;
	}
	v48 = 0;
	v113 = v47;
	while (v48 < v113)
	{
		if (qword_140C63848)
		{
			v49 = qword_140C63848(off_140A6BFD0, v48, qword_140C63858);
		}
		else
		{
			if (dword_140C64500 || (int)sub_140221BE0() < 0)
				goto LABEL_224;
			v49 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64300 + 32i64))(qword_140C64300, v48);
		}
		v50 = (unsigned int*)v49;
		if (v49 && *(_DWORD*)(v49 + 24) && *(_DWORD*)(v49 + 32))
		{
			v51 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v107 + 24i64))(v107, v49, 0i64);
			v52 = *v50;
			v53 = v11[17];
			v54 = v51;
			LODWORD(v101) = *v50;
			v55 = *(_QWORD*)(v53 + 8);
			v102 = v51;
			v56 = 1;
			v57 = v53;
			while (v55)
			{
				v57 = v55;
				v56 = v52 < *(_DWORD*)(v55 + 32);
				if (v52 >= *(_DWORD*)(v55 + 32))
					v55 = *(_QWORD*)(v55 + 24);
				else
					v55 = *(_QWORD*)(v55 + 16);
			}
			v58 = v57;
			if (v56)
			{
				if (v57 == *(_QWORD*)(v53 + 16))
				{
					sub_140055E80((__int64)(v11 + 16), v108, v55, v57, &v101);
					goto LABEL_147;
				}
				if (*(_BYTE*)v57 || *(_QWORD*)(*(_QWORD*)(v57 + 8) + 8i64) != v57)
				{
					v58 = *(_QWORD*)(v57 + 16);
					if (v58)
					{
						for (m = *(_QWORD*)(v58 + 24); m; m = *(_QWORD*)(m + 24))
							v58 = m;
					}
					else
					{
						v58 = *(_QWORD*)(v57 + 8);
						if (v57 == *(_QWORD*)(v58 + 16))
						{
							do
							{
								v60 = v58;
								v58 = *(_QWORD*)(v58 + 8);
							} while (v60 == *(_QWORD*)(v58 + 16));
						}
					}
				}
				else
				{
					v58 = *(_QWORD*)(v57 + 24);
				}
			}
			if (*(_DWORD*)(v58 + 32) < v52)
			{
				if (v57 == v53 || v52 < *(_DWORD*)(v57 + 32))
				{
					v61 = sub_14018B280(48i64, 0);
					if (v61 != (int*)-32i64)
					{
						*((_QWORD*)v61 + 4) = v101;
						*((_QWORD*)v61 + 5) = v54;
					}
					*(_QWORD*)(v57 + 16) = v61;
					v63 = v11[17];
					if (v57 == v63)
					{
						*(_QWORD*)(v63 + 8) = v61;
						*(_QWORD*)(v11[17] + 24i64) = v61;
					}
					else if (v57 == *(_QWORD*)(v63 + 16))
					{
						*(_QWORD*)(v63 + 16) = v61;
					}
				}
				else
				{
					v61 = sub_14018B280(48i64, 0);
					if (v61 != (int*)-32i64)
					{
						*((_QWORD*)v61 + 4) = v101;
						*((_QWORD*)v61 + 5) = v54;
					}
					*(_QWORD*)(v57 + 24) = v61;
					v62 = v11[17];
					if (v57 == *(_QWORD*)(v62 + 24))
						*(_QWORD*)(v62 + 24) = v61;
				}
				*((_QWORD*)v61 + 1) = v57;
				*((_QWORD*)v61 + 2) = 0i64;
				*((_QWORD*)v61 + 3) = 0i64;
				sub_1400081C0((__int64)v61, (_QWORD*)(v11[17] + 8i64));
				++v11[18];
			}
		LABEL_147:
			v64 = v50 + 1;
			v65 = 2i64;
			do
			{
				v66 = v11[1];
				v67 = v66;
				v68 = *(_QWORD*)(v66 + 8);
				while (v68)
				{
					if (*(_DWORD*)(v68 + 32) < *v64)
					{
						v68 = *(_QWORD*)(v68 + 24);
					}
					else
					{
						v67 = v68;
						v68 = *(_QWORD*)(v68 + 16);
					}
				}
				if (v67 == v66 || *v64 < *(_DWORD*)(v67 + 32))
				{
					v114 = (int*)v11[1];
					v69 = (__int64*)&v114;
				}
				else
				{
					v112 = v67;
					v69 = &v112;
				}
				v70 = *v69;
				if (v70 != v66)
				{
					v71 = *(_QWORD*)(*(_QWORD*)(v70 + 40) + 56i64);
					v72 = sub_14018B280(24i64, 0);
					if (v72 != (int*)-16i64)
						*((_QWORD*)v72 + 2) = v54;
					*(_QWORD*)v72 = v71;
					*((_QWORD*)v72 + 1) = *(_QWORD*)(v71 + 8);
					**(_QWORD**)(v71 + 8) = v72;
					*(_QWORD*)(v71 + 8) = v72;
				}
				++v64;
				--v65;
			} while (v65);
			v73 = v11[25];
			v74 = v73;
			v75 = *(_QWORD*)(v73 + 8);
			v76 = v75;
			while (v76)
			{
				if (*(_DWORD*)(v76 + 32) < v50[8])
				{
					v76 = *(_QWORD*)(v76 + 24);
				}
				else
				{
					v74 = v76;
					v76 = *(_QWORD*)(v76 + 16);
				}
			}
			if (v74 == v73 || v50[8] < *(_DWORD*)(v74 + 32))
			{
				v105 = v11[25];
				v77 = &v105;
			}
			else
			{
				v115 = v74;
				v77 = &v115;
			}
			if (*v77 == v73)
			{
				v78 = v50[8];
				v79 = v73;
				v80 = 1;
				LODWORD(v103) = v78;
				while (v75)
				{
					v79 = v75;
					v80 = v78 < *(_DWORD*)(v75 + 32);
					if (v78 >= *(_DWORD*)(v75 + 32))
						v75 = *(_QWORD*)(v75 + 24);
					else
						v75 = *(_QWORD*)(v75 + 16);
				}
				v81 = v79;
				if (v80)
				{
					if (v79 != *(_QWORD*)(v73 + 16))
					{
						if (*(_BYTE*)v79 || *(_QWORD*)(*(_QWORD*)(v79 + 8) + 8i64) != v79)
						{
							v81 = *(_QWORD*)(v79 + 16);
							if (v81)
							{
								for (n = *(_QWORD*)(v81 + 24); n; n = *(_QWORD*)(n + 24))
									v81 = n;
							}
							else
							{
								v81 = *(_QWORD*)(v79 + 8);
								if (v79 == *(_QWORD*)(v81 + 16))
								{
									do
									{
										v83 = v81;
										v81 = *(_QWORD*)(v81 + 8);
									} while (v83 == *(_QWORD*)(v81 + 16));
								}
							}
						}
						else
						{
							v81 = *(_QWORD*)(v79 + 24);
						}
						goto LABEL_188;
					}
				LABEL_189:
					if (v79 == v73 || v78 < *(_DWORD*)(v79 + 32))
					{
						v84 = sub_14018B280(48i64, 0);
						if (v84 != (int*)-32i64)
						{
							*((_QWORD*)v84 + 4) = v103;
							*((_QWORD*)v84 + 5) = v54;
						}
						*(_QWORD*)(v79 + 16) = v84;
						v86 = v11[25];
						if (v79 == v86)
						{
							*(_QWORD*)(v86 + 8) = v84;
							*(_QWORD*)(v11[25] + 24i64) = v84;
						}
						else if (v79 == *(_QWORD*)(v86 + 16))
						{
							*(_QWORD*)(v86 + 16) = v84;
						}
					}
					else
					{
						v84 = sub_14018B280(48i64, 0);
						if (v84 != (int*)-32i64)
						{
							*((_QWORD*)v84 + 4) = v103;
							*((_QWORD*)v84 + 5) = v54;
						}
						*(_QWORD*)(v79 + 24) = v84;
						v85 = v11[25];
						if (v79 == *(_QWORD*)(v85 + 24))
							*(_QWORD*)(v85 + 24) = v84;
					}
					*((_QWORD*)v84 + 1) = v79;
					*((_QWORD*)v84 + 2) = 0i64;
					*((_QWORD*)v84 + 3) = 0i64;
					sub_1400081C0((__int64)v84, (_QWORD*)(v11[25] + 8i64));
					++v11[26];
				}
				else
				{
				LABEL_188:
					if (*(_DWORD*)(v81 + 32) < v78)
						goto LABEL_189;
				}
			}
			v87 = v50 + 12;
			v88 = 3i64;
			do
			{
				v89 = *(v87 - 3);
				if (v89 && *v87)
				{
					v90 = v11[21];
					LODWORD(v106[0]) = *(v87 - 3);
					v91 = *(_QWORD*)(v90 + 8);
					v92 = v90;
					while (v91)
					{
						v92 = v91;
						if (v89 >= *(_DWORD*)(v91 + 32))
							v91 = *(_QWORD*)(v91 + 24);
						else
							v91 = *(_QWORD*)(v91 + 16);
					}
					if (v92 == v90 || v89 < *(_DWORD*)(v92 + 32))
					{
						v93 = sub_14018B280(48i64, 0);
						if (v93 != (int*)-32i64)
						{
							*((_QWORD*)v93 + 4) = v106[0];
							*((_QWORD*)v93 + 5) = v54;
						}
						*(_QWORD*)(v92 + 16) = v93;
						v95 = v11[21];
						if (v92 == v95)
						{
							*(_QWORD*)(v95 + 8) = v93;
							*(_QWORD*)(v11[21] + 24i64) = v93;
						}
						else if (v92 == *(_QWORD*)(v95 + 16))
						{
							*(_QWORD*)(v95 + 16) = v93;
						}
					}
					else
					{
						v93 = sub_14018B280(48i64, 0);
						if (v93 != (int*)-32i64)
						{
							*((_QWORD*)v93 + 4) = v106[0];
							*((_QWORD*)v93 + 5) = v54;
						}
						*(_QWORD*)(v92 + 24) = v93;
						v94 = v11[21];
						if (v92 == *(_QWORD*)(v94 + 24))
							*(_QWORD*)(v94 + 24) = v93;
					}
					*((_QWORD*)v93 + 1) = v92;
					*((_QWORD*)v93 + 2) = 0i64;
					*((_QWORD*)v93 + 3) = 0i64;
					sub_1400081C0((__int64)v93, (_QWORD*)(v11[21] + 8i64));
					++v11[22];
				}
				++v87;
				--v88;
			} while (v88);
		}
	LABEL_224:
		++v48;
	}
	v96 = (_QWORD*)v11[1];
	v97 = (_QWORD*)v96[2];
	if (v97 != v96)
	{
		do
		{
			sub_140494F70(v97[5]);
			v98 = v97[3];
			if (v98)
			{
				v97 = (_QWORD*)v97[3];
				for (ii = *(_QWORD**)(v98 + 16); ii; ii = (_QWORD*)ii[2])
					v97 = ii;
			}
			else
			{
				for (jj = v97[1]; v97 == *(_QWORD**)(jj + 24); jj = *(_QWORD*)(jj + 8))
					v97 = (_QWORD*)jj;
				if (v97[3] != jj)
					v97 = (_QWORD*)jj;
			}
		} while (v97 != (_QWORD*)v11[1]);
	}
	return 0i64;
}
// 140493496: conditional instruction was optimized away because rax.8==0
// 1404938FF: conditional instruction was optimized away because rcx.8==0
// 140493B5F: conditional instruction was optimized away because rdx.8==0
// 140493C6F: conditional instruction was optimized away because rax.8==0
// 140A6BF98: using guessed type wchar_t *off_140A6BF98[2];
// 140A6BFD0: using guessed type wchar_t *off_140A6BFD0[2];
// 140A6C008: using guessed type wchar_t *off_140A6C008[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64300: using guessed type __int64 qword_140C64300;
// 140C64500: using guessed type int dword_140C64500;
// 140C64634: using guessed type int dword_140C64634;
// 140C64660: using guessed type __int64 qword_140C64660;
// 140C64874: using guessed type int dword_140C64874;
// 140C650B0: using guessed type int dword_140C650B0;
// 140C650B8: using guessed type __int64 qword_140C650B8;
// 140C65960: using guessed type __int64 qword_140C65960;
// 1404931C0: using guessed type __int64 var_128[30];
// 1404931C0: using guessed type __int64 var_208[28];

