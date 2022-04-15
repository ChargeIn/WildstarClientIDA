//----- (00000001400B7660) ----------------------------------------------------
__int64 __fastcall sub_1400B7660(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 v2; // rdx
	__int64 v3; // rbx
	int* v4; // rax
	_WORD* v5; // rcx
	int* v7; // [rsp+30h] [rbp+8h] BYREF

	v1 = (__int64)(a1 + 11);
	if (a1[12] != a1[13] || !qword_140C63648)
		return v1;
	v2 = a1[2];
	v3 = 0i64;
	v7 = 0i64;
	(**(void(__fastcall***)(__int64, __int64, _QWORD*, int**))qword_140C63648)(qword_140C63648, v2, a1, &v7);
	v4 = v7;
	if (v7)
	{
		if (*(_WORD*)v7)
		{
			do
				++v3;
			while (*((_WORD*)v7 + v3));
		}
		sub_14001C480(v1, v7, (int*)((char*)v7 + 2 * v3));
	}
	else
	{
		v5 = *(_WORD**)(v1 + 8);
		if (v5 == *(_WORD**)(v1 + 16))
			goto LABEL_10;
		*v5 = 0;
		*(_QWORD*)(v1 + 16) = *(_QWORD*)(v1 + 8);
	}
	v4 = v7;
LABEL_10:
	if (v4)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	return v1;
}
// 140C63648: using guessed type __int64 qword_140C63648;

