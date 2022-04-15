//----- (00000001402E1870) ----------------------------------------------------
__int64 __fastcall sub_1402E1870(__int64 a1, __int64 a2, int** a3)
{
	__int64 v5; // r12
	__int64 v6; // rax
	_QWORD* v7; // rbx
	unsigned int v8; // ebp
	_DWORD* v9; // r14
	unsigned int i; // r15d
	__int64 v11; // rdi
	_DWORD* v12; // rax
	int v13; // ecx
	int* v14; // rsi
	__int64 v15; // rax
	int* v16; // rax
	_QWORD* j; // rbx
	__int64 v19; // rdi
	_DWORD* v20; // rdi
	int v21; // eax
	__int64 v22; // rax
	void(__fastcall * **v23)(_QWORD); // rax
	int v24; // [rsp+34h] [rbp-44h]
	int v25; // [rsp+80h] [rbp+8h] BYREF
	int v26; // [rsp+84h] [rbp+Ch]
	int** v27; // [rsp+90h] [rbp+18h]

	v27 = a3;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 40i64))(a2);
	v7 = *(_QWORD**)(a1 + 24);
	v8 = 0;
	v9 = (_DWORD*)v6;
	for (i = 0; v7; v7 = (_QWORD*)v7[14])
	{
		v11 = (*(__int64(__fastcall**)(_QWORD*))(*v7 + 24i64))(v7);
		if (v5 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11))
		{
			v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
			if (*v9 >= v12[1] && *v9 < v12[3])
			{
				v13 = v9[1];
				if (v13 >= v12[2] && v13 < v12[4])
					++i;
			}
		}
	}
	v14 = sub_14018B280(32i64, 1u);
	if (!v14)
		return 2147942414i64;
	*(_QWORD*)v14 = off_140B787C0;
	v14[6] = 1;
	*((_QWORD*)v14 + 2) = 0i64;
	*((_QWORD*)v14 + 1) = i;
	if (i)
	{
		v15 = 8i64 * i;
		if (!is_mul_ok(i, 8ui64))
			v15 = -1i64;
		v16 = sub_14018B280(v15, 1u);
	}
	else
	{
		v16 = 0i64;
	}
	*((_QWORD*)v14 + 2) = v16;
	if (*((_QWORD*)v14 + 1) && !v16)
	{
		(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v14 + 32i64))(v14, 1i64);
		return 2147942414i64;
	}
	for (j = *(_QWORD**)(a1 + 24); j; j = (_QWORD*)j[14])
	{
		v19 = (*(__int64(__fastcall**)(_QWORD*))(*j + 24i64))(j);
		if (v5 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19))
		{
			v20 = (_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 24i64))(v19) + 4);
			if (*v9 >= *v20 && *v9 < v20[2])
			{
				v21 = v9[1];
				if (v21 >= v20[1] && v21 < v20[3])
				{
					v22 = (*(__int64(__fastcall**)(_QWORD*))(*j + 32i64))(j);
					v24 = v9[1] - v20[1];
					v25 = *(_DWORD*)(v22 + 4) + *v9 - *v20;
					v26 = v24 + *(_DWORD*)(v22 + 8);
					v23 = (void(__fastcall***)(_QWORD))sub_1402E16D0(a1, &v25);
					if (v23)
					{
						*(_QWORD*)(*((_QWORD*)v14 + 2) + 8i64 * v8) = v23;
						(**v23)(v23);
						++v8;
					}
				}
			}
		}
	}
	*((_QWORD*)v14 + 1) = v8;
	*v27 = v14;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

