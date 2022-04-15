//----- (0000000140108F00) ----------------------------------------------------
void** __fastcall sub_140108F00(__int64 a1, int* a2, __int64 a3, __int64* a4)
{
	void** result; // rax
	int* v6; // rbp
	__int64 v7; // rsi
	__int64 v8; // rbx
	unsigned __int64 v9; // r14
	_QWORD* v10; // rdi
	int* v11; // rdi
	_WORD* v12; // r8
	int** v13; // rax
	int* v14; // rax
	char v15; // cl
	__int64 v16; // rax
	unsigned __int64 v17; // rbp
	int** v18; // r15
	int* v19; // rax
	int* v20; // r14
	int* v21; // rcx
	__int64* v22; // rdi
	int* v23; // [rsp+20h] [rbp-38h] BYREF
	__int64 v24; // [rsp+28h] [rbp-30h]
	void* retaddr; // [rsp+58h] [rbp+0h] BYREF
	__int64 v26; // [rsp+68h] [rbp+10h] BYREF

	result = &retaddr;
	v6 = a2;
	if (a2 && *(_WORD*)a2)
	{
		v7 = a1 + 8;
		v8 = 0i64;
		v23 = a2;
		LOBYTE(v24) = 1;
		v9 = (*(__int64(__fastcall**)(int**))(a1 + 32))(&v23);
		v10 = *(_QWORD**)(*(_QWORD*)(v7 + 16) + 8 * (v9 % *(_QWORD*)(v7 + 8)));
		if (!v10)
			goto LABEL_7;
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v7 + 32))(&v23, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				goto LABEL_7;
		}
		v22 = v10 + 4;
		if (v22)
		{
			if (*v22)
			{
				(**(void(__fastcall***)(__int64)) * v22)(*v22);
				v8 = *v22;
			}
		}
		else
		{
		LABEL_7:
			v11 = 0i64;
			if (!sub_1400FE590(v6))
			{
				v12 = *(_WORD**)(qword_140C63650 + 784);
				if (v12)
				{
					if (*v12)
					{
						v13 = (int**)sub_14018D540(&v26, (__int64)L"%s\\%s", v12, v6);
						v11 = *v13;
						*v13 = 0i64;
						if (v26)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
						if (sub_1400FE590(v11))
							v6 = v11;
					}
				}
			}
			v14 = sub_14018B280(72i64, 0);
			if (v14)
				v8 = sub_1400FE080((__int64)v14, v6);
			v15 = *(_BYTE*)(v8 + 66);
			v23 = *(int**)(v8 + 40);
			v16 = *(_QWORD*)(v7 + 8);
			LOBYTE(v24) = v15;
			if (*(_QWORD*)v7 == v16)
				sub_1400290D0(v7);
			v17 = (*(__int64(__fastcall**)(int**))(v7 + 24))(&v23);
			v18 = (int**)(*(_QWORD*)(v7 + 16) + 8 * (v17 % *(_QWORD*)(v7 + 8)));
			v19 = sub_14018B280(40i64, 0);
			v20 = v19;
			if (v19)
			{
				v21 = *v18;
				*(_QWORD*)v19 = v17;
				*((_QWORD*)v19 + 1) = v21;
				*((_QWORD*)v19 + 2) = v23;
				*((_QWORD*)v19 + 3) = v24;
				*((_QWORD*)v19 + 4) = v8;
				(**(void(__fastcall***)(__int64))v8)(v8);
			}
			else
			{
				v20 = 0i64;
			}
			*v18 = v20;
			++* (_QWORD*)v7;
			if (v11)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
		}
		(**(void(__fastcall***)(__int64))v8)(v8);
		*a4 = v8;
		return (void**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	}
	else
	{
		*a4 = 0i64;
	}
	return result;
}
// 140A1AB40: using guessed type wchar_t aSS_3[6];
// 140C63650: using guessed type __int64 qword_140C63650;

