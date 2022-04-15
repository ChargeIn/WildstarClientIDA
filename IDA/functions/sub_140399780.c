//----- (0000000140399780) ----------------------------------------------------
__int64 __fastcall sub_140399780(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4)
{
	__int64 v4; // rdi
	__int64 v7; // rax
	int v9; // ecx
	unsigned int v10; // ebx
	unsigned int v11; // ecx
	__int64 v12; // rax
	int v13; // edx
	__int64 v14; // rcx
	unsigned int v16[7]; // [rsp+40h] [rbp-E8h] BYREF
	int v17[51]; // [rsp+5Ch] [rbp-CCh] BYREF
	__int64 v18; // [rsp+130h] [rbp+8h] BYREF
	__int64 v19; // [rsp+138h] [rbp+10h] BYREF

	v18 = a1;
	v4 = qword_140C65898;
	v7 = *(_QWORD*)(qword_140C65898 + 25744);
	v19 = 0i64;
	if (*(_DWORD*)(v7 + 460) && !*(_DWORD*)(v7 + 14240))
		sub_1403A2550(qword_140C65898);
	sub_1407E4830((int*)v16, 0i64, 0xC8ui64);
	v9 = *(_DWORD*)(*(_QWORD*)(v4 + 120) + 8i64);
	v17[15] = 1;
	v17[0] = v9;
	if (!a2 || !a3)
		return 5i64;
	v10 = sub_1403988D0(v4, v16, a2, 0i64, v17, &v19, &v18);
	if (!v19 || v10 && v10 != 317)
		return v10;
	v11 = a3[2];
	*a3 = *(_DWORD*)(v19 + 96);
	v12 = sub_140245C00(v11);
	if (!v12)
	{
	LABEL_14:
		v13 = 44;
		goto LABEL_15;
	}
	if (*(_DWORD*)(v12 + 8) != 22)
	{
		if ((*(_BYTE*)(v12 + 32) & 4) != 0)
		{
			v13 = 87;
			if (!*(_DWORD*)(v12 + 28))
				goto LABEL_15;
		}
		goto LABEL_14;
	}
	v13 = 79;
LABEL_15:
	a3[1] = sub_1403A0D20(v4, v13);
	if (a4)
	{
		sub_1403F4900(v14, 0x84Fu, a4);
		return v10;
	}
	sub_1403F4900(v14, 0x850u, (__int64)a3);
	return v10;
}
// 1403998AA: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140399780: using guessed type unsigned int var_E8[7];

