//----- (00000001406BA020) ----------------------------------------------------
__int64 __fastcall sub_1406BA020(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // ecx
	int v6; // edx
	__int64 result; // rax
	__int64 v8; // rcx
	int v9; // r8d

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = *(_DWORD*)(v4 + 24);
		v6 = -1;
		result = 1i64;
		if (v5 != -1)
			v6 = v5;
		v8 = a1[2];
		v9 = 0;
		*(_DWORD*)(v8 + 8) = 3;
		if (v6)
			v9 = v6;
		*(double*)v8 = (double)v9;
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

