//----- (0000000140742600) ----------------------------------------------------
__int64 __fastcall sub_140742600(_QWORD* a1)
{
	int v1; // ebx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // rcx
	_QWORD* v9; // rax
	__int64 v10; // rdx

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = (unsigned int)sub_1400F26A0(v7 + 384, 1) - 1;
	v9 = *(_QWORD**)(qword_140C65898 + 27728);
	if (v9 && v8 < v9[12])
	{
		if (v8)
		{
			if (v8 <= v9[13])
				--v8;
		}
		else
		{
			v8 = v9[13];
		}
		v10 = *(_QWORD*)(v9[11] + 8 * v8);
		if (v10)
			v1 = sub_1403D9500(qword_140C65898, (int*)(v10 + 16));
	}
	return sub_140649870(a1, v1);
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

