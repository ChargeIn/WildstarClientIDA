//----- (000000014079BD20) ----------------------------------------------------
_QWORD* __fastcall sub_14079BD20(__int64 a1, int* a2)
{
	__int64* v4; // rbx
	_QWORD* result; // rax

	v4 = (__int64*)sub_14018B280(24i64, 0);
	if (v4)
	{
		*v4 = 0i64;
		v4[1] = 0i64;
		v4[2] = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	result = (_QWORD*)sub_14079B630(v4, a2, (__int64**)(a1 + 40), a1);
	if ((int)result < 0)
	{
		if (v4)
			return sub_14079BD90(v4);
	}
	return result;
}

