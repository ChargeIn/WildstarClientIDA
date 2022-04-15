//----- (00000001406F6060) ----------------------------------------------------
__int64 __fastcall sub_1406F6060(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // r8

	v2 = sub_140056D60(a1, 1u);
	if ((unsigned int)sub_1404DB630(qword_140C65898, v2, v3, 2u))
	{
		sub_1406F5730((__int64)a1, 2u);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 0i64;
	}
}
// 1406F6082: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

