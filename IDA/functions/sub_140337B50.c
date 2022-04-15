//----- (0000000140337B50) ----------------------------------------------------
__int64 __fastcall sub_140337B50(__int64 a1, _BYTE* a2, __int64 a3)
{
	const __m128i* v4; // rcx
	const __m128i* v7; // rax
	__int64 v9; // rax
	_BYTE* v10; // rax
	_BYTE* v11; // rax
	const __m128i* v12; // r14
	const __m128i* v13; // rdx
	__int8 v14; // cl
	char v15; // al
	__int8 v16; // al

	v4 = *(const __m128i**)a1;
	if (v4->m128i_i8[0] == 13 || v4->m128i_i8[0] == 10)
	{
		*a2 = 0;
		*(_DWORD*)(a1 + 16) = 3;
		return 0i64;
	}
	else
	{
		v7 = sub_1407DDCF8(v4, (const __m128i*) & unk_1409E6B34);
		if (v7)
			v7 = (const __m128i*)((char*)v7 + 1);
		*(_QWORD*)(a3 + 8) = v7;
		if (!v7)
			return 2147500037i64;
		v9 = *(_QWORD*)(a1 + 8);
		if (!v9)
			return 2147500037i64;
		v10 = (_BYTE*)(v9 - 1);
		if (*v10 == 10)
			--v10;
		if (*v10 == 13)
			--v10;
		v11 = v10 + 1;
		if (v11)
		{
			*(_DWORD*)a3 = (_DWORD)v11 - *(_DWORD*)(a3 + 8);
			v12 = *(const __m128i**)a1;
			v13 = *(const __m128i**)a1;
			while (1)
			{
				v14 = v13->m128i_i8[0];
				if ((unsigned __int8)(v13->m128i_i8[0] - 65) <= 0x19u)
					v14 += 32;
				v15 = aContentLength[(_QWORD)v13 - *(_QWORD*)a1];
				if ((unsigned __int8)(v15 - 65) <= 0x19u)
					v15 += 32;
				if (v14 != v15)
					break;
				if (v13->m128i_i8[0])
				{
					v13 = (const __m128i*)((char*)v13 + 1);
					if ((unsigned __int64)v13 - *(_QWORD*)a1 < 0xE)
						continue;
				}
				*a2 = 108;
				goto LABEL_23;
			}
			v16 = v12->m128i_i8[0];
			*a2 = v12->m128i_i8[0];
			if (v16 != 108)
				return 0i64;
		LABEL_23:
			*(_DWORD*)(a1 + 96) = sub_1407DF3E4(*(unsigned __int8**)(a3 + 8));
			return 0i64;
		}
		else
		{
			return 2147500037i64;
		}
	}
}

