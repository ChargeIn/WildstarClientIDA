//----- (0000000140740E10) ----------------------------------------------------
__int64 __fastcall sub_140740E10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r8
	_DWORD* v4; // rcx
	__int64 result; // rax
	bool v6; // zf
	_DWORD* v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		v6 = *(_DWORD*)(v3 + 224) == 0;
		v4[2] = 1;
		*v4 = !v6;
		a1[2] += 16i64;
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		*v7 = 0;
		v7[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

