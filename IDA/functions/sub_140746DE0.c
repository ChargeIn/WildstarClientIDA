//----- (0000000140746DE0) ----------------------------------------------------
__int64 __fastcall sub_140746DE0(_QWORD* a1)
{
	int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v9; // [rsp+38h] [rbp+10h]

	v2 = sub_140056D60(a1, 1u);
	v3 = *(_QWORD*)(qword_140C65898 + 29520);
	v4 = *(_QWORD*)(v3 + 32);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v9 = v5, v2 < *(_DWORD*)(v5 + 32)))
		v9 = *(_QWORD*)(v3 + 32);
	if (v9 == *(_QWORD*)(v3 + 32) || (v7 = *(_QWORD*)(v9 + 40)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		sub_1407469D0((__int64)a1, v7);
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

