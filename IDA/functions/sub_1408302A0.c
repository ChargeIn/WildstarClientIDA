//----- (00000001408302A0) ----------------------------------------------------
__int64 __fastcall sub_1408302A0(int* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	_QWORD* v7; // r9
	__int64 v8; // rax

	result = sub_1408819F0(*a1, 24i64);
	v7 = (_QWORD*)result;
	if (result)
	{
		v8 = *(_QWORD*)&a1[2 * a3 + 2];
		v7[1] = a2;
		*v7 = v8;
		*(_QWORD*)&a1[2 * a3 + 2] = v7;
		++a1[388];
		return (__int64)(v7 + 2);
	}
	return result;
}

