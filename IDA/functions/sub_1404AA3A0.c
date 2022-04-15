#include "../winhttp.h"

//----- (00000001404AA3A0) ----------------------------------------------------
__int64 __fastcall sub_1404AA3A0(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r14d
	unsigned int i; // esi
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64* v12; // rax
	__int64 v13; // rax
	_QWORD* v14; // rcx
	int* v15; // rdx
	int* v16; // rax
	int* v17; // rbx
	int* v18; // rdx
	int v19; // eax
	unsigned int v20; // eax
	unsigned int v21; // ebp
	unsigned int j; // esi
	__int64 v23; // rax
	__int64 v24; // rbx
	unsigned int v25; // edi
	__int64 v26; // rax
	__int64 v27; // r8
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64* v30; // rcx
	int* v31; // rax
	__int64 v32; // rcx
	int v33; // eax
	__int64 v35; // [rsp+20h] [rbp-58h] BYREF
	_QWORD* v36; // [rsp+28h] [rbp-50h]
	char v37[16]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v38; // [rsp+88h] [rbp+10h] BYREF
	__int64 v39; // [rsp+90h] [rbp+18h] BYREF
	__int64 v40; // [rsp+98h] [rbp+20h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6CC80, qword_140C63858);
	}
	else
	{
		if (dword_140C64430)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140231260() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64078 + 40i64))(qword_140C64078);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6CC80, i, qword_140C63858);
		}
		else
		{
			if (dword_140C64430 || (int)sub_140231260() < 0)
				continue;
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64078 + 32i64))(qword_140C64078, i);
		}
		v6 = v5;
		if (v5)
		{
			v7 = *(_DWORD*)(v5 + 4);
			if (qword_140C63840)
			{
				v8 = qword_140C63840(off_140A6AC58, v7, qword_140C63858);
			LABEL_21:
				if (v8 && (*(unsigned int(__fastcall**)(_QWORD*, __int64))(*a1 + 16i64))(a1, v6))
				{
					v9 = a1[2];
					v10 = v9;
					v11 = *(_QWORD*)(v9 + 8);
					while (v11)
					{
						if (*(_DWORD*)(v11 + 32) < *(_DWORD*)(v6 + 4))
						{
							v11 = *(_QWORD*)(v11 + 24);
						}
						else
						{
							v10 = v11;
							v11 = *(_QWORD*)(v11 + 16);
						}
					}
					if (v10 == v9 || *(_DWORD*)(v6 + 4) < *(_DWORD*)(v10 + 32))
					{
						v39 = a1[2];
						v12 = &v39;
					}
					else
					{
						v38 = v10;
						v12 = &v38;
					}
					v13 = *v12;
					if (v13 == v9)
					{
						v16 = sub_14018B280(32i64, 0);
						v17 = v16;
						if (v16)
						{
							*((_QWORD*)v16 + 1) = 0i64;
							*((_QWORD*)v16 + 2) = 0i64;
							*((_QWORD*)v16 + 3) = 0i64;
						}
						else
						{
							v17 = 0i64;
						}
						v18 = (int*)*((_QWORD*)v17 + 2);
						v40 = v6;
						if (v18 == *((int**)v17 + 3))
						{
							sub_1400B9430(v17, v18, &v40);
						}
						else
						{
							if (v18)
								*(_QWORD*)v18 = v6;
							*((_QWORD*)v17 + 2) += 8i64;
						}
						v19 = *(_DWORD*)(v6 + 4);
						v36 = v17;
						LODWORD(v35) = v19;
						sub_140055F80((__int64)(a1 + 1), (__int64)v37, &v35);
					}
					else
					{
						v14 = *(_QWORD**)(v13 + 40);
						v40 = v6;
						v15 = (int*)v14[2];
						if (v15 == (int*)v14[3])
						{
							sub_1400B9430(v14, v15, &v40);
						}
						else
						{
							if (v15)
								*(_QWORD*)v15 = v6;
							v14[2] += 8i64;
						}
					}
				}
				continue;
			}
			if (!dword_140C650D4 && (int)sub_14020A140() >= 0)
			{
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AC8 + 24i64))(qword_140C64AC8, v7);
				goto LABEL_21;
			}
		}
	}
	if (qword_140C63838)
	{
		v20 = qword_140C63838(off_140A6CCB8, qword_140C63858);
	}
	else
	{
		if (dword_140C64E5C)
		{
			v21 = 0;
			goto LABEL_56;
		}
		if ((int)sub_1402316A0() < 0)
		{
			v21 = 0;
			goto LABEL_56;
		}
		v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E60 + 40i64))(qword_140C64E60);
	}
	v21 = v20;
LABEL_56:
	for (j = 0; j < v21; ++j)
	{
		if (qword_140C63848)
		{
			v23 = qword_140C63848(off_140A6CCB8, j, qword_140C63858);
		}
		else
		{
			if (dword_140C64E5C || (int)sub_1402316A0() < 0)
				continue;
			v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E60 + 32i64))(qword_140C64E60, j);
		}
		v24 = v23;
		if (v23)
		{
			v25 = *(_DWORD*)(v23 + 4);
			if (qword_140C63840)
			{
				v26 = qword_140C63840(off_140A6ABB0, v25, qword_140C63858);
			LABEL_68:
				if (v26 && (*(unsigned int(__fastcall**)(_QWORD*, __int64))(*a1 + 8i64))(a1, v24))
				{
					v27 = a1[6];
					v28 = v27;
					v29 = *(_QWORD*)(v27 + 8);
					while (v29)
					{
						if (*(_DWORD*)(v29 + 32) < *(_DWORD*)(v24 + 4))
						{
							v29 = *(_QWORD*)(v29 + 24);
						}
						else
						{
							v28 = v29;
							v29 = *(_QWORD*)(v29 + 16);
						}
					}
					if (v28 == v27 || *(_DWORD*)(v24 + 4) < *(_DWORD*)(v28 + 32))
					{
						v39 = a1[6];
						v30 = &v39;
					}
					else
					{
						v38 = v28;
						v30 = &v38;
					}
					if (*v30 == v27)
					{
						v31 = sub_14018B280(8i64, 0);
						v32 = (__int64)v31;
						if (v31)
							*(_QWORD*)v31 = v24;
						else
							v32 = 0i64;
						v33 = *(_DWORD*)(v24 + 4);
						v36 = (_QWORD*)v32;
						LODWORD(v35) = v33;
						sub_140055F80((__int64)(a1 + 5), (__int64)v37, &v35);
					}
				}
				continue;
			}
			if (!dword_140C649FC && (int)sub_140209480() >= 0)
			{
				v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 24i64))(qword_140C640E8, v25);
				goto LABEL_68;
			}
		}
	}
	return 0i64;
}
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140A6AC58: using guessed type wchar_t *off_140A6AC58[2];
// 140A6CC80: using guessed type wchar_t *off_140A6CC80[2];
// 140A6CCB8: using guessed type wchar_t *off_140A6CCB8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64078: using guessed type __int64 qword_140C64078;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C64430: using guessed type int dword_140C64430;
// 140C649FC: using guessed type int dword_140C649FC;
// 140C64AC8: using guessed type __int64 qword_140C64AC8;
// 140C64E5C: using guessed type int dword_140C64E5C;
// 140C64E60: using guessed type __int64 qword_140C64E60;
// 140C650D4: using guessed type int dword_140C650D4;

