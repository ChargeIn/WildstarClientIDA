//----- (0000000140436ED0) ----------------------------------------------------
__int64 __fastcall sub_140436ED0(__int64 a1, int a2)
{
	__int64 v2; // rdi
	unsigned __int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64 result; // rax
	unsigned __int64 v6; // rsi
	int** v7; // rbx
	int* v8; // rax
	int* v9; // rcx
	int v10; // [rsp+38h] [rbp+10h] BYREF

	v10 = a2;
	v2 = a1 + 16;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 40))(&v10);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v3 % *(_QWORD*)(v2 + 8)));
	if (!v4)
		goto LABEL_7;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 32))(&v10, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			goto LABEL_7;
	}
	result = (__int64)(v4 + 3);
	if (v4 == (_QWORD*)-24i64)
	{
	LABEL_7:
		if (*(_QWORD*)v2 == *(_QWORD*)(v2 + 8))
			sub_1400290D0(v2);
		v6 = (*(__int64(__fastcall**)(int*))(v2 + 24))(&v10);
		v7 = (int**)(*(_QWORD*)(v2 + 16) + 8 * (v6 % *(_QWORD*)(v2 + 8)));
		v8 = sub_14018B280(40i64, 0);
		if (v8)
		{
			v9 = *v7;
			*(_QWORD*)v8 = v6;
			*((_QWORD*)v8 + 1) = v9;
			v8[4] = v10;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 3) = 0i64;
		}
		*v7 = v8;
		++* (_QWORD*)v2;
		return (__int64)(*v7 + 6);
	}
	return result;
}

