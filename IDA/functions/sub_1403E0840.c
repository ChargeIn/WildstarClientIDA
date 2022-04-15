//----- (00000001403E0840) ----------------------------------------------------
int** __fastcall sub_1403E0840(int** a1, unsigned int a2, unsigned int a3)
{
	int* v3; // r15
	int* v4; // rbp
	unsigned int v5; // esi
	unsigned int v6; // r14d
	unsigned int v9; // eax
	unsigned int v10; // r13d
	unsigned int v11; // edi
	__int64 v12; // rax
	_DWORD* v13; // rbx
	unsigned int v14; // eax
	int* v15; // rax
	int* v16; // rsi

	v3 = 0i64;
	v4 = 0i64;
	v5 = a3;
	v6 = a2;
	if (a2 > a3)
	{
		a1[1] = 0i64;
		*a1 = 0i64;
		return a1;
	}
	if (qword_140C63838)
	{
		v9 = qword_140C63838(off_140A6A088, qword_140C63858);
	}
	else
	{
		if (dword_140C6531C)
		{
			v10 = 0;
			goto LABEL_11;
		}
		if ((int)sub_1401FBBC0() < 0)
		{
			v10 = 0;
			goto LABEL_11;
		}
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F60 + 40i64))(qword_140C63F60);
	}
	v10 = v9;
LABEL_11:
	v11 = 0;
	if (v10)
	{
		while (!qword_140C63848)
		{
			if (dword_140C6531C)
			{
				v13 = 0i64;
			}
			else
			{
				if ((int)sub_1401FBBC0() >= 0)
				{
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F60 + 32i64))(qword_140C63F60, v11);
					goto LABEL_19;
				}
				v13 = 0i64;
			}
		LABEL_20:
			v14 = v13[1];
			if (v14 >= v6)
			{
				if (v14 > v5)
					goto LABEL_30;
				if (!v13[2] && sub_1401E8C20(v13[3]))
				{
					v15 = sub_14018DB00((__int64)v4, (unsigned __int64)v3 + 1, 8i64);
					*(_QWORD*)&v15[2 * (_QWORD)v3] = v13;
					v16 = v15;
					if (v4 != v15)
					{
						sub_1407DB590(v15, v4, 8i64 * (_QWORD)v3);
						if (v4)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
						v4 = v16;
					}
					v5 = a3;
					v6 = a2;
					v3 = (int*)((char*)v3 + 1);
				}
			}
			if (++v11 >= v10)
				goto LABEL_30;
		}
		v12 = qword_140C63848(off_140A6A088, v11, qword_140C63858);
	LABEL_19:
		v13 = (_DWORD*)v12;
		goto LABEL_20;
	}
LABEL_30:
	a1[1] = v3;
	*a1 = v4;
	return a1;
}
// 140A6A088: using guessed type wchar_t *off_140A6A088[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F60: using guessed type __int64 qword_140C63F60;
// 140C6531C: using guessed type int dword_140C6531C;

