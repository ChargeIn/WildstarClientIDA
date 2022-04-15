//----- (00000001408952B0) ----------------------------------------------------
__int64 __fastcall sub_1408952B0(_QWORD* a1, _DWORD* a2)
{
	__int64 v4; // rdi
	unsigned int v5; // ebx
	__int64 v6; // rcx
	__int64 v7; // rbp
	__int64 v8; // rsi
	__int64 v9; // rax
	int v10; // eax
	char v12[264]; // [rsp+20h] [rbp-138h] BYREF
	__int64 v13[5]; // [rsp+128h] [rbp-30h] BYREF

	sub_140890370((__int64)v12, (__int64)a1, 1);
	v4 = v13[0];
	if (v13[0])
	{
		v6 = a1[2];
		v7 = *(_QWORD*)(a1[13] + 8i64);
		v8 = a1[14];
		if (v6)
			v8 += sub_14088C230(v6);
		if (*(_QWORD*)(v4 + 24))
		{
			v9 = sub_1408904A0((__int64)v12, 0);
			v10 = sub_14088FAE0(v13, v7 - v8 - v9);
		}
		else
		{
			v10 = 0;
		}
		v5 = sub_14088CE10(v4, v10, a2);
	}
	else
	{
		v5 = 2;
	}
	nullsub_1(v12);
	return v5;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1408952B0: using guessed type __int64 var_30[5];

