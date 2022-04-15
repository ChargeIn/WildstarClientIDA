//----- (00000001404E5580) ----------------------------------------------------
__int64 __fastcall sub_1404E5580(__int64 a1)
{
	__int64 result; // rax
	int v3; // edi
	unsigned __int64 v4; // rdx
	unsigned int v5; // ecx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // eax
	__int64 v10; // rdx

	if (!qword_140C65898)
		return 0i64;
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0;
	if (v4)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
		{
			v7 = ++v5;
			if (v5 >= v4)
				goto LABEL_7;
		}
		v8 = *(_QWORD*)(v6 + 8i64 * v5);
	}
	else
	{
	LABEL_7:
		v8 = 0i64;
	}
	v9 = sub_1400F26A0(v8 + 384, 1);
	if (v9 <= 1)
		v3 = *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 4i64 * (int)v9 + 200);
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v10 + 8) = 3;
	result = 1i64;
	*(double*)v10 = (double)v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

