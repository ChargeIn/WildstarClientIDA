//----- (00000001407426D0) ----------------------------------------------------
__int64 __fastcall sub_1407426D0(__int64 a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rcx
	int v7; // eax
	bool v8; // zf
	__int64 result; // rax

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = (unsigned int)sub_1406054D0(qword_140C65898 + 27664, a1, (unsigned int)(v7 - 1)) == 0;
	result = 1i64;
	if (v8)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

