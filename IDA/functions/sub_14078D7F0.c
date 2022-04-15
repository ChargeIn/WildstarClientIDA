//----- (000000014078D7F0) ----------------------------------------------------
__int64 __fastcall sub_14078D7F0(_QWORD* a1)
{
	int v2; // eax
	BOOL* v3; // r8
	BOOL v4; // edx
	__int64 result; // rax

	v2 = sub_14078D660(a1);
	v3 = (BOOL*)a1[2];
	v3[2] = 1;
	v4 = v2 != 0;
	result = 1i64;
	*v3 = v4;
	a1[2] += 16i64;
	return result;
}

