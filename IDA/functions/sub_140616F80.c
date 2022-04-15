#include "../winhttp.h"

//----- (0000000140616F80) ----------------------------------------------------
__int64 __fastcall sub_140616F80(__int64 a1)
{
	_QWORD* v1; // r13
	unsigned int v2; // ebp
	unsigned int v3; // eax
	unsigned int v4; // esi
	unsigned int v5; // edi
	_DWORD* v6; // rax
	unsigned int v7; // ecx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rbx
	int* v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned int v14; // eax
	unsigned int v15; // r15d
	unsigned int v16; // esi
	__int64 v17; // rax
	unsigned int* v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64* v22; // rcx
	int* v23; // rax
	__int64 v24; // rdi
	__int64 v25; // r8
	int* v26; // rax
	__int64 v27; // rcx
	unsigned int v28; // eax
	unsigned int v29; // ebx
	__int64 v30; // rax
	__int64 v31; // rdx
	__int64 v32; // r9
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64* v35; // rcx
	__int64 v36; // rcx
	_QWORD v38[2]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v39; // [rsp+70h] [rbp+8h] BYREF
	__int64 v40; // [rsp+78h] [rbp+10h] BYREF
	int* v41; // [rsp+80h] [rbp+18h] BYREF
	int* v42; // [rsp+88h] [rbp+20h] BYREF

	v39 = a1;
	v1 = (_QWORD*)qword_140C65958;
	v2 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6C200, qword_140C63858);
	}
	else
	{
		if (dword_140C64284)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140224660() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B28 + 40i64))(qword_140C63B28);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	if (v4)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64284 && (int)sub_140224660() >= 0)
			{
				v6 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B28 + 32i64))(
					qword_140C63B28,
					v5);
			LABEL_15:
				if (v6)
				{
					v7 = v6[1];
					v8 = v1[1];
					HIDWORD(v39) = *v6;
					v9 = *(_QWORD*)(v8 + 8);
					LODWORD(v39) = v7;
					v10 = v8;
					while (v9)
					{
						v10 = v9;
						if (v7 >= *(_DWORD*)(v9 + 32))
							v9 = *(_QWORD*)(v9 + 24);
						else
							v9 = *(_QWORD*)(v9 + 16);
					}
					if (v10 == v8 || v7 < *(_DWORD*)(v10 + 32))
					{
						v11 = sub_14018B280(40i64, 0);
						if (v11 != (int*)-32i64)
							*((_QWORD*)v11 + 4) = v39;
						*(_QWORD*)(v10 + 16) = v11;
						v13 = v1[1];
						if (v10 == v13)
						{
							*(_QWORD*)(v13 + 8) = v11;
							*(_QWORD*)(v1[1] + 24i64) = v11;
						}
						else if (v10 == *(_QWORD*)(v13 + 16))
						{
							*(_QWORD*)(v13 + 16) = v11;
						}
					}
					else
					{
						v11 = sub_14018B280(40i64, 0);
						if (v11 != (int*)-32i64)
							*((_QWORD*)v11 + 4) = v39;
						*(_QWORD*)(v10 + 24) = v11;
						v12 = v1[1];
						if (v10 == *(_QWORD*)(v12 + 24))
							*(_QWORD*)(v12 + 24) = v11;
					}
					*((_QWORD*)v11 + 1) = v10;
					*((_QWORD*)v11 + 2) = 0i64;
					*((_QWORD*)v11 + 3) = 0i64;
					sub_1400081C0((__int64)v11, (_QWORD*)(v1[1] + 8i64));
					++v1[2];
				}
			}
			if (++v5 >= v4)
				goto LABEL_35;
		}
		v6 = (_DWORD*)qword_140C63848(off_140A6C200, v5, qword_140C63858);
		goto LABEL_15;
	}
LABEL_35:
	if (qword_140C63838)
	{
		v14 = qword_140C63838(off_140A6C158, qword_140C63858);
	}
	else
	{
		if (dword_140C63A10)
		{
			v15 = 0;
			goto LABEL_43;
		}
		if ((int)sub_1402239A0() < 0)
		{
			v15 = 0;
			goto LABEL_43;
		}
		v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C652D8 + 40i64))(qword_140C652D8);
	}
	v15 = v14;
LABEL_43:
	v16 = 0;
	if (v15)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63A10 && (int)sub_1402239A0() >= 0)
			{
				v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D8 + 32i64))(qword_140C652D8, v16);
			LABEL_49:
				v18 = (unsigned int*)v17;
				if (v17)
				{
					v19 = v1[5];
					v20 = v19;
					v21 = *(_QWORD*)(v19 + 8);
					while (v21)
					{
						if (*(_DWORD*)(v21 + 32) < *v18)
						{
							v21 = *(_QWORD*)(v21 + 24);
						}
						else
						{
							v20 = v21;
							v21 = *(_QWORD*)(v21 + 16);
						}
					}
					if (v20 == v19 || *v18 < *(_DWORD*)(v20 + 32))
					{
						v40 = v1[5];
						v22 = &v40;
					}
					else
					{
						v39 = v20;
						v22 = &v39;
					}
					if (*v22 == v19)
					{
						v23 = sub_14018B280(184i64, 0);
						if (v23)
							v24 = sub_1406161F0((__int64)v23, v18);
						else
							v24 = 0i64;
						v25 = v1[5];
						v26 = (int*)v25;
						v27 = *(_QWORD*)(v25 + 8);
						while (v27)
						{
							if (*(_DWORD*)(v27 + 32) < *v18)
							{
								v27 = *(_QWORD*)(v27 + 24);
							}
							else
							{
								v26 = (int*)v27;
								v27 = *(_QWORD*)(v27 + 16);
							}
						}
						if (v26 == (int*)v25 || *v18 < v26[8])
						{
							LODWORD(v38[0]) = *v18;
							v38[1] = 0i64;
							v41 = v26;
							sub_140055C60((__int64)(v1 + 4), &v42, (__int64*)&v41, v38);
							v26 = v42;
						}
						*((_QWORD*)v26 + 5) = v24;
					}
				}
			}
			if (++v16 >= v15)
				goto LABEL_73;
		}
		v17 = qword_140C63848(off_140A6C158, v16, qword_140C63858);
		goto LABEL_49;
	}
LABEL_73:
	if (qword_140C63838)
	{
		v28 = qword_140C63838(off_140A6C190, qword_140C63858);
	}
	else
	{
		if (dword_140C648D8)
		{
			v29 = 0;
			goto LABEL_81;
		}
		if ((int)sub_140223DE0() < 0)
		{
			v29 = 0;
			goto LABEL_81;
		}
		v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64548 + 40i64))(qword_140C64548);
	}
	v29 = v28;
LABEL_81:
	if (v29)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C648D8 && (int)sub_140223DE0() >= 0)
			{
				v30 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64548 + 32i64))(qword_140C64548, v2);
			LABEL_87:
				v31 = v30;
				if (v30)
				{
					v32 = v1[5];
					v33 = v32;
					v34 = *(_QWORD*)(v32 + 8);
					while (v34)
					{
						if (*(_DWORD*)(v34 + 32) < *(_DWORD*)(v31 + 4))
						{
							v34 = *(_QWORD*)(v34 + 24);
						}
						else
						{
							v33 = v34;
							v34 = *(_QWORD*)(v34 + 16);
						}
					}
					if (v33 == v32 || *(_DWORD*)(v31 + 4) < *(_DWORD*)(v33 + 32))
					{
						v40 = v1[5];
						v35 = &v40;
					}
					else
					{
						v39 = v33;
						v35 = &v39;
					}
					v36 = *v35;
					if (v36 != v32)
						sub_140617640(*(_QWORD*)(v36 + 40), v31);
				}
			}
			if (++v2 >= v29)
				return 0i64;
		}
		v30 = qword_140C63848(off_140A6C190, v2, qword_140C63858);
		goto LABEL_87;
	}
	return 0i64;
}
// 14061708F: conditional instruction was optimized away because rax.8==0
// 140A6C158: using guessed type wchar_t *off_140A6C158[2];
// 140A6C190: using guessed type wchar_t *off_140A6C190[2];
// 140A6C200: using guessed type wchar_t *off_140A6C200[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A10: using guessed type int dword_140C63A10;
// 140C63B28: using guessed type __int64 qword_140C63B28;
// 140C64284: using guessed type int dword_140C64284;
// 140C64548: using guessed type __int64 qword_140C64548;
// 140C648D8: using guessed type int dword_140C648D8;
// 140C652D8: using guessed type __int64 qword_140C652D8;
// 140C65958: using guessed type __int64 qword_140C65958;

