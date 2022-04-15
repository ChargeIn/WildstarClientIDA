//----- (00000001407056B0) ----------------------------------------------------
__int64 __fastcall sub_1407056B0(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	int v4; // eax
	BOOL* v5; // rcx
	BOOL v6; // edx
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_1403A9CD0(v3, v2);
	v5 = (BOOL*)a1[2];
	v5[2] = 1;
	v6 = v4 >= 0;
	result = 1i64;
	*v5 = v6;
	a1[2] += 16i64;
	return result;
}
// 1407056C5: variable 'v3' is possibly undefined

