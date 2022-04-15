//----- (00000001406A0A50) ----------------------------------------------------
__int64 __fastcall sub_1406A0A50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int* v5; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = v3 + 8) != 0)
	{
		v5 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v4 + 8), 0i64);
		sub_140415C70(a1, (__int64)v5);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

