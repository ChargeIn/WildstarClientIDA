//----- (00000001408730F0) ----------------------------------------------------
__int64 __fastcall sub_1408730F0(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	int v4; // ecx
	unsigned int i; // r8d
	__int64 result; // rax
	int v7; // edx
	__int16 v8; // cx
	__int64 v9; // rcx
	__int64 v10; // r8
	unsigned __int16 v11; // cx
	int v12; // edx
	int v13; // r13d
	unsigned __int16 v14; // r12
	unsigned __int16 v15; // bp
	__int64 v16; // r15
	unsigned int j; // edi
	int v18; // esi
	int* v19; // rcx
	int v20; // ecx
	int v21; // [rsp+60h] [rbp+8h]

	v2 = a2;
	if (*(_DWORD*)(a2 + 56) == 17)
		*(_BYTE*)(a1 + 44) = 1;
	if (!*(_WORD*)(a1 + 90))
	{
		*(_DWORD*)(a1 + 184) = 0;
		*(_QWORD*)(a1 + 72) = *(_QWORD*)a2;
		*(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 8);
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 24);
		*(_QWORD*)(a1 + 104) = *(_QWORD*)(a2 + 32);
		*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 40);
		*(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 48);
		sub_140872B20(a2, a1 + 72, 0, *(unsigned __int16*)(a2 + 18));
	}
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(v2 + 56);
	if (!*(_QWORD*)(a1 + 128))
	{
		v4 = *(_DWORD*)(a1 + 136);
		for (i = 0; v4; v4 &= v4 - 1)
			++i;
		result = sub_1408819F0(dword_140C10F28, 4 * i * (unsigned __int64)*(unsigned __int16*)(a1 + 64));
		if (!result)
		{
			*(_DWORD*)(v2 + 56) = 2;
			return result;
		}
		v7 = *(_DWORD*)(a1 + 136);
		v8 = *(_WORD*)(a1 + 64);
		*(_QWORD*)(a1 + 128) = result;
		*(_WORD*)(a1 + 144) = v8;
		*(_DWORD*)(a1 + 136) = v7;
		*(_WORD*)(a1 + 146) = 0;
	}
	*(_DWORD*)(a1 + 188) = *(unsigned __int16*)(a1 + 90);
	if (*(_BYTE*)(a1 + 45) || (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 383i64) & 1) != 0)
	{
		if (!*(_BYTE*)(a1 + 46))
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
		v11 = *(_WORD*)(a1 + 144);
		v12 = *(_DWORD*)(a1 + 136);
		v13 = *(_DWORD*)(a1 + 80);
		v14 = 0;
		v15 = 0;
		if (*(_WORD*)(a1 + 90) < v11)
			v11 = *(_WORD*)(a1 + 90);
		*(_BYTE*)(a1 + 46) = 1;
		v21 = v12;
		v16 = v11;
		for (j = 1; j <= 0x20; j *= 2)
		{
			v18 = v12 & j;
			if ((v12 & j) != 0)
			{
				v19 = (int*)(*(_QWORD*)(a1 + 128) + 4 * v15 * (unsigned __int64)*(unsigned __int16*)(a1 + 144));
				if ((j & v13) != 0)
					sub_1407DB590(
						v19,
						(int*)(*(_QWORD*)(a1 + 72) + 4 * v14 * (unsigned __int64)*(unsigned __int16*)(a1 + 88)),
						(unsigned int)(4 * v16));
				else
					sub_1407E4830(v19, 0i64, 4 * v16);
				v12 = v21;
			}
			if ((j & v13) != 0)
				++v14;
			if (v18)
				++v15;
		}
		v2 = a2;
		*(_WORD*)(a1 + 146) = *(_WORD*)(a1 + 90);
		*(_WORD*)(a1 + 90) = 0;
		if (*(_BYTE*)(a1 + 44))
		{
			*(_DWORD*)(a1 + 140) = 17;
		}
		else
		{
			v20 = 43;
			if (*(_WORD*)(a1 + 146) == *(_WORD*)(a1 + 144))
				v20 = 45;
			*(_DWORD*)(a1 + 140) = v20;
		}
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 56);
		v10 = *(unsigned int*)(a1 + 184);
		*(_BYTE*)(a1 + 46) = 0;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v9 + 56i64))(v9, a1 + 72, v10, a1 + 128);
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, v2);
}
// 140C10F28: using guessed type int dword_140C10F28;

