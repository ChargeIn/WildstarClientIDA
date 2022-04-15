//----- (00000001405F7EA0) ----------------------------------------------------
__int64 __fastcall sub_1405F7EA0(_QWORD* a1, int a2, int a3)
{
	unsigned __int64 v4; // rcx
	__int64 v5; // r9
	_DWORD* i; // rax
	unsigned __int64 v8; // rsi
	int* v9; // rbx
	unsigned __int64 v10; // rbp
	__int64 v11; // r15
	int* v12; // rax
	int* v13; // rdx
	__int64 v14; // rcx

	v4 = a1[17];
	v5 = 0i64;
	if (!v4)
		return 2147500037i64;
	for (i = (_DWORD*)a1[16]; i[1] != a3 || *i != a2; i += 2)
	{
		if (++v5 >= v4)
			return 2147500037i64;
	}
	v8 = v4 - 1;
	sub_1407DB590((int*)(a1[16] + 8 * v5), (int*)(a1[16] + 8 * v5 + 8), 8 * (v4 - 1 - v5));
	v9 = (int*)a1[16];
	if (v8)
	{
		if (!v9)
		{
			v10 = v8;
			v11 = 8 * v8 + 16;
			goto LABEL_13;
		}
		if (v8 > *((_QWORD*)v9 - 1))
		{
			v10 = (unsigned __int64)(sub_14018A3E0(8 * v8 + 16) - 16) >> 3;
			v11 = 8 * v10 + 16;
			if ((**((unsigned int(__fastcall***)(__int64, __int64))v9 - 2))((__int64)(v9 - 4), v11))
			{
				*((_QWORD*)v9 - 1) = v10;
				goto LABEL_16;
			}
		LABEL_13:
			v12 = sub_14018B280(v11, 0);
			if (v12)
			{
				*((_QWORD*)v12 + 1) = v10;
				*(_QWORD*)v12 = off_140B55060;
			}
			v9 = v12 + 4;
		}
	}
LABEL_16:
	v13 = (int*)a1[16];
	if (v13 != v9)
	{
		sub_1407DB590(v9, v13, 8 * v8);
		v14 = a1[16];
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
		a1[16] = v9;
	}
	a1[17] = v8;
	(*(void(__fastcall**)(_QWORD*))(*a1 + 344i64))(a1);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

