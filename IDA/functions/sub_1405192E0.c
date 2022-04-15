//----- (00000001405192E0) ----------------------------------------------------
__int64 __fastcall sub_1405192E0(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v4; // rdx
	__int64 v5; // rcx
	unsigned int v6; // r8d
	__int64 v7; // r9
	__int64 v8; // rax
	int v9; // ebp
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64 v12; // rax

	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0i64;
	v6 = 0;
	if (v4)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a2)
		{
			v8 = ++v6;
			if (v6 >= v4)
				goto LABEL_7;
		}
		v5 = *(_QWORD*)(v7 + 8i64 * v6);
	}
LABEL_7:
	v9 = sub_1400F26A0(v5 + 384, 5);
	v10 = sub_1405E2300(qword_140C65898 + 26680, v9);
	v11 = v10;
	if (v10)
	{
		*(_QWORD*)(a1 + 64) = *(_QWORD*)(v10 + 184);
		*(_QWORD*)(a1 + 72) = *(_QWORD*)(v10 + 192);
	}
	v12 = sub_1405E2000(qword_140C65898 + 26680, v9);
	if (v12)
	{
		*(_DWORD*)(a1 + 48) = 1;
		*(_QWORD*)(a1 + 56) = *(_QWORD*)(v12 + 24);
	}
	if (!v11 && !v12)
		sub_140056830(a2, (unsigned __int64*)"must be valid friend");
	return sub_1405188D0((_QWORD*)a1, a2);
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

