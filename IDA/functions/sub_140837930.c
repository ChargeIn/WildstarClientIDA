//----- (0000000140837930) ----------------------------------------------------
__int64 __fastcall sub_140837930(_QWORD* a1, unsigned __int64 a2)
{
	__int64 v2; // rdi
	char i; // bp
	unsigned int v6; // esi
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 result; // rax
	_QWORD* v10; // r9
	__int64 v11; // r8
	__int64 v12; // r11
	__int64 v13; // r10
	int v14; // esi
	int v15; // edi
	unsigned __int64 v16; // rdx
	unsigned __int64 v17; // rdi

	v2 = *(_QWORD*)(a2 + 40);
	for (i = 0; v2 != *(_QWORD*)(a2 + 48); v2 += 24i64)
	{
		v6 = *(_DWORD*)(v2 + 4);
		v7 = a1[v6 % 0xC1];
		if (v7)
		{
			while (*(_DWORD*)v7 != v6)
			{
				v7 = *(_QWORD*)(v7 + 8);
				if (!v7)
					goto LABEL_7;
			}
			sub_140835080((__int64*)(v7 + 56), a2);
			i = 1;
		}
	LABEL_7:
		v8 = *(_QWORD*)(v2 + 8);
		if (v8)
		{
			sub_140881720(dword_140C10F20, v8);
			*(_QWORD*)(v2 + 8) = 0i64;
		}
		*(_QWORD*)(v2 + 16) = 0i64;
	}
	result = *(_QWORD*)(a2 + 40);
	*(_QWORD*)(a2 + 48) = result;
	if (i)
		return result;
	v10 = (_QWORD*)*a1;
	for (LODWORD(v11) = 0; !v10; v10 = (_QWORD*)a1[v11])
	{
		v11 = (unsigned int)(v11 + 1);
		if ((unsigned int)v11 >= 0xC1)
			return result;
	}
	do
	{
	LABEL_16:
		v12 = v10[8];
		v13 = v10[7];
		v14 = 0;
		v15 = ((v12 - v13) >> 3) - 1;
		if (v15 < 0)
			goto LABEL_26;
		while (1)
		{
			result = (unsigned int)(v14 + (v15 - v14) / 2);
			v16 = *(_QWORD*)(v13 + 8i64 * (int)result);
			if (a2 >= v16)
				break;
			v15 = result - 1;
		LABEL_21:
			if (v14 > v15)
				goto LABEL_26;
		}
		if (a2 > v16)
		{
			v14 = result + 1;
			goto LABEL_21;
		}
		result = (int)result;
		v17 = v13 + 8i64 * (int)result;
		if (v17 < v12 - 8)
			qmemcpy((void*)v17, (const void*)(v17 + 8), 8 * (((v12 - 8 - v17 - 1) >> 3) + 1));
		v10[8] -= 8i64;
	LABEL_26:
		v10 = (_QWORD*)v10[1];
	} while (v10);
	while (1)
	{
		v11 = (unsigned int)(v11 + 1);
		if ((unsigned int)v11 >= 0xC1)
			return result;
		v10 = (_QWORD*)a1[v11];
		if (v10)
			goto LABEL_16;
	}
}
// 140837992: conditional instruction was optimized away because rcx.8!=0
// 140837A0A: conditional instruction was optimized away because r9.8==0
// 140837AAD: conditional instruction was optimized away because r9.8==0
// 140C10F20: using guessed type int dword_140C10F20;

