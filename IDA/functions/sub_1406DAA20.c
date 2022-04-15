//----- (00000001406DAA20) ----------------------------------------------------
__int64 __fastcall sub_1406DAA20(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // eax

	v2 = sub_1406DAEE0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = -1;
		else
			v4 = sub_140056D60(a1, 2u);
		sub_1406DA200(v2, v4);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

