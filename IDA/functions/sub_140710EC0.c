//----- (0000000140710EC0) ----------------------------------------------------
__int64 __fastcall sub_140710EC0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	unsigned int v7; // eax
	__int64 v8; // rcx

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v2 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v2 + 384, 1);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_14048D680(v8, v7);
	return 1i64;
}
// 140710F28: variable 'v8' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

