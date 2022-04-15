#include "../winhttp.h"

//----- (00000001404AE270) ----------------------------------------------------
__int64 __fastcall sub_1404AE270(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r15d
	unsigned int i; // esi
	_DWORD* v5; // rax
	_DWORD* v6; // rbx
	int v7; // edi
	unsigned int v8; // r14d
	__int64 v9; // rax
	int* v10; // rax
	int* v11; // r14
	int* v12; // rax
	__int64 v13; // r14
	unsigned int v14; // eax
	unsigned int v15; // ebx
	unsigned int v16; // ecx
	_DWORD* v17; // rax
	_DWORD* v18; // r12
	unsigned int v19; // r14d
	__int64 v20; // r9
	__int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // rax
	__int64* v26; // rax
	__int64 v27; // rax
	__int64 v28; // rdx
	__int64* v29; // rax
	__int64 v30; // rax
	int* v31; // r15
	__int64(__fastcall * v32)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v33; // ebx
	__int64 v34; // rax
	int v35; // edi
	unsigned int v36; // ebx
	__int64 v37; // rax
	int v38; // ecx
	int v39; // eax
	__int64 v40; // r8
	bool v41; // al
	__int64 v42; // rcx
	__int64 v43; // rbx
	__int64 v44; // rdx
	unsigned int v45; // r8d
	__int64 v46; // r9
	bool v47; // al
	__int64 v48; // rcx
	__int64 v49; // rbx
	__int64 j; // rax
	__int64 v51; // rax
	int* v52; // rcx
	__int64 v53; // rax
	__int64 v54; // rax
	__int64 v55; // rdx
	__int64 k; // rax
	__int64 v57; // rax
	int* v58; // rcx
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v62; // [rsp+30h] [rbp-89h] BYREF
	int* v63; // [rsp+38h] [rbp-81h]
	__int64 v64; // [rsp+40h] [rbp-79h] BYREF
	int* v65; // [rsp+48h] [rbp-71h]
	__int64 v66[2]; // [rsp+50h] [rbp-69h] BYREF
	int* v67[2]; // [rsp+60h] [rbp-59h] BYREF
	_QWORD v68[2]; // [rsp+70h] [rbp-49h] BYREF
	int* v69[2]; // [rsp+80h] [rbp-39h] BYREF
	_QWORD v70[2]; // [rsp+90h] [rbp-29h] BYREF
	__int64 v71[2]; // [rsp+A0h] [rbp-19h] BYREF
	__int64 v72[2]; // [rsp+B0h] [rbp-9h] BYREF
	char v73[16]; // [rsp+C0h] [rbp+7h] BYREF
	char v74[16]; // [rsp+D0h] [rbp+17h] BYREF
	unsigned int v75; // [rsp+128h] [rbp+6Fh]
	unsigned int v76; // [rsp+130h] [rbp+77h]
	__int64 v77; // [rsp+138h] [rbp+7Fh] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6D9A0, qword_140C63858);
	}
	else
	{
		if (dword_140C6497C)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140241160() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64968 + 40i64))(qword_140C64968);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = (_DWORD*)qword_140C63848(off_140A6D9A0, i, qword_140C63858);
		}
		else
		{
			if (dword_140C6497C || (int)sub_140241160() < 0)
				continue;
			v5 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64968 + 32i64))(
				qword_140C64968,
				i);
		}
		v6 = v5;
		if (v5)
		{
			v7 = *v5;
			if (*v5)
			{
				v8 = v5[6];
				if (qword_140C63840)
				{
					v9 = qword_140C63840(off_140A6E228, v8, qword_140C63858);
					goto LABEL_22;
				}
				if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v8);
				LABEL_22:
					if (v9)
					{
						if (v6[2] != 2
							&& (*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 24i64))(a1, *(unsigned int*)(v9 + 40)))
						{
							v10 = (int*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
							LODWORD(v64) = v7;
							*(_QWORD*)v10 = v6;
							v11 = v10;
							v65 = v10;
							sub_140055F80((__int64)(a1 + 1), (__int64)v68, &v64);
							if ((*(_BYTE*)(*(_QWORD*)v11 + 12i64) & 1) != 0)
							{
								LODWORD(v62) = v7;
								v63 = v11;
								sub_140055F80((__int64)(a1 + 9), (__int64)v70, &v62);
							}
							if ((*(_BYTE*)(*(_QWORD*)v11 + 12i64) & 4) != 0)
							{
								LODWORD(v69[0]) = v7;
								v69[1] = v11;
								sub_140055F80((__int64)(a1 + 17), (__int64)v72, v69);
							}
						}
						if (v6[2] != 1)
						{
							v12 = (int*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
							LODWORD(v67[0]) = v7;
							*(_QWORD*)v12 = v6;
							v13 = (__int64)v12;
							v67[1] = v12;
							sub_140055F80((__int64)(a1 + 5), (__int64)v71, v67);
							if ((*(_BYTE*)(*(_QWORD*)v13 + 12i64) & 1) != 0)
							{
								LODWORD(v66[0]) = v7;
								v66[1] = v13;
								sub_140055F80((__int64)(a1 + 13), (__int64)v73, v66);
							}
						}
					}
				}
			}
		}
	}
	if (qword_140C63838)
	{
		v14 = qword_140C63838(off_140A6D9D8, qword_140C63858);
	}
	else if (dword_140C64320)
	{
		v14 = 0;
	}
	else if ((int)sub_1402415A0() >= 0)
	{
		v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63AC0 + 40i64))(qword_140C63AC0);
	}
	else
	{
		v14 = 0;
	}
	v15 = 0;
	v75 = v14;
	v76 = 0;
	if (v14)
	{
		v16 = v14;
		while (1)
		{
			if (qword_140C63848)
			{
				v17 = (_DWORD*)qword_140C63848(off_140A6D9D8, v15, qword_140C63858);
				goto LABEL_47;
			}
			if (!dword_140C64320)
				break;
		LABEL_157:
			v15 = ++v76;
			if (v76 >= v16)
				return 0i64;
		}
		if ((int)sub_1402415A0() < 0)
			goto LABEL_156;
		v17 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AC0 + 32i64))(
			qword_140C63AC0,
			v15);
	LABEL_47:
		v18 = v17;
		if (!v17)
			goto LABEL_156;
		v19 = *v17;
		if (!*v17)
			goto LABEL_156;
		v20 = a1[2];
		v21 = 0i64;
		v22 = 0i64;
		v23 = *(_QWORD*)(v20 + 8);
		v24 = v20;
		v25 = v23;
		while (v25)
		{
			if (*(_DWORD*)(v25 + 32) < v18[1])
			{
				v25 = *(_QWORD*)(v25 + 24);
			}
			else
			{
				v24 = v25;
				v25 = *(_QWORD*)(v25 + 16);
			}
		}
		if (v24 == v20 || v18[1] < *(_DWORD*)(v24 + 32))
		{
			v71[0] = a1[2];
			v26 = v71;
		}
		else
		{
			v77 = v24;
			v26 = &v77;
		}
		v27 = *v26;
		if (v27 != v20)
			v21 = *(_QWORD*)(v27 + 40);
		v28 = v20;
		while (v23)
		{
			if (*(_DWORD*)(v23 + 32) < v18[2])
			{
				v23 = *(_QWORD*)(v23 + 24);
			}
			else
			{
				v28 = v23;
				v23 = *(_QWORD*)(v23 + 16);
			}
		}
		if (v28 == v20 || v18[2] < *(_DWORD*)(v28 + 32))
		{
			v66[0] = v20;
			v29 = v66;
		}
		else
		{
			v72[0] = v28;
			v29 = v72;
		}
		v30 = *v29;
		if (v30 != v20)
			v22 = *(_QWORD*)(v30 + 40);
		if (!v21 && !v22)
		{
		LABEL_156:
			v16 = v75;
			goto LABEL_157;
		}
		v31 = (int*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
		*(_QWORD*)v31 = v18;
		*((_QWORD*)v31 + 1) = v21;
		*((_QWORD*)v31 + 2) = v22;
		if (!v21 || !v22)
		{
		LABEL_94:
			LODWORD(v62) = v19;
			v63 = v31;
			v40 = a1[26];
			v41 = 1;
			v42 = *(_QWORD*)(v40 + 8);
			v43 = v40;
			while (v42)
			{
				v43 = v42;
				v41 = v19 < *(_DWORD*)(v42 + 32);
				if (v19 >= *(_DWORD*)(v42 + 32))
					v42 = *(_QWORD*)(v42 + 24);
				else
					v42 = *(_QWORD*)(v42 + 16);
			}
			v44 = v43;
			if (v41)
			{
				if (v43 == *(_QWORD*)(v40 + 16))
				{
					sub_140055E80((__int64)(a1 + 25), v67, v42, v43, &v62);
					goto LABEL_102;
				}
				if (*(_BYTE*)v43 || *(_QWORD*)(*(_QWORD*)(v43 + 8) + 8i64) != v43)
				{
					v44 = *(_QWORD*)(v43 + 16);
					if (v44)
					{
						for (j = *(_QWORD*)(v44 + 24); j; j = *(_QWORD*)(j + 24))
							v44 = j;
					}
					else
					{
						v44 = *(_QWORD*)(v43 + 8);
						if (v43 == *(_QWORD*)(v44 + 16))
						{
							do
							{
								v51 = v44;
								v44 = *(_QWORD*)(v44 + 8);
							} while (v51 == *(_QWORD*)(v44 + 16));
						}
					}
				}
				else
				{
					v44 = *(_QWORD*)(v43 + 24);
				}
			}
			if (*(_DWORD*)(v44 + 32) < v19)
			{
				if (v43 == v40 || v19 < *(_DWORD*)(v43 + 32))
				{
					v52 = sub_14018B280(48i64, 0);
					if (v52 != (int*)-32i64)
					{
						*((_QWORD*)v52 + 4) = v62;
						*((_QWORD*)v52 + 5) = v31;
					}
					*(_QWORD*)(v43 + 16) = v52;
					v54 = a1[26];
					if (v43 == v54)
					{
						*(_QWORD*)(v54 + 8) = v52;
						*(_QWORD*)(a1[26] + 24i64) = v52;
					}
					else if (v43 == *(_QWORD*)(v54 + 16))
					{
						*(_QWORD*)(v54 + 16) = v52;
					}
				}
				else
				{
					v52 = sub_14018B280(48i64, 0);
					if (v52 != (int*)-32i64)
					{
						*((_QWORD*)v52 + 4) = v62;
						*((_QWORD*)v52 + 5) = v31;
					}
					*(_QWORD*)(v43 + 24) = v52;
					v53 = a1[26];
					if (v43 == *(_QWORD*)(v53 + 24))
						*(_QWORD*)(v53 + 24) = v52;
				}
				*((_QWORD*)v52 + 1) = v43;
				*((_QWORD*)v52 + 2) = 0i64;
				*((_QWORD*)v52 + 3) = 0i64;
				sub_1400081C0((__int64)v52, (_QWORD*)(a1[26] + 8i64));
				++a1[27];
			}
		LABEL_102:
			v45 = v18[1];
			v65 = v31;
			v46 = a1[30];
			LODWORD(v64) = v45;
			v47 = 1;
			v48 = *(_QWORD*)(v46 + 8);
			v49 = v46;
			while (v48)
			{
				v49 = v48;
				v47 = v45 < *(_DWORD*)(v48 + 32);
				if (v45 >= *(_DWORD*)(v48 + 32))
					v48 = *(_QWORD*)(v48 + 24);
				else
					v48 = *(_QWORD*)(v48 + 16);
			}
			v55 = v49;
			if (v47)
			{
				if (v49 == *(_QWORD*)(v46 + 16))
				{
					sub_140055E80((__int64)(a1 + 29), v69, v48, v49, &v64);
					goto LABEL_156;
				}
				if (*(_BYTE*)v49 || *(_QWORD*)(*(_QWORD*)(v49 + 8) + 8i64) != v49)
				{
					v55 = *(_QWORD*)(v49 + 16);
					if (v55)
					{
						for (k = *(_QWORD*)(v55 + 24); k; k = *(_QWORD*)(k + 24))
							v55 = k;
					}
					else
					{
						v55 = *(_QWORD*)(v49 + 8);
						if (v49 == *(_QWORD*)(v55 + 16))
						{
							do
							{
								v57 = v55;
								v55 = *(_QWORD*)(v55 + 8);
							} while (v57 == *(_QWORD*)(v55 + 16));
						}
					}
				}
				else
				{
					v55 = *(_QWORD*)(v49 + 24);
				}
			}
			if (*(_DWORD*)(v55 + 32) < v45)
			{
				if (v49 == v46 || v45 < *(_DWORD*)(v49 + 32))
				{
					v58 = sub_14018B280(48i64, 0);
					if (v58 != (int*)-32i64)
					{
						*((_QWORD*)v58 + 4) = v64;
						*((_QWORD*)v58 + 5) = v31;
					}
					*(_QWORD*)(v49 + 16) = v58;
					v60 = a1[30];
					if (v49 == v60)
					{
						*(_QWORD*)(v60 + 8) = v58;
						*(_QWORD*)(a1[30] + 24i64) = v58;
					}
					else if (v49 == *(_QWORD*)(v60 + 16))
					{
						*(_QWORD*)(v60 + 16) = v58;
					}
				}
				else
				{
					v58 = sub_14018B280(48i64, 0);
					if (v58 != (int*)-32i64)
					{
						*((_QWORD*)v58 + 4) = v64;
						*((_QWORD*)v58 + 5) = v31;
					}
					*(_QWORD*)(v49 + 24) = v58;
					v59 = a1[30];
					if (v49 == *(_QWORD*)(v59 + 24))
						*(_QWORD*)(v59 + 24) = v58;
				}
				*((_QWORD*)v58 + 1) = v49;
				*((_QWORD*)v58 + 2) = 0i64;
				*((_QWORD*)v58 + 3) = 0i64;
				sub_1400081C0((__int64)v58, (_QWORD*)(a1[30] + 8i64));
				++a1[31];
			}
			goto LABEL_156;
		}
		v32 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v33 = *(_DWORD*)(*(_QWORD*)v21 + 24i64);
		if (qword_140C63840)
		{
			v34 = qword_140C63840(off_140A6E228, v33, qword_140C63858);
		}
		else
		{
			if (dword_140C63E98)
			{
			LABEL_83:
				v35 = 0;
			LABEL_84:
				v36 = *(_DWORD*)(**((_QWORD**)v31 + 2) + 24i64);
				if (v32)
				{
					v37 = v32(off_140A6E228, v36, qword_140C63858);
				}
				else
				{
					if (dword_140C63E98 || (int)sub_14024B720() < 0)
						goto LABEL_91;
					v37 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v36);
				}
				if (v37)
				{
					v38 = *(_DWORD*)(v37 + 40);
					goto LABEL_92;
				}
			LABEL_91:
				v38 = 0;
			LABEL_92:
				if (v35 == v38)
				{
					LODWORD(v70[0]) = v19;
					v70[1] = v31;
					sub_140055F80((__int64)(a1 + 21), (__int64)v73, v70);
					v39 = v18[2];
					v68[1] = v31;
					LODWORD(v68[0]) = v39;
					sub_140055F80(v21 + 8, (__int64)v74, v68);
					goto LABEL_156;
				}
				goto LABEL_94;
			}
			if ((int)sub_14024B720() < 0)
			{
			LABEL_82:
				v32 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				goto LABEL_83;
			}
			v34 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v33);
		}
		if (v34)
		{
			v35 = *(_DWORD*)(v34 + 40);
			v32 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			goto LABEL_84;
		}
		goto LABEL_82;
	}
	return 0i64;
}
// 1404AE85F: conditional instruction was optimized away because rcx.8==0
// 1404AE9AF: conditional instruction was optimized away because rcx.8==0
// 140A6D9A0: using guessed type wchar_t *off_140A6D9A0[2];
// 140A6D9D8: using guessed type wchar_t *off_140A6D9D8[2];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AC0: using guessed type __int64 qword_140C63AC0;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C64320: using guessed type int dword_140C64320;
// 140C64968: using guessed type __int64 qword_140C64968;
// 140C6497C: using guessed type int dword_140C6497C;
// 140C65388: using guessed type __int64 qword_140C65388;
// 1404AE270: using guessed type char var_40[16];

