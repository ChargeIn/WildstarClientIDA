//----- (00000001406ED970) ----------------------------------------------------
__int64 __fastcall sub_1406ED970(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	unsigned __int64 v4; // r10
	_QWORD* v5; // rsi
	unsigned int v6; // edx
	__int64 v7; // r9
	__int64 v8; // r8
	int v9; // ebx
	int v10; // eax

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = (_QWORD*)v2;
	v6 = 0;
	if (v4)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v8 = ++v6;
			if (v6 >= v4)
				goto LABEL_7;
		}
		v3 = *(_QWORD*)(v7 + 8i64 * v6);
	}
LABEL_7:
	v9 = sub_1400F26A0(v3 + 384, 2);
	v10 = sub_1400F26A0(v3 + 384, 3);
	sub_1406E6ED0(v5, v9, v10);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

