//----- (00000001404CE7D0) ----------------------------------------------------
__int64 __fastcall sub_1404CE7D0(__int64 a1)
{
	__int64** v1; // rsi
	__int64 v2; // rdi
	int** v4; // rbx
	int* v5; // rax
	unsigned int i; // r15d
	unsigned int v7; // eax
	int v8; // eax
	__int64 v9; // rax
	_DWORD* v10; // rbx
	int* v11; // rax
	int* v12; // rdi
	unsigned int v13; // ebx
	__int64 v14; // rax
	__int64* v15; // rsi
	__int64 v16; // rbx
	int v17; // ebp
	int* v18; // rax
	int* v19; // r14
	__int64* v20; // rsi
	__int64 v21; // rbx
	int* v22; // rax
	int* v23; // r14
	__int64* v24; // rsi
	__int64 v25; // rbx
	int* v26; // rax
	int* v27; // r14

	v1 = (__int64**)(a1 + 8);
	v2 = 3i64;
	v4 = (int**)(a1 + 8);
	do
	{
		v5 = sub_14018B280(16i64, 0);
		if (v5)
		{
			*((_QWORD*)v5 + 1) = 0i64;
			*(_QWORD*)v5 = 0i64;
		}
		else
		{
			v5 = 0i64;
		}
		*v4++ = v5;
		--v2;
	} while (v2);
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v7 = qword_140C63838(off_140A6E458, qword_140C63858);
			goto LABEL_12;
		}
		v8 = dword_140C63A50;
		if (dword_140C63A50)
			goto LABEL_49;
		if ((int)sub_14024E1A0() < 0)
			break;
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F98 + 40i64))(qword_140C64F98);
	LABEL_12:
		if (i >= v7)
			break;
		if (qword_140C63848)
		{
			v9 = qword_140C63848(off_140A6E458, i, qword_140C63858);
		}
		else
		{
			if (dword_140C63A50)
			{
				v10 = 0i64;
				goto LABEL_21;
			}
			if ((int)sub_14024E1A0() < 0)
			{
				v10 = 0i64;
				goto LABEL_21;
			}
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F98 + 32i64))(qword_140C64F98, i);
		}
		v10 = (_DWORD*)v9;
	LABEL_21:
		v11 = sub_14018B280(44i64, 0);
		v12 = v11;
		if (v11)
		{
			*v11 = v10[1];
			v11[2] = v10[2];
			v11[10] = v10[9];
			*(_QWORD*)(v11 + 3) = 0i64;
			*(_QWORD*)(v11 + 5) = 0i64;
			*(_QWORD*)(v11 + 7) = 0i64;
			v11[9] = 0;
			v11[3] = v10[3];
			v11[4] = v10[4];
			v11[5] = v10[5];
			v11[7] = v10[6];
			v11[8] = v10[7];
			v11[9] = v10[8];
			v13 = *v11;
			if (qword_140C63840)
			{
				v14 = qword_140C63840(off_140A6B320, v13, qword_140C63858);
			}
			else
			{
				if (dword_140C65370 || (int)sub_140212560() < 0)
				{
				LABEL_29:
					v12[1] = 0;
					goto LABEL_31;
				}
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BD0 + 24i64))(qword_140C63BD0, v13);
			}
			if (v14)
			{
				v12[1] = *(_DWORD*)(v14 + 48);
				goto LABEL_31;
			}
			goto LABEL_29;
		}
		v12 = 0i64;
	LABEL_31:
		v15 = *v1;
		v16 = v15[1];
		v17 = v12[3] + v12[4] + v12[5] + v12[6] + v12[7] + v12[8] + v12[9];
		v18 = sub_14018DB00(*v15, v16 + 1, 8i64);
		*(_QWORD*)&v18[2 * v16] = v12;
		v19 = v18;
		if ((int*)*v15 != v18)
		{
			sub_1407DB590(v18, (int*)*v15, 8 * v15[1]);
			if (*v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v15 - 16) + 8i64))(*v15 - 16);
			*v15 = (__int64)v19;
		}
		v15[1] = v16 + 1;
		if ((v12[2] & 0xFFFFFFFD) == 0)
		{
			v20 = *(__int64**)(a1 + 24);
			v21 = v20[1];
			v22 = sub_14018DB00(*v20, v21 + 1, 8i64);
			v23 = v22;
			*(_QWORD*)&v22[2 * v21] = v12;
			if ((int*)*v20 != v22)
			{
				sub_1407DB590(v22, (int*)*v20, 8 * v20[1]);
				if (*v20)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v20 - 16) + 8i64))(*v20 - 16);
				*v20 = (__int64)v23;
			}
			v20[1] = v21 + 1;
			*(_DWORD*)(a1 + 40) += v17;
		}
		if ((unsigned int)v12[2] <= 1)
		{
			v24 = *(__int64**)(a1 + 16);
			v25 = v24[1];
			v26 = sub_14018DB00(*v24, v25 + 1, 8i64);
			v27 = v26;
			*(_QWORD*)&v26[2 * v25] = v12;
			if ((int*)*v24 != v26)
			{
				sub_1407DB590(v26, (int*)*v24, 8 * v24[1]);
				if (*v24)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v24 - 16) + 8i64))(*v24 - 16);
				*v24 = (__int64)v27;
			}
			v24[1] = v25 + 1;
			*(_DWORD*)(a1 + 36) += v17;
		}
		v1 = (__int64**)(a1 + 8);
	}
	v8 = dword_140C63A50;
LABEL_49:
	if (qword_140C63850)
	{
		qword_140C63850(off_140A6E458, qword_140C63858);
		return 0i64;
	}
	else
	{
		if (!v8)
		{
			dword_140C63A50 = 1;
			if (qword_140C64F98)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F98 + 8i64))(qword_140C64F98);
				qword_140C64F98 = 0i64;
			}
		}
		return 0i64;
	}
}
// 140A6B320: using guessed type wchar_t *off_140A6B320[2];
// 140A6E458: using guessed type wchar_t *off_140A6E458[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63850: using guessed type __int64 (__fastcall *qword_140C63850)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A50: using guessed type int dword_140C63A50;
// 140C63BD0: using guessed type __int64 qword_140C63BD0;
// 140C64F98: using guessed type __int64 qword_140C64F98;
// 140C65370: using guessed type int dword_140C65370;

