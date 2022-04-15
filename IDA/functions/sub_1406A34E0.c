//----- (00000001406A34E0) ----------------------------------------------------
__int64 __fastcall sub_1406A34E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = sub_14048A2B0(v3, *(_DWORD*)(v3 + 8));
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

