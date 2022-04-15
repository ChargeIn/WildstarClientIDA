//----- (00000001404AB490) ----------------------------------------------------
__int64 __fastcall sub_1404AB490(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r14d
	unsigned int v4; // edi
	_DWORD* v5; // rax
	_DWORD* v6; // rbx
	int v7; // esi
	_QWORD* v8; // rax
	unsigned int v9; // eax
	unsigned int v10; // ebx
	unsigned int v11; // ecx
	_DWORD* v12; // rax
	_DWORD* v13; // rbx
	unsigned int v14; // r13d
	_QWORD* v15; // rax
	int v16; // r12d
	unsigned int* v17; // rdi
	__int64 v18; // rsi
	__int64 v19; // r14
	unsigned int v20; // edx
	__int64 v21; // r8
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rax
	__int64 v26; // rbx
	int v27; // ecx
	__int64 v28; // r8
	_DWORD* v29; // r9
	__int64 v30; // rcx
	int* v31; // rax
	__int64 v32; // r8
	bool v33; // al
	__int64 v34; // rdx
	__int64 v35; // rbx
	__int64 v36; // rcx
	__int64 i; // rax
	__int64 v38; // rax
	int* v39; // rcx
	__int64 v40; // rax
	__int64 v41; // rax
	__int64 v43; // [rsp+20h] [rbp-50h] BYREF
	int* v44; // [rsp+28h] [rbp-48h] BYREF
	int* v45; // [rsp+30h] [rbp-40h] BYREF
	__int64 v46[2]; // [rsp+38h] [rbp-38h] BYREF
	_QWORD v47[3]; // [rsp+48h] [rbp-28h] BYREF
	unsigned int v48; // [rsp+A8h] [rbp+38h]
	unsigned int v49; // [rsp+B0h] [rbp+40h]
	__int64 v50; // [rsp+B8h] [rbp+48h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6CA50, qword_140C63858);
	LABEL_8:
		v3 = v2;
		goto LABEL_9;
	}
	if (dword_140C6564C)
	{
		v3 = 0;
	}
	else
	{
		if ((int)sub_14022E7E0() >= 0)
		{
			v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64388 + 40i64))(qword_140C64388);
			goto LABEL_8;
		}
		v3 = 0;
	}
LABEL_9:
	v4 = 0;
	if (v3)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C6564C && (int)sub_14022E7E0() >= 0)
			{
				v5 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64388 + 32i64))(
					qword_140C64388,
					v4);
				goto LABEL_15;
			}
		LABEL_20:
			if (++v4 >= v3)
				goto LABEL_21;
		}
		v5 = (_DWORD*)qword_140C63848(off_140A6CA50, v4, qword_140C63858);
	LABEL_15:
		v6 = v5;
		if (v5)
		{
			v7 = *v5;
			if (*v5)
			{
				if (v5[3] && v5[5])
				{
					v8 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 8i64))(a1);
					LODWORD(v46[0]) = v7;
					*v8 = v6;
					v46[1] = (__int64)v8;
					sub_140055F80((__int64)(a1 + 5), (__int64)v47, v46);
				}
			}
		}
		goto LABEL_20;
	}
LABEL_21:
	if (qword_140C63838)
	{
		v9 = qword_140C63838(off_140A6CA88, qword_140C63858);
	}
	else if (dword_140C654FC)
	{
		v9 = 0;
	}
	else if ((int)sub_14022EC20() >= 0)
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64838 + 40i64))(qword_140C64838);
	}
	else
	{
		v9 = 0;
	}
	v10 = 0;
	v48 = v9;
	v49 = 0;
	if (!v9)
		return 0i64;
	v11 = v9;
	do
	{
		if (qword_140C63848)
		{
			v12 = (_DWORD*)qword_140C63848(off_140A6CA88, v10, qword_140C63858);
		}
		else
		{
			if (dword_140C654FC)
				goto LABEL_95;
			if ((int)sub_14022EC20() < 0)
				goto LABEL_94;
			v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64838 + 32i64))(
				qword_140C64838,
				v10);
		}
		v13 = v12;
		if (!v12)
			goto LABEL_94;
		v14 = *v12;
		if (!*v12)
			goto LABEL_94;
		v15 = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
		v16 = 0;
		v17 = v13 + 2;
		*v15 = v13;
		v18 = (__int64)v15;
		v19 = 6i64;
		do
		{
			v20 = *v17;
			if (*v17)
			{
				v21 = a1[6];
				v22 = v21;
				v23 = *(_QWORD*)(v21 + 8);
				while (v23)
				{
					if (*(_DWORD*)(v23 + 32) < v20)
					{
						v23 = *(_QWORD*)(v23 + 24);
					}
					else
					{
						v22 = v23;
						v23 = *(_QWORD*)(v23 + 16);
					}
				}
				if (v22 == v21 || v20 < *(_DWORD*)(v22 + 32))
				{
					v43 = a1[6];
					v24 = &v43;
				}
				else
				{
					v50 = v22;
					v24 = &v50;
				}
				v25 = *v24;
				if (v25 != v21)
				{
					v26 = *(_QWORD*)(v25 + 40);
					v27 = *(_DWORD*)(*(_QWORD*)v26 + 4i64);
					if (*(_QWORD*)(v18 + 24))
					{
						if (*(_DWORD*)(v18 + 40) != v27)
							goto LABEL_61;
					}
					else
					{
						*(_DWORD*)(v18 + 40) = v27;
					}
					v28 = *(_QWORD*)(v18 + 16);
					v29 = *(_DWORD**)v26;
					v30 = *(_QWORD*)(v28 + 8);
					v31 = (int*)v28;
					while (v30)
					{
						if (*(_DWORD*)(v30 + 32) < *v29)
						{
							v30 = *(_QWORD*)(v30 + 24);
						}
						else
						{
							v31 = (int*)v30;
							v30 = *(_QWORD*)(v30 + 16);
						}
					}
					if (v31 == (int*)v28 || *v29 < (unsigned int)v31[8])
					{
						LODWORD(v47[0]) = *v29;
						v47[1] = 0i64;
						v44 = v31;
						sub_140055C60(v18 + 8, &v45, (__int64*)&v44, v47);
						v31 = v45;
					}
					*((_QWORD*)v31 + 5) = v26;
					++v16;
				}
			}
		LABEL_61:
			++v17;
			--v19;
		} while (v19);
		if (!v16)
		{
			sub_140008410(v18 + 8);
			sub_14018B900(*(_QWORD*)(v18 + 16), 0);
			sub_14018B900(v18, 0);
			goto LABEL_94;
		}
		v32 = a1[2];
		LODWORD(v46[0]) = v14;
		v33 = 1;
		v34 = *(_QWORD*)(v32 + 8);
		v35 = v32;
		while (v34)
		{
			v35 = v34;
			v33 = v14 < *(_DWORD*)(v34 + 32);
			if (v14 >= *(_DWORD*)(v34 + 32))
				v34 = *(_QWORD*)(v34 + 24);
			else
				v34 = *(_QWORD*)(v34 + 16);
		}
		v36 = v35;
		if (v33)
		{
			if (v35 != *(_QWORD*)(v32 + 16))
			{
				if (*(_BYTE*)v35 || *(_QWORD*)(*(_QWORD*)(v35 + 8) + 8i64) != v35)
				{
					v36 = *(_QWORD*)(v35 + 16);
					if (v36)
					{
						for (i = *(_QWORD*)(v36 + 24); i; i = *(_QWORD*)(i + 24))
							v36 = i;
					}
					else
					{
						v36 = *(_QWORD*)(v35 + 8);
						if (v35 == *(_QWORD*)(v36 + 16))
						{
							do
							{
								v38 = v36;
								v36 = *(_QWORD*)(v36 + 8);
							} while (v38 == *(_QWORD*)(v36 + 16));
						}
					}
				}
				else
				{
					v36 = *(_QWORD*)(v35 + 24);
				}
				goto LABEL_80;
			}
		LABEL_81:
			if (v35 == v32 || v14 < *(_DWORD*)(v35 + 32))
			{
				v39 = sub_14018B280(48i64, 0);
				if (v39 != (int*)-32i64)
				{
					*((_QWORD*)v39 + 4) = v46[0];
					*((_QWORD*)v39 + 5) = v18;
				}
				*(_QWORD*)(v35 + 16) = v39;
				v41 = a1[2];
				if (v35 == v41)
				{
					*(_QWORD*)(v41 + 8) = v39;
					*(_QWORD*)(a1[2] + 24i64) = v39;
				}
				else if (v35 == *(_QWORD*)(v41 + 16))
				{
					*(_QWORD*)(v41 + 16) = v39;
				}
			}
			else
			{
				v39 = sub_14018B280(48i64, 0);
				if (v39 != (int*)-32i64)
				{
					*((_QWORD*)v39 + 4) = v46[0];
					*((_QWORD*)v39 + 5) = v18;
				}
				*(_QWORD*)(v35 + 24) = v39;
				v40 = a1[2];
				if (v35 == *(_QWORD*)(v40 + 24))
					*(_QWORD*)(v40 + 24) = v39;
			}
			*((_QWORD*)v39 + 1) = v35;
			*((_QWORD*)v39 + 2) = 0i64;
			*((_QWORD*)v39 + 3) = 0i64;
			sub_1400081C0((__int64)v39, (_QWORD*)(a1[2] + 8i64));
			++a1[3];
		}
		else
		{
		LABEL_80:
			if (*(_DWORD*)(v36 + 32) < v14)
				goto LABEL_81;
		}
	LABEL_94:
		v11 = v48;
	LABEL_95:
		v10 = ++v49;
	} while (v49 < v11);
	return 0i64;
}
// 1404AB82F: conditional instruction was optimized away because rdx.8==0
// 140A6CA50: using guessed type wchar_t *off_140A6CA50[2];
// 140A6CA88: using guessed type wchar_t *off_140A6CA88[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64388: using guessed type __int64 qword_140C64388;
// 140C64838: using guessed type __int64 qword_140C64838;
// 140C654FC: using guessed type int dword_140C654FC;
// 140C6564C: using guessed type int dword_140C6564C;

