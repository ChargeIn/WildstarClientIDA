//----- (0000000140701210) ----------------------------------------------------
__int64 __fastcall sub_140701210(_QWORD* a1)
{
	int v2; // edx
	__int64 v3; // rax

	v2 = *(_DWORD*)(qword_140C65898 + 28384);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, v2);
		if (v3)
			return sub_140649930(a1, v3);
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

