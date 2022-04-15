//----- (00000001400D7E50) ----------------------------------------------------
__int64 __fastcall sub_1400D7E50(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rdi
	int v9; // ebx
	int v10; // eax

	v2 = 0i64;
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
				goto LABEL_7;
		}
		v2 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = v2 + 384;
	v8 = sub_1400D66A0(a1, 1u);
	if (v8)
	{
		v9 = sub_1400F26A0(v7, 2);
		v10 = sub_1400F26A0(v7, 3);
		*(_DWORD*)(v8 + 256) = v9;
		*(_DWORD*)(v8 + 260) = v10;
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

