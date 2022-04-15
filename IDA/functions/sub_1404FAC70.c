//----- (00000001404FAC70) ----------------------------------------------------
__int64 __fastcall sub_1404FAC70(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v4 = sub_1404FEF30(v2);
		v5 = (_DWORD*)a1[2];
		v6 = v4 == 0;
		v5[2] = 1;
		result = 1i64;
		*v5 = !v6;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

