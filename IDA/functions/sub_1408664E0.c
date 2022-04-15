//----- (00000001408664E0) ----------------------------------------------------
__int64 __fastcall sub_1408664E0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	unsigned int v4; // edi
	__int64 v5; // rdx
	int v6; // eax
	char v7; // al
	__int64 v8; // rdx
	int v9; // eax
	char v10; // cl
	char v11; // al
	char v12; // al

	result = sub_14085ED00(a1, a2);
	v4 = result;
	if ((_DWORD)result != 1)
		return result;
	v5 = *(_QWORD*)(a1 + 128);
	if (v5)
	{
		v6 = sub_14083AB00(qword_140C61B70, v5, a1 + 16);
		if (v6 == v4)
		{
			if (!sub_14083AEC0(qword_140C61B70, *(_QWORD*)(a1 + 128)))
			{
				(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)a1 + 128i64))(a1, v4 + 13, 0xFFFFFFFFi64);
				goto LABEL_12;
			}
			sub_14083B060(qword_140C61B70, *(_QWORD*)(a1 + 128), a1 + 16);
			*(_QWORD*)(a1 + 128) = 0i64;
			goto LABEL_10;
		}
		if (v6 != 28)
			*(_QWORD*)(a1 + 128) = 0i64;
		if (v6 == 24)
		{
		LABEL_10:
			v7 = *(_BYTE*)(a1 + 144);
			if ((v7 & 1) != 0)
			{
				*(_BYTE*)(a1 + 378) &= 0xFAu;
				*(_BYTE*)(a1 + 378) |= 2u;
				*(_BYTE*)(a1 + 144) = v7 & 0xFE;
			}
		}
	}
LABEL_12:
	v8 = *(_QWORD*)(a1 + 136);
	if (!v8)
		goto LABEL_24;
	v9 = sub_14083AB00(qword_140C61B70, v8, a1 + 16);
	if (v9 != 1)
	{
		if (v9 != 28)
			*(_QWORD*)(a1 + 136) = 0i64;
		if (v9 != 24)
			goto LABEL_24;
		goto LABEL_20;
	}
	if (sub_14083AEC0(qword_140C61B70, *(_QWORD*)(a1 + 136)))
	{
		sub_14083B060(qword_140C61B70, *(_QWORD*)(a1 + 136), a1 + 16);
		*(_QWORD*)(a1 + 136) = 0i64;
	LABEL_20:
		v10 = *(_BYTE*)(a1 + 144);
		if ((v10 & 2) != 0)
		{
			v11 = *(_BYTE*)(a1 + 378);
			if ((v11 & 7) == 0)
				*(_BYTE*)(a1 + 378) = v11 & 0xF8 | 1;
			*(_BYTE*)(a1 + 144) = v10 & 0xFD;
		}
		goto LABEL_24;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 14i64);
LABEL_24:
	v12 = *(_BYTE*)(a1 + 378);
	if ((v12 & 7) == 0 && *(_DWORD*)(a1 + 404) && !*(_QWORD*)(a1 + 136))
		*(_BYTE*)(a1 + 378) = v12 & 0xF8 | 1;
	return v4;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

