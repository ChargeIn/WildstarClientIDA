//----- (0000000140399630) ----------------------------------------------------
__int64 __fastcall sub_140399630(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rdi
	__int64 v5; // rax
	int v7; // ecx
	unsigned int v8; // ebx
	unsigned int v9; // ecx
	__int64 v10; // rax
	int v11; // edx
	__int64 v12; // rcx
	unsigned int v14[7]; // [rsp+40h] [rbp-D8h] BYREF
	int v15[45]; // [rsp+5Ch] [rbp-BCh] BYREF
	__int64 v16; // [rsp+120h] [rbp+8h] BYREF
	__int64 v17; // [rsp+128h] [rbp+10h] BYREF

	v16 = a1;
	v3 = qword_140C65898;
	v17 = 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 25744);
	if (*(_DWORD*)(v5 + 460) && !*(_DWORD*)(v5 + 14240))
		sub_1403A2550(qword_140C65898);
	sub_1407E4830((int*)v14, 0i64, 0xC8ui64);
	v7 = *(_DWORD*)(*(_QWORD*)(v3 + 120) + 8i64);
	v15[15] = 1;
	v15[0] = v7;
	if (a2 && a3)
	{
		v8 = sub_1403988D0(v3, v14, a2, 0i64, v15, &v17, &v16);
		if (!v17 || v8 && v8 != 317)
			return v8;
		v9 = a3[2];
		*a3 = *(_DWORD*)(v17 + 96);
		v10 = sub_140245C00(v9);
		if (v10)
		{
			if (*(_DWORD*)(v10 + 8) == 22)
			{
				v11 = 79;
			LABEL_15:
				a3[1] = sub_1403A0D20(v3, v11);
				sub_1403F4900(v12, 0x852u, (__int64)a3);
				return v8;
			}
			if ((*(_BYTE*)(v10 + 32) & 4) != 0)
			{
				v11 = 87;
				if (!*(_DWORD*)(v10 + 28))
					goto LABEL_15;
			}
		}
		v11 = 44;
		goto LABEL_15;
	}
	return 5i64;
}
// 140399751: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140399630: using guessed type unsigned int var_D8[7];

