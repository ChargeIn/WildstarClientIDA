//----- (000000014091B870) ----------------------------------------------------
__int64 __fastcall sub_14091B870(_QWORD* a1, int a2)
{
	__int64 v3; // rdi
	int v4; // eax
	_QWORD* v6; // r8
	__int64 result; // rax
	char v8; // al
	char* v9; // r8

	v3 = 6i64;
	v4 = 6;
	if (a2 < 27)
		v4 = 3;
	v6 = sub_14092D610((__int64)a1, v4 + 1);
	if (!v6)
		return *(unsigned int*)a1;
	v8 = 6;
	if (a2 < 27)
		v8 = 3;
	v9 = (char*)v6 + 1;
	*(v9 - 1) = v8;
	if (a2 < 27)
		v3 = 3i64;
	a1[11] += v3;
	if (a2 >= 27)
	{
		*(_WORD*)v9 = -29876;
		v9[2] = -63;
		v9 += 3;
	}
	*(_WORD*)v9 = -29880;
	result = 0i64;
	v9[2] = -56;
	return result;
}

