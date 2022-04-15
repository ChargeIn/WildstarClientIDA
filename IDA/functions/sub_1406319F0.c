//----- (00000001406319F0) ----------------------------------------------------
int** __fastcall sub_1406319F0(__int64 a1, int** a2, __int64* a3, __int64 a4)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rcx
	int* v12; // rax
	int* v13; // rbx
	__int64 v14; // rax
	int* v15; // rax
	int* v16; // r15
	void(__fastcall * **v17)(_QWORD); // rcx
	__int64 v18; // rax
	_QWORD* v19; // rbx
	_QWORD* i; // rax
	_QWORD* v21; // rax
	__int64 v22; // rcx
	char v24[40]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (*a3 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && sub_140631710(a1, a4, v5 + 32))
		{
		LABEL_4:
			sub_140632870(a1, a2, v5, v5, a4);
			return a2;
		}
		goto LABEL_33;
	}
	if (v5 != v4)
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v19 = *(_QWORD**)(v5 + 16);
			if (v19)
			{
				for (i = (_QWORD*)v19[3]; i; i = (_QWORD*)i[3])
					v19 = i;
			}
			else
			{
				v19 = *(_QWORD**)(v5 + 8);
				if (v5 == v19[2])
				{
					do
					{
						v21 = v19;
						v19 = (_QWORD*)v19[1];
					} while (v21 == (_QWORD*)v19[2]);
				}
			}
		}
		else
		{
			v19 = *(_QWORD**)(v5 + 24);
		}
		if (sub_140631710(a1, (__int64)(v19 + 4), a4) && sub_140631710(v22, a4, v5 + 32))
		{
			if (!v19[3])
			{
				sub_140632870(a1, a2, 0i64, (__int64)v19, a4);
				return a2;
			}
			goto LABEL_4;
		}
	LABEL_33:
		*a2 = *(int**)sub_140632970(a1, (__int64)v24, a4);
		return a2;
	}
	v9 = *(_QWORD*)(v4 + 24);
	if (!sub_140631710(a1, v9 + 32, a4))
		goto LABEL_33;
	if (v9 == v4 || sub_140631710(v10, a4, v9 + 32))
	{
		v15 = sub_14018B280(56i64, 0);
		v13 = v15;
		v16 = v15 + 8;
		if (v15 != (int*)-32i64)
		{
			sub_14001AF60((__int64)(v15 + 8), a4);
			v17 = *(void(__fastcall****)(_QWORD))(a4 + 16);
			*((_QWORD*)v16 + 2) = v17;
			if (v17)
				(**v17)(v17);
		}
		*(_QWORD*)(v9 + 16) = v13;
		v18 = *(_QWORD*)(a1 + 8);
		if (v9 == v18)
		{
			*(_QWORD*)(v18 + 8) = v13;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
		}
		else if (v9 == *(_QWORD*)(v18 + 16))
		{
			*(_QWORD*)(v18 + 16) = v13;
		}
	}
	else
	{
		v12 = sub_140633160(v11, a4);
		*(_QWORD*)(v9 + 24) = v12;
		v13 = v12;
		v14 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD*)(v14 + 24))
			*(_QWORD*)(v14 + 24) = v13;
	}
	*((_QWORD*)v13 + 1) = v9;
	*((_QWORD*)v13 + 2) = 0i64;
	*((_QWORD*)v13 + 3) = 0i64;
	sub_1400081C0((__int64)v13, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v13;
	return a2;
}
// 140631A7F: variable 'v10' is possibly undefined
// 140631A8B: variable 'v11' is possibly undefined
// 140631BA4: variable 'v22' is possibly undefined
// 1406319F0: using guessed type char var_28[40];

