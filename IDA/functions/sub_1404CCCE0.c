//----- (00000001404CCCE0) ----------------------------------------------------
__int64 __fastcall sub_1404CCCE0(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r12d
	unsigned int i; // r14d
	__int64 v5; // rax
	int* v6; // rbx
	int* v7; // rdi
	int v8; // r8d
	int v9; // eax
	__int64 v10; // r9
	bool v11; // al
	__int64 v12; // rdx
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 j; // rax
	__int64 v16; // rax
	int* v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // r9
	int v21; // r8d
	__int64 v22; // rdx
	__int64 v23; // rbx
	bool v24; // al
	__int64 v25; // rcx
	__int64 k; // rax
	__int64 v27; // rax
	int* v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rax
	int v31; // eax
	int v32; // eax
	__int64 v34[2]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v35[2]; // [rsp+40h] [rbp-48h] BYREF
	int* v36; // [rsp+98h] [rbp+10h] BYREF
	int* v37; // [rsp+A0h] [rbp+18h] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6B048, qword_140C63858);
	}
	else
	{
		if (dword_140C63C40)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14020EDC0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64598 + 40i64))(qword_140C64598);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6B048, i, qword_140C63858);
		}
		else
		{
			if (dword_140C63C40)
			{
				v6 = 0i64;
				goto LABEL_18;
			}
			if ((int)sub_14020EDC0() < 0)
			{
				v6 = 0i64;
				goto LABEL_18;
			}
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64598 + 32i64))(qword_140C64598, i);
		}
		v6 = (int*)v5;
	LABEL_18:
		v7 = sub_14018B280(16i64, 0);
		if (v7)
		{
			*(_QWORD*)v7 = 0i64;
			*(_QWORD*)(v7 + 1) = 0i64;
			*v7 = 0;
			*((_QWORD*)v7 + 1) = 0i64;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = *v6;
		v34[1] = (__int64)v7;
		*v7 = v8;
		v9 = v6[2];
		LODWORD(v34[0]) = v8;
		v7[1] = v9;
		v7[2] = v6[3];
		v7[3] = v6[1];
		v10 = *(_QWORD*)(a1 + 16);
		v11 = 1;
		v12 = *(_QWORD*)(v10 + 8);
		v13 = v10;
		while (v12)
		{
			v13 = v12;
			v11 = v8 < *(_DWORD*)(v12 + 32);
			if (v8 >= *(_DWORD*)(v12 + 32))
				v12 = *(_QWORD*)(v12 + 24);
			else
				v12 = *(_QWORD*)(v12 + 16);
		}
		v14 = v13;
		if (v11)
		{
			if (v13 == *(_QWORD*)(v10 + 16))
			{
				sub_14004F3F0(a1 + 8, &v36, v12, v13, v34);
				goto LABEL_52;
			}
			if (*(_BYTE*)v13 || *(_QWORD*)(*(_QWORD*)(v13 + 8) + 8i64) != v13)
			{
				v14 = *(_QWORD*)(v13 + 16);
				if (v14)
				{
					for (j = *(_QWORD*)(v14 + 24); j; j = *(_QWORD*)(j + 24))
						v14 = j;
				}
				else
				{
					v14 = *(_QWORD*)(v13 + 8);
					if (v13 == *(_QWORD*)(v14 + 16))
					{
						do
						{
							v16 = v14;
							v14 = *(_QWORD*)(v14 + 8);
						} while (v16 == *(_QWORD*)(v14 + 16));
					}
				}
			}
			else
			{
				v14 = *(_QWORD*)(v13 + 24);
			}
		}
		if (*(_DWORD*)(v14 + 32) < v8)
		{
			if (v13 == v10 || v8 < *(_DWORD*)(v13 + 32))
			{
				v17 = sub_14018B280(48i64, 0);
				if (v17 != (int*)-32i64)
				{
					*((_QWORD*)v17 + 4) = v34[0];
					*((_QWORD*)v17 + 5) = v7;
				}
				*(_QWORD*)(v13 + 16) = v17;
				v19 = *(_QWORD*)(a1 + 16);
				if (v13 == v19)
				{
					*(_QWORD*)(v19 + 8) = v17;
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64) = v17;
				}
				else if (v13 == *(_QWORD*)(v19 + 16))
				{
					*(_QWORD*)(v19 + 16) = v17;
				}
			}
			else
			{
				v17 = sub_14018B280(48i64, 0);
				if (v17 != (int*)-32i64)
				{
					*((_QWORD*)v17 + 4) = v34[0];
					*((_QWORD*)v17 + 5) = v7;
				}
				*(_QWORD*)(v13 + 24) = v17;
				v18 = *(_QWORD*)(a1 + 16);
				if (v13 == *(_QWORD*)(v18 + 24))
					*(_QWORD*)(v18 + 24) = v17;
			}
			*((_QWORD*)v17 + 1) = v13;
			*((_QWORD*)v17 + 2) = 0i64;
			*((_QWORD*)v17 + 3) = 0i64;
			sub_1400081C0((__int64)v17, (_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64));
			++* (_QWORD*)(a1 + 24);
		}
	LABEL_52:
		v20 = *(_QWORD*)(a1 + 48);
		v21 = v7[1];
		v35[1] = (__int64)v7;
		v22 = *(_QWORD*)(v20 + 8);
		LODWORD(v35[0]) = v21;
		v23 = v20;
		v24 = 1;
		while (v22)
		{
			v23 = v22;
			v24 = v21 < *(_DWORD*)(v22 + 32);
			if (v21 >= *(_DWORD*)(v22 + 32))
				v22 = *(_QWORD*)(v22 + 24);
			else
				v22 = *(_QWORD*)(v22 + 16);
		}
		v25 = v23;
		if (!v24)
			goto LABEL_69;
		if (v23 != *(_QWORD*)(v20 + 16))
		{
			if (*(_BYTE*)v23 || *(_QWORD*)(*(_QWORD*)(v23 + 8) + 8i64) != v23)
			{
				v25 = *(_QWORD*)(v23 + 16);
				if (v25)
				{
					for (k = *(_QWORD*)(v25 + 24); k; k = *(_QWORD*)(k + 24))
						v25 = k;
				}
				else
				{
					v25 = *(_QWORD*)(v23 + 8);
					if (v23 == *(_QWORD*)(v25 + 16))
					{
						do
						{
							v27 = v25;
							v25 = *(_QWORD*)(v25 + 8);
						} while (v27 == *(_QWORD*)(v25 + 16));
					}
				}
			}
			else
			{
				v25 = *(_QWORD*)(v23 + 24);
			}
		LABEL_69:
			if (*(_DWORD*)(v25 + 32) < v21)
			{
				if (v23 == v20 || v21 < *(_DWORD*)(v23 + 32))
				{
					v28 = sub_14018B280(48i64, 0);
					if (v28 != (int*)-32i64)
					{
						*((_QWORD*)v28 + 4) = v35[0];
						*((_QWORD*)v28 + 5) = v7;
					}
					*(_QWORD*)(v23 + 16) = v28;
					v30 = *(_QWORD*)(a1 + 48);
					if (v23 == v30)
					{
						*(_QWORD*)(v30 + 8) = v28;
						*(_QWORD*)(*(_QWORD*)(a1 + 48) + 24i64) = v28;
					}
					else if (v23 == *(_QWORD*)(v30 + 16))
					{
						*(_QWORD*)(v30 + 16) = v28;
					}
				}
				else
				{
					v28 = sub_14018B280(48i64, 0);
					if (v28 != (int*)-32i64)
					{
						*((_QWORD*)v28 + 4) = v35[0];
						*((_QWORD*)v28 + 5) = v7;
					}
					*(_QWORD*)(v23 + 24) = v28;
					v29 = *(_QWORD*)(a1 + 48);
					if (v23 == *(_QWORD*)(v29 + 24))
						*(_QWORD*)(v29 + 24) = v28;
				}
				*((_QWORD*)v28 + 1) = v23;
				*((_QWORD*)v28 + 2) = 0i64;
				*((_QWORD*)v28 + 3) = 0i64;
				sub_1400081C0((__int64)v28, (_QWORD*)(*(_QWORD*)(a1 + 48) + 8i64));
				++* (_QWORD*)(a1 + 56);
			}
			goto LABEL_83;
		}
		sub_14004F3F0(a1 + 40, &v37, v22, v23, v35);
	LABEL_83:
		v31 = v7[1];
		if (v31 < *(_DWORD*)(a1 + 72))
			*(_DWORD*)(a1 + 72) = v31;
		v32 = v7[1];
		if (v32 > *(_DWORD*)(a1 + 76))
			*(_DWORD*)(a1 + 76) = v32;
	}
	if (qword_140C63850)
	{
		qword_140C63850(off_140A6B048, qword_140C63858);
		return 0i64;
	}
	else
	{
		if (!dword_140C63C40)
		{
			dword_140C63C40 = 1;
			if (qword_140C64598)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C64598 + 8i64))(qword_140C64598);
				qword_140C64598 = 0i64;
			}
		}
		return 0i64;
	}
}
// 1404CCEDF: conditional instruction was optimized away because rdx.8==0
// 1404CD05F: conditional instruction was optimized away because rdx.8==0
// 140A6B048: using guessed type wchar_t *off_140A6B048[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63850: using guessed type __int64 (__fastcall *qword_140C63850)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C40: using guessed type int dword_140C63C40;
// 140C64598: using guessed type __int64 qword_140C64598;

