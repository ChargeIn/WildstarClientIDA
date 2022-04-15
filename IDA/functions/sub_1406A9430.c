//----- (00000001406A9430) ----------------------------------------------------
__int64 __fastcall sub_1406A9430(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // r8
	__int64 v6; // rax
	bool v7; // zf

	v2 = sub_1406A93C0(a1);
	v3 = 0;
	v4 = v2;
	if (v2)
	{
		v6 = a1[2];
		v7 = *(_QWORD*)(v4 + 32) == *(_QWORD*)(qword_140C635F0 + 5792);
		*(_DWORD*)(v6 + 8) = 3;
		LOBYTE(v3) = !v7;
		*(double*)v6 = (double)(v3 + 1);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

