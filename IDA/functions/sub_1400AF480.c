//----- (00000001400AF480) ----------------------------------------------------
__int64 __fastcall sub_1400AF480(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	__int64 v8; // rax
	__int64 i; // rdi
	_WORD* v10; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 8ui64);
	if ((int)result < 0)
		return result;
	v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *a3);
	*((_QWORD*)a3 + 1) = v7;
	if (!v7)
		return 2147500037i64;
	result = sub_140337160(a1, v7, 4i64 * *a3);
	if ((int)result < 0)
		return result;
	v8 = sub_1403374E0(a2, 2i64 * *a3);
	*((_QWORD*)a3 + 2) = v8;
	if (!v8)
		return 2147500037i64;
	for (i = 0i64; (unsigned int)i < *a3; i = (unsigned int)(i + 1))
	{
		v10 = (_WORD*)(*((_QWORD*)a3 + 2) + 2 * i);
		if (!v10)
			return 2147500037i64;
		result = sub_14006BF60(a1, v10, 0x10ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_14006C090(a1, a3 + 6, 2ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 7, 0x20ui64);
		if ((int)result >= 0)
			return sub_14006C090(a1, a3 + 8, 1ui64);
	}
	return result;
}

