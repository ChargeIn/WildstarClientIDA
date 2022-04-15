#include "../winhttp.h"

//----- (00000001404CFE20) ----------------------------------------------------
__int64 __fastcall sub_1404CFE20(__int64 a1)
{
	__int64 v1; // r15
	unsigned int v2; // eax
	unsigned int v3; // r13d
	int* v4; // rax
	int* v5; // r14
	int v6; // edi
	int v7; // r12d
	unsigned int v8; // ebx
	unsigned int v9; // esi
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64* v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	__int64* v25; // rbx
	int* v26; // rax
	int* v27; // rax
	int* v28; // rax
	unsigned __int64 v29; // rcx
	unsigned __int64 v30; // rdx
	_DWORD* v31; // rax
	unsigned int v32; // r8d
	__int64 v33; // rdx
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64* v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // r9
	__int64 v39; // rdx
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rax
	__int64* v43; // rbx
	int* v44; // rax
	unsigned __int64 v45; // rcx
	unsigned __int64 v46; // rdx
	_DWORD* v47; // rax
	unsigned int v49; // [rsp+20h] [rbp-49h] BYREF
	unsigned int v50; // [rsp+24h] [rbp-45h] BYREF
	__int64 v51; // [rsp+28h] [rbp-41h] BYREF
	__int64 v52; // [rsp+30h] [rbp-39h] BYREF
	__int64 v53; // [rsp+38h] [rbp-31h] BYREF
	__int64 v54; // [rsp+40h] [rbp-29h] BYREF
	__int64 v55; // [rsp+48h] [rbp-21h] BYREF
	__int64 v56; // [rsp+50h] [rbp-19h] BYREF
	__int64 v57; // [rsp+58h] [rbp-11h] BYREF
	__int64 v58; // [rsp+60h] [rbp-9h] BYREF
	__int64 v59; // [rsp+68h] [rbp-1h] BYREF
	__int64 v60; // [rsp+70h] [rbp+7h] BYREF
	unsigned int v62; // [rsp+D8h] [rbp+6Fh]
	int v63; // [rsp+E0h] [rbp+77h] BYREF
	int v64; // [rsp+E8h] [rbp+7Fh] BYREF

	v1 = a1;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6A1D8, qword_140C63858);
	}
	else if (dword_140C65444)
	{
		v2 = 0;
	}
	else if ((int)sub_1401FD540() >= 0)
	{
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653A0 + 40i64))(qword_140C653A0);
	}
	else
	{
		v2 = 0;
	}
	v3 = 0;
	v62 = v2;
	if (v2)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C65444 && (int)sub_1401FD540() >= 0)
			{
				v4 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 32i64))(
					qword_140C653A0,
					v3);
				goto LABEL_14;
			}
		LABEL_90:
			if (++v3 >= v62)
				return 0i64;
		}
		v4 = (int*)qword_140C63848(off_140A6A1D8, v3, qword_140C63858);
	LABEL_14:
		v5 = v4;
		if (v4)
		{
			v6 = v4[3];
			v7 = *v4;
			v8 = v4[8];
			v9 = v4[9];
			v64 = *v4;
			v63 = v6;
			v50 = v8;
			v49 = v9;
			if (v6)
			{
				if (v6 < 23 && sub_1401FD360(v8) && v9 < 3)
				{
					v10 = *(_QWORD*)(v1 + 16);
					v11 = v10;
					v12 = *(_QWORD*)(v10 + 8);
					while (v12)
					{
						if (*(_DWORD*)(v12 + 32) < v6)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v11 = v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v11 == v10 || v6 < *(_DWORD*)(v11 + 32))
					{
						v53 = *(_QWORD*)(v1 + 16);
						v13 = &v53;
					}
					else
					{
						v55 = v11;
						v13 = &v55;
					}
					v14 = *v13;
					if (v14 == *(_QWORD*)(a1 + 16))
						goto LABEL_50;
					v15 = *(_QWORD*)(v14 + 48);
					v16 = v15;
					v17 = *(_QWORD*)(v15 + 8);
					while (v17)
					{
						if (*(_DWORD*)(v17 + 32) < v8)
						{
							v17 = *(_QWORD*)(v17 + 24);
						}
						else
						{
							v16 = v17;
							v17 = *(_QWORD*)(v17 + 16);
						}
					}
					if (v16 == v15 || v8 < *(_DWORD*)(v16 + 32))
					{
						v51 = *(_QWORD*)(v14 + 48);
						v18 = &v51;
					}
					else
					{
						v57 = v16;
						v18 = &v57;
					}
					v19 = *v18;
					if (v19 == v15)
						goto LABEL_50;
					v20 = *(_QWORD*)(v19 + 48);
					v21 = v20;
					v22 = *(_QWORD*)(v20 + 8);
					while (v22)
					{
						if (*(_DWORD*)(v22 + 32) < v9)
						{
							v22 = *(_QWORD*)(v22 + 24);
						}
						else
						{
							v21 = v22;
							v22 = *(_QWORD*)(v22 + 16);
						}
					}
					if (v21 == v20 || v9 < *(_DWORD*)(v21 + 32))
					{
						v52 = *(_QWORD*)(v19 + 48);
						v23 = &v52;
					}
					else
					{
						v59 = v21;
						v23 = &v59;
					}
					v24 = *v23;
					if (v24 == v20 || (v25 = *(__int64**)(v24 + 40)) == 0i64)
					{
					LABEL_50:
						v25 = (__int64*)sub_14018B280(16i64, 0);
						if (v25)
						{
							v25[1] = 0i64;
							*v25 = 0i64;
						}
						else
						{
							v25 = 0i64;
						}
						v26 = sub_1404D0310(v1 + 8, &v63);
						v27 = sub_1404A8A10((__int64)v26, (int*)&v50);
						v28 = sub_140055BE0((__int64)v27, &v49);
						v6 = v63;
						*(_QWORD*)v28 = v25;
					}
					v29 = v25[1];
					v30 = 0i64;
					if (v29)
					{
						v31 = (_DWORD*)*v25;
						while (*v31 != v7)
						{
							++v30;
							++v31;
							if (v30 >= v29)
								goto LABEL_58;
						}
					}
					else
					{
					LABEL_58:
						sub_140003460(v25, &v64);
					}
					v32 = v5[5];
					v1 = a1;
					v49 = v32;
					if (v32)
					{
						v33 = *(_QWORD*)(a1 + 48);
						v34 = v33;
						v35 = *(_QWORD*)(v33 + 8);
						while (v35)
						{
							if (*(_DWORD*)(v35 + 32) < v6)
							{
								v35 = *(_QWORD*)(v35 + 24);
							}
							else
							{
								v34 = v35;
								v35 = *(_QWORD*)(v35 + 16);
							}
						}
						if (v34 == v33 || v6 < *(_DWORD*)(v34 + 32))
						{
							v56 = *(_QWORD*)(a1 + 48);
							v36 = &v56;
						}
						else
						{
							v54 = v34;
							v36 = &v54;
						}
						v37 = *v36;
						if (v37 == v33)
							goto LABEL_81;
						v38 = *(_QWORD*)(v37 + 48);
						v39 = v38;
						v40 = *(_QWORD*)(v38 + 8);
						while (v40)
						{
							if (*(_DWORD*)(v40 + 32) < v32)
							{
								v40 = *(_QWORD*)(v40 + 24);
							}
							else
							{
								v39 = v40;
								v40 = *(_QWORD*)(v40 + 16);
							}
						}
						if (v39 == v38 || v32 < *(_DWORD*)(v39 + 32))
						{
							v60 = *(_QWORD*)(v37 + 48);
							v41 = &v60;
						}
						else
						{
							v58 = v39;
							v41 = &v58;
						}
						v42 = *v41;
						if (v42 == v38 || (v43 = *(__int64**)(v42 + 40)) == 0i64)
						{
						LABEL_81:
							v43 = (__int64*)sub_14018B280(16i64, 0);
							if (v43)
							{
								v43[1] = 0i64;
								*v43 = 0i64;
							}
							else
							{
								v43 = 0i64;
							}
							v44 = sub_1404D0460(a1 + 40, &v63);
							*(_QWORD*)sub_140055BE0((__int64)v44, &v49) = v43;
						}
						v45 = v43[1];
						v46 = 0i64;
						if (v45)
						{
							v47 = (_DWORD*)*v43;
							while (*v47 != v7)
							{
								++v46;
								++v47;
								if (v46 >= v45)
									goto LABEL_89;
							}
						}
						else
						{
						LABEL_89:
							sub_140003460(v43, &v64);
						}
					}
				}
			}
		}
		goto LABEL_90;
	}
	return 0i64;
}
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;

