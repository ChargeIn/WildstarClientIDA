//----- (00000001406AD310) ----------------------------------------------------
__int64 __fastcall sub_1406AD310(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v4; // rax
	int v5; // ecx
	__int64 v6; // rax

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		v4 = v2 + 8;
		if (v4)
			v5 = *(_DWORD*)(v4 + 100);
		else
			v5 = 0;
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v5;
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

