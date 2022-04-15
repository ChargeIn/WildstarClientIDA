//----- (000000014073F150) ----------------------------------------------------
__int64 __fastcall sub_14073F150(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)v2 && *(_DWORD*)(*(_QWORD*)v2 + 100i64))
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 1;
		v3[2] = 1;
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

