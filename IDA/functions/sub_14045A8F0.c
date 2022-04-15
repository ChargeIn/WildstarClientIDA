//----- (000000014045A8F0) ----------------------------------------------------
__int64 __fastcall sub_14045A8F0(_DWORD* a1, int a2, int a3)
{
	__int64 v3; // rdx
	__int64 v4; // rax

	if (a3)
		a1[59] = a2;
	if (a1[13] != a2)
	{
		a1[13] = a2;
		v3 = qword_140C65898;
		a1[1578] = 1;
		v4 = *(_QWORD*)(v3 + 120);
		if (v4 && a1[2] == *(_DWORD*)(v4 + 8))
			*(_DWORD*)(v3 + 28568) = 1;
		sub_14045AEC0((__int64)a1);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

