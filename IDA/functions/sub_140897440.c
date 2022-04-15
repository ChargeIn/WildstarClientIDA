//----- (0000000140897440) ----------------------------------------------------
__int64 __fastcall sub_140897440(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64* v6; // rdx
	int v7; // ecx
	unsigned __int16 v8; // ax
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int16 v13; // ax
	__int64 v14; // rcx
	int v15; // eax
	char v16; // [rsp+30h] [rbp+8h] BYREF

	*(_BYTE*)(a1 + 40) = 1;
	*(_DWORD*)(a1 + 32) = 0;
	if (*(_QWORD*)(a1 + 16) == *(_QWORD*)(a1 + 8))
		return 2i64;
	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16) - 24i64);
	while (2)
	{
		v16 = 1;
		while (1)
		{
		LABEL_4:
			if (!v2)
				return 2i64;
			v3 = *(_QWORD*)(a1 + 16);
			v4 = 0i64;
			v5 = *(_QWORD*)(v3 - 24);
			v6 = (__int64*)(v3 - 24);
			v7 = *(_DWORD*)(v5 + 56);
			if (v7 >= 0)
			{
				if (v7 <= 1)
				{
					v8 = sub_140897BF0(a1, (__int64)v6, &v16);
				}
				else
				{
					if (v7 > 3)
						goto LABEL_11;
					v8 = sub_1408979D0(a1, v6, &v16);
				}
				v4 = v8;
			}
		LABEL_11:
			if (!v16)
				break;
			v10 = *(_QWORD*)(a1 + 16);
			v2 = *(_QWORD*)(v2 + 8);
			if ((*(_DWORD*)(*(_QWORD*)(v10 - 24) + 56i64) & 0xFFFFFFFD) == 0)
			{
				v11 = *(_QWORD*)(v10 - 8);
				if (v11)
					(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v11 + 8i64))(v11, v6, v4);
			}
			*(_QWORD*)(a1 + 16) -= 24i64;
			if (!v2)
				return 2i64;
			while ((*(_DWORD*)(v2 + 56) & 0xFFFFFFFD) != 0)
			{
				v12 = *(_QWORD*)(a1 + 16);
				v13 = *(_WORD*)(v12 - 16);
				if (!v13)
					break;
				if (v13 > 1)
				{
					--* (_WORD*)(v12 - 16);
					goto LABEL_4;
				}
				v2 = *(_QWORD*)(v2 + 8);
				if ((*(_DWORD*)(*(_QWORD*)(v12 - 24) + 56i64) & 0xFFFFFFFD) == 0)
				{
					v14 = *(_QWORD*)(v12 - 8);
					if (v14)
						(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v14 + 8i64))(v14, v6, v4);
				}
				*(_QWORD*)(a1 + 16) -= 24i64;
				if (!v2)
					goto LABEL_4;
			}
		}
		v2 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 8i64 * (unsigned __int16)v4);
		if (!(*(unsigned __int8(__fastcall**)(__int64, __int64*))(*(_QWORD*)v2 + 8i64))(v2, v6))
		{
			if ((unsigned int)sub_140897D50(a1, v2) == 1)
				continue;
			sub_140897DE0(a1);
			return 2i64;
		}
		break;
	}
	v15 = *(_DWORD*)(v2 + 32);
	*(_DWORD*)(a1 + 32) = v15;
	*(_BYTE*)(a1 + 40) = v15 != 0;
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(v2 + 16);
	*(_WORD*)(a1 + 74) = *(_WORD*)(v2 + 20);
	return 1i64;
}
// 1408974D5: variable 'v6' is possibly undefined
// 140897581: variable 'v4' is possibly undefined

