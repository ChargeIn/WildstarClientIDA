//----- (000000014067C300) ----------------------------------------------------
__int64 __fastcall sub_14067C300(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		v4 = sub_140491BD0(qword_140C65968, *(_DWORD*)(**(_QWORD**)(v3 + 8) + 32i64));
		sub_140432BA0(a1, v4);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65968: using guessed type __int64 qword_140C65968;

