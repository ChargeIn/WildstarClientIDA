//----- (00000001406F60C0) ----------------------------------------------------
__int64 __fastcall sub_1406F60C0(_QWORD* a1)
{
	unsigned int v2; // eax
	BOOL* v3; // rdx
	BOOL v4; // r8d
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = (BOOL*)a1[2];
	v3[2] = 1;
	v4 = v2 > 2;
	result = 1i64;
	*v3 = v4;
	a1[2] += 16i64;
	return result;
}

