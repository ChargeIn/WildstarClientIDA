//----- (0000000140051CC0) ----------------------------------------------------
__int64 __fastcall sub_140051CC0(__int64 a1, int a2, int a3)
{
	__int64 v4; // rdi
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	int v9; // esi
	unsigned int v10; // ebx
	unsigned int v11; // eax
	unsigned __int64 v12; // rsi
	_QWORD* v13; // rbx
	_DWORD* v15; // rbx
	int* v16; // rbx
	unsigned __int64 v17; // rsi
	int** v18; // rbx
	int* v19; // rax
	int* v20; // rcx
	int v21; // [rsp+48h] [rbp+10h] BYREF

	v4 = a1 + 680;
	v21 = a2;
	v7 = (*(__int64(__fastcall**)(int*))(a1 + 704))(&v21);
	v8 = *(_QWORD**)(*(_QWORD*)(v4 + 16) + 8 * (v7 % *(_QWORD*)(v4 + 8)));
	if (!v8)
		goto LABEL_5;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v4 + 32))(&v21, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			goto LABEL_5;
	}
	v15 = (_DWORD*)v8 + 5;
	if (v15)
	{
		v9 = 1;
		if (*v15 == a3)
			return 0i64;
	}
	else
	{
	LABEL_5:
		v9 = 0;
	}
	v10 = sub_1400518A0(a1, a3, 3, 0);
	v11 = sub_1400518A0(a1, a3, 3, 1);
	if (!v10 || !v11)
		return 2147500037i64;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65848 + 48i64))(qword_140C65848, v10, v11);
	v21 = a2;
	if (v9)
	{
		v12 = (*(__int64(__fastcall**)(int*))(v4 + 24))(&v21);
		v13 = *(_QWORD**)(*(_QWORD*)(v4 + 16) + 8 * (v12 % *(_QWORD*)(v4 + 8)));
		if (v13)
		{
			while (v12 != *v13 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v4 + 32))(&v21, v13 + 2))
			{
				v13 = (_QWORD*)v13[1];
				if (!v13)
					return 0i64;
			}
			v16 = (int*)v13 + 5;
			if (v16)
			{
				*v16 = a3;
				return 0i64;
			}
		}
	}
	else
	{
		if (*(_QWORD*)v4 == *(_QWORD*)(v4 + 8))
			sub_1400290D0(v4);
		v17 = (*(__int64(__fastcall**)(int*))(v4 + 24))(&v21);
		v18 = (int**)(*(_QWORD*)(v4 + 16) + 8 * (v17 % *(_QWORD*)(v4 + 8)));
		v19 = sub_14018B280(24i64, 0);
		if (v19)
		{
			v20 = *v18;
			*(_QWORD*)v19 = v17;
			*((_QWORD*)v19 + 1) = v20;
			LODWORD(v20) = v21;
			v19[5] = a3;
			v19[4] = (int)v20;
			*v18 = v19;
			++* (_QWORD*)v4;
			return 0i64;
		}
		*v18 = 0i64;
		++* (_QWORD*)v4;
	}
	return 0i64;
}
// 140C65848: using guessed type __int64 qword_140C65848;

