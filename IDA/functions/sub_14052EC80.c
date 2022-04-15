//----- (000000014052EC80) ----------------------------------------------------
__int64 __fastcall sub_14052EC80(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // rcx
	bool v4; // zf

	result = sub_14052E9B0(a1);
	if (result)
	{
		v3 = (_DWORD*)a1[2];
		v4 = *(_DWORD*)(result + 1332) == 0;
		v3[2] = 1;
		*v3 = !v4;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

