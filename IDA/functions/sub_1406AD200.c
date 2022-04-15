//----- (00000001406AD200) ----------------------------------------------------
__int64 __fastcall sub_1406AD200(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	__int64 v5; // rax
	__int64 v6; // rax

	v2 = sub_1406A93C0(a1);
	v3 = 0;
	if (v2)
	{
		v5 = v2 + 8;
		if (v5)
			v3 = *(_DWORD*)(v5 + 96);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

