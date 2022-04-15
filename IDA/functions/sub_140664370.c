//----- (0000000140664370) ----------------------------------------------------
__int64 __fastcall sub_140664370(_QWORD* a1)
{
	__int64* v2; // rax
	_DWORD* v3; // rdx
	__int64 result; // rax
	int v5; // eax
	_DWORD* v6; // r10
	bool v7; // zf

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v5 = sub_14054F480(*v2);
		v6[2] = 1;
		v7 = v5 == 0;
		result = 1i64;
		*v6 = !v7;
		a1[2] += 16i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1406643BA: variable 'v6' is possibly undefined

