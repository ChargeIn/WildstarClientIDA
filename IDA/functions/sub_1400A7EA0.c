//----- (00000001400A7EA0) ----------------------------------------------------
_WORD* __fastcall sub_1400A7EA0(_QWORD* a1, __int16 a2)
{
	__int64 v3; // rcx
	__int64* v5; // rax
	__int64 v6; // rcx
	_WORD* result; // rax
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF
	__int64 v9; // [rsp+40h] [rbp+18h] BYREF

	v3 = a1[2];
	if (v3 + 2 == a1[3])
	{
		v5 = &v8;
		v6 = (v3 - a1[1]) >> 1;
		v8 = 1i64;
		v9 = v6;
		if (v6)
			v5 = &v9;
		sub_1400A7F20(a1, v6 + *v5);
	}
	if (a1[2] != -2i64)
		*(_WORD*)(a1[2] + 2i64) = 0;
	result = (_WORD*)a1[2];
	*result = a2;
	a1[2] += 2i64;
	return result;
}

