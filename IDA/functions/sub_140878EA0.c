//----- (0000000140878EA0) ----------------------------------------------------
__int64 __fastcall sub_140878EA0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	unsigned __int16 v5; // ax
	unsigned int v6; // ecx
	unsigned __int16 v7; // r13
	unsigned int v8; // esi
	unsigned __int16 v9; // bp
	__int64 v10; // r15
	__int64 v11; // rdx
	__int64 v12; // r12
	int v13; // eax
	unsigned int v14; // r14d
	int* v15; // rdx
	unsigned int v16; // esi

	if ((*(_BYTE*)(a1 + 32) & 2) != 0)
	{
		result = sub_1408790B0(*(_QWORD*)(a1 + 88), *(_DWORD*)(a1 + 104));
		if ((_DWORD)result != 45)
		{
		LABEL_9:
			*(_DWORD*)(a2 + 56) = result;
			return result;
		}
		*(_BYTE*)(a1 + 32) &= ~2u;
	}
	if (!*(_DWORD*)(a1 + 104))
	{
		result = sub_140880860(a1);
		if ((_DWORD)result != 45)
			goto LABEL_9;
	}
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 192i64))(a1);
	v6 = *(_DWORD*)(a1 + 104);
	v7 = v5;
	v8 = v5;
	result = v6 / v5;
	v9 = result;
	if (!v6 && (*(_BYTE*)(a1 + 126) & 1) != 0)
	{
		*(_DWORD*)(a2 + 56) = 2;
		return result;
	}
	v10 = *(_QWORD*)(a1 + 24);
	if (*(unsigned __int16*)(a2 + 16) < (unsigned int)result)
		v9 = *(_WORD*)(a2 + 16);
	result = *(unsigned int*)(a1 + 136);
	if ((_DWORD)result)
	{
		v16 = v8 - result;
		if (v16 <= v6)
		{
			sub_1407DB590((int*)(*(_QWORD*)(a1 + 128) + result), *(int**)(a1 + 96), v16);
			v12 = *(_QWORD*)(a1 + 128);
			*(_DWORD*)(a1 + 140) = (unsigned __int16)v16;
			v9 = 1;
			*(_DWORD*)(a1 + 136) = 0;
			return sub_1408803E0(a1, v12, v9, *(_DWORD*)(v10 + 192), *(_DWORD*)(v10 + 196) & 0x3FFFF, a2);
		}
	LABEL_20:
		*(_DWORD*)(a2 + 56) = 2;
		return result;
	}
	v11 = *(_QWORD*)(a1 + 128);
	if (v11)
	{
		sub_140881720(dword_140C10F28, v11);
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 96);
	v13 = v8 * v9;
	v14 = *(_DWORD*)(a1 + 104) - v13;
	*(_DWORD*)(a1 + 140) = v13;
	if (v14 >= v8 || !v14)
		return sub_1408803E0(a1, v12, v9, *(_DWORD*)(v10 + 192), *(_DWORD*)(v10 + 196) & 0x3FFFF, a2);
	result = sub_1408819F0(dword_140C10F28, v7);
	*(_QWORD*)(a1 + 128) = result;
	if (!result)
		goto LABEL_20;
	v15 = (int*)(*(_QWORD*)(a1 + 96) + *(unsigned int*)(a1 + 140));
	*(_DWORD*)(a1 + 136) = (unsigned __int16)v14;
	sub_1407DB590((int*)result, v15, (unsigned __int16)v14);
	*(_DWORD*)(a1 + 140) += *(_DWORD*)(a1 + 136);
	return sub_1408803E0(a1, v12, v9, *(_DWORD*)(v10 + 192), *(_DWORD*)(v10 + 196) & 0x3FFFF, a2);
}
// 140C10F28: using guessed type int dword_140C10F28;

