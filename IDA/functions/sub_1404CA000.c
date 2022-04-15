//----- (00000001404CA000) ----------------------------------------------------
__int64 __fastcall sub_1404CA000(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
	__int64 v5; // rdi
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	unsigned __int64 v10; // rsi
	_QWORD* v11; // rbx
	int v13; // [rsp+38h] [rbp+10h] BYREF

	v13 = a2;
	v5 = qword_140C659F8;
	v7 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v13);
	v8 = *(_QWORD**)(*(_QWORD*)(v5 + 48) + 8 * (v7 % *(_QWORD*)(v5 + 40)));
	if (!v8)
		goto LABEL_7;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 64))(&v13, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			goto LABEL_7;
	}
	v9 = v8 + 3;
	if (!v9)
	{
	LABEL_7:
		v10 = (*(__int64(__fastcall**)(int*))(v5 + 96))(&v13);
		v11 = *(_QWORD**)(*(_QWORD*)(v5 + 88) + 8 * (v10 % *(_QWORD*)(v5 + 80)));
		if (!v11)
			return 0i64;
		while (v10 != *v11 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 104))(&v13, v11 + 2))
		{
			v11 = (_QWORD*)v11[1];
			if (!v11)
				return 0i64;
		}
		v9 = v11 + 3;
		if (!v9)
			return 0i64;
	}
	return sub_1404C7DD0(*v9, a4, a5);
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

