//----- (00000001403377F0) ----------------------------------------------------
__int64 __fastcall sub_1403377F0(__int64 a1, const __m128i* a2, const __m128i** a3)
{
	unsigned int v3; // ebp
	const __m128i* v5; // rbx
	const __m128i* v7; // rax
	__int64 result; // rax
	int v9; // ecx
	int v10; // ecx
	char* v11; // r10
	__int64 v12; // r9
	__int8 v13; // cl
	__int8 v14; // al
	bool v15; // sf

	v3 = *(_DWORD*)(a1 + 16);
	v5 = a2;
	if (v3 == 4)
		return 4i64;
	v7 = sub_1407DDCF8(a2, (const __m128i*) & unk_1409E6BDC);
	if (v7)
		v7 = (const __m128i*)((char*)v7 + 1);
	*a3 = v7;
	*(_QWORD*)a1 = v5;
	*(_QWORD*)(a1 + 8) = v7;
	if (!v7)
	{
		*(_DWORD*)(a1 + 16) = 4;
		return 4i64;
	}
	v9 = *(_DWORD*)(a1 + 16);
	if (v9)
	{
		v10 = v9 - 1;
		if (v10)
		{
			if (v10 == 2)
			{
				*(_QWORD*)(a1 + 112) = v5;
				*(_DWORD*)(a1 + 104) = *(_DWORD*)(a1 + 96);
				*(_DWORD*)(a1 + 16) = 4;
			}
		}
		else
		{
			if ((int)sub_140337B50(a1, (_BYTE*)(a1 + 76), a1 + 80) < 0)
				return 5i64;
			if (*(_DWORD*)(a1 + 16) != 1)
				return 2;
		}
	}
	else
	{
		v11 = (char*)("POST" - (char*)v5);
		v12 = -(__int64)v5;
		while (1)
		{
			v13 = v5->m128i_i8[0];
			if ((unsigned __int8)(v5->m128i_i8[0] - 65) <= 0x19u)
				v13 += 32;
			v14 = v5->m128i_i8[(_QWORD)v11];
			if ((unsigned __int8)(v14 - 65) <= 0x19u)
				v14 += 32;
			if (v13 != v14)
				break;
			if (v5->m128i_i8[0])
			{
				v5 = (const __m128i*)((char*)v5 + 1);
				if ((unsigned __int64)v5->m128i_u64 + v12 < 4)
					continue;
			}
			*(_DWORD*)(a1 + 20) = 0;
			if ((int)sub_140337950(a1, a1 + 24, a1 + 40) >= 0)
				return v3;
			return 5i64;
		}
		*(_DWORD*)(a1 + 20) = 1;
		v15 = (int)sub_140337A00(a1, (_DWORD*)(a1 + 72), a1 + 56) < 0;
		result = 5i64;
		if (v15)
			return result;
	}
	return v3;
}

