//----- (000000014043F3F0) ----------------------------------------------------
__int64 __fastcall sub_14043F3F0(_QWORD* a1, __int64* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rdx
	_QWORD* v5; // rax
	__int64* v6; // rax
	__int64 v7; // rax
	__int64 result; // rax

	v2 = *a2;
	v4 = (__int64)(a1[10] - a1[1]) >> 3;
	if ((unsigned __int64)(a1[2] - v4) < 2)
		sub_140173030((__int64)a1, v4);
	*(_QWORD*)(a1[10] + 8i64) = sub_14018B280(496i64, 0);
	v5 = (_QWORD*)a1[7];
	if (v5)
		*v5 = v2;
	v6 = (__int64*)(a1[10] + 8i64);
	a1[10] = v6;
	v7 = *v6;
	a1[8] = v7;
	a1[9] = v7 + 496;
	result = a1[8];
	a1[7] = result;
	return result;
}

