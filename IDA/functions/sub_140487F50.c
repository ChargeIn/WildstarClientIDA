//----- (0000000140487F50) ----------------------------------------------------
__int64 __fastcall sub_140487F50(__int64 a1, int a2, _DWORD* a3)
{
	__m128* v6; // rax
	unsigned __int64 v7; // rcx
	unsigned int v9; // esi
	unsigned __int64 v10; // rbp
	__m128* v11; // r13
	__int64 v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rbx
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rsi
	__int64 v19; // rax
	__int64 v20; // rax
	unsigned int v21; // [rsp+70h] [rbp+18h]

	if (a3)
		*a3 = 0;
	if (!qword_140C65898)
		return 0i64;
	v6 = *(__m128**)(qword_140C65898 + 25744);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 16);
	if (!v7)
		return 0i64;
	v9 = v6[382].m128_u32[2];
	v10 = 0i64;
	v21 = v9;
	v11 = v6 + 286;
	while (1)
	{
		v12 = *(_QWORD*)(a1 + 8);
		v13 = 0i64;
		v14 = *(_QWORD*)(v12 + 8 * v10);
		v15 = v12 + 8 * v10++;
		if (v10 < v7)
			v13 = *(_QWORD*)(v15 + 8);
		if (!(unsigned int)sub_140487BC0(v14))
			goto LABEL_22;
		if (v13)
			goto LABEL_17;
		if (*(_QWORD*)(v14 + 16))
			goto LABEL_18;
		v17 = sub_14043ED60(v16, *(_DWORD*)(qword_140C65898 + 29932));
		v18 = v17;
		if (v17)
		{
			v19 = *(_QWORD*)(v17 + 8);
			if (*(_DWORD*)(v19 + 24))
			{
				if (sub_14024B980(*(_DWORD*)(v19 + 24)))
					break;
			}
		}
		v9 = v21;
	LABEL_17:
		if (!*(_QWORD*)(v14 + 16))
			goto LABEL_28;
	LABEL_18:
		if (sub_140487390(v14, v9)
			|| v13 && (*(_BYTE*)(*(_QWORD*)(v13 + 32) + 16i64) & 1) == 0 && (unsigned int)sub_140487B40(v13, v11))
		{
		LABEL_28:
			v20 = *(_QWORD*)(v14 + 32);
			if (a2)
				return *(unsigned int*)(v20 + 8);
			else
				return *(unsigned int*)(v20 + 4);
		}
	LABEL_22:
		v7 = *(_QWORD*)(a1 + 16);
		if (v10 >= v7)
			return 0i64;
	}
	if (a3)
		*a3 = 1;
	return *(unsigned int*)(*(_QWORD*)(v18 + 8) + 24i64);
}
// 140487FCC: conditional instruction was optimized away because rcx.8!=0
// 140488010: variable 'v16' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

