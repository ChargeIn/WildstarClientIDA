//----- (000000014037CC30) ----------------------------------------------------
__int64 __fastcall sub_14037CC30(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	unsigned __int64 i; // r14
	__int64 v8; // rax
	__int64 v9; // rsi
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // rbp
	__int64 v14; // rax
	__int64 v15; // rdi
	unsigned int v16; // edi
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 j; // rdx
	_QWORD* v21; // r8
	_QWORD* v22; // rcx
	__int64 v23; // rax
	unsigned int v24; // eax
	unsigned int v25; // edi
	__int64* v26; // rsi
	__int64 v27; // rcx
	_QWORD* v28; // rcx
	__int64 v29; // rcx
	__int64* v30; // rax

	if ((*(_BYTE*)(a1 + 36) & 1) == 0)
	{
		if (*(_DWORD*)(a1 + 32) != 15)
		{
			result = sub_14037CB70(a1);
			if (!(_DWORD)result)
				return result;
		}
		*(_DWORD*)(a1 + 36) |= 1u;
	}
	if ((*(_BYTE*)(a1 + 36) & 2) == 0)
	{
		sub_14037F4A0((__int64**)a1);
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 36) & 0xFFFFFFF9 | 2;
	}
	if ((*(_BYTE*)(a1 + 36) & 4) != 0)
	{
	LABEL_12:
		if ((*(_BYTE*)(a1 + 36) & 8) == 0)
		{
			for (i = 0i64; i < *(_QWORD*)(a1 + 888); ++i)
			{
				v8 = *(_QWORD*)(a1 + 896);
				v9 = *(_QWORD*)(v8 + 8 * i);
				if (*(_DWORD*)(v9 + 76))
				{
					if (*(_QWORD*)(v9 + 1184))
					{
						sub_140378110(*(_QWORD*)(v8 + 8 * i));
						sub_1403786A0(v9);
						v10 = *(_QWORD**)(v9 + 1184);
						if (v10)
							*v10 = *(_QWORD*)(v9 + 1192);
						v11 = *(_QWORD*)(v9 + 1192);
						if (v11)
							*(_QWORD*)(v11 + 1184) = *(_QWORD*)(v9 + 1184);
						*(_QWORD*)(v9 + 1184) = 0i64;
						*(_QWORD*)(v9 + 1192) = 0i64;
					}
					v12 = 0i64;
					v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 48) + 72i64))(*(_QWORD*)(v9 + 48));
					if (v13)
					{
						do
						{
							v14 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(v9 + 48) + 80i64))(
								*(_QWORD*)(v9 + 48),
								v12);
							if (v14)
								sub_1403780A0(v14);
							++v12;
						} while (v12 < v13);
					}
				}
			}
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 36) & 0xFFFFFFE7 | 8;
		}
		if ((*(_BYTE*)(a1 + 36) & 0x10) == 0)
		{
			v15 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48i64);
			if (v15)
			{
				while ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v15 + 8) + 32i64))(
					*(_QWORD*)(v15 + 8),
					a2))
				{
					v15 = *(_QWORD*)(v15 + 24);
					if (!v15)
						goto LABEL_31;
				}
				return 0i64;
			}
		LABEL_31:
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 36) & 0xFFFFFFCF | 0x10;
		}
		if ((*(_BYTE*)(a1 + 36) & 0x20) == 0)
		{
			sub_14037F640((__m128*)a1);
			*(_DWORD*)(a1 + 36) |= 0x20u;
			*(_DWORD*)(a1 + 40) &= ~0x800u;
		}
		if ((*(_BYTE*)(a1 + 36) & 0x40) == 0)
		{
			sub_140380C10(a1);
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 36) & 0xFFFFFF3F | 0x40;
		}
		if (*(char*)(a1 + 36) >= 0)
		{
			v16 = 0;
			if (*(_QWORD*)(a1 + 1032))
			{
				v17 = 0i64;
				do
				{
					v18 = *(_QWORD*)(*(_QWORD*)(a1 + 1040) + 8 * v17);
					if (v18)
					{
						if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v18 + 32i64))(v18, a2))
							return 0i64;
					}
					v17 = ++v16;
				} while ((unsigned __int64)v16 < *(_QWORD*)(a1 + 1032));
			}
			v19 = *(_QWORD*)(a1 + 24);
			*(_DWORD*)(a1 + 36) |= 0x80u;
			*(_DWORD*)(a1 + 40) &= ~0x1000u;
			if (v19)
			{
				for (j = *(_QWORD*)(v19 + 88); j; j = *(_QWORD*)(j + 24))
				{
					v21 = *(_QWORD**)(j + 8);
					if (!v21[13])
					{
						v22 = (_QWORD*)(v21[2] + 5480i64);
						v21[13] = v22;
						v21[14] = *v22;
						*v22 = v21;
						v23 = v21[14];
						if (v23)
							*(_QWORD*)(v23 + 104) = v21 + 14;
					}
				}
			}
		}
		if ((*(_DWORD*)(a1 + 36) & 0x100) == 0)
		{
			sub_140380ED0((_QWORD*)a1);
			*(_DWORD*)(a1 + 36) |= 0x100u;
		}
		if ((*(_DWORD*)(a1 + 36) & 0x200) == 0)
		{
			sub_14037F190((__int64*)a1);
			*(_DWORD*)(a1 + 36) |= 0x200u;
		}
		if ((*(_DWORD*)(a1 + 36) & 0x400) == 0)
		{
			sub_14037E910(a1);
			v24 = *(_DWORD*)(a1 + 36) & 0xFFFFE3FF | 0x400;
			*(_DWORD*)(a1 + 40) &= ~0x400u;
			*(_DWORD*)(a1 + 36) = v24;
		}
		if ((*(_DWORD*)(a1 + 36) & 0x800) == 0)
		{
			sub_14037EA00((__m128**)a1);
			*(_DWORD*)(a1 + 36) |= 0x800u;
		}
		if ((*(_DWORD*)(a1 + 36) & 0x1000) == 0)
		{
			sub_140381070((__int64*)a1);
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 36) & 0xFFFFCFFF | 0x1000;
			sub_140383760((_QWORD*)a1);
			*(_DWORD*)(a1 + 44) &= 0xFFFFFFF5;
		}
		if ((*(_DWORD*)(a1 + 36) & 0x2000) == 0)
		{
			if ((*(_DWORD*)(*(_QWORD*)a1 + 232i64) & 0x4000) != 0)
			{
				v25 = 0;
				v26 = (__int64*)(a1 + 512);
				do
				{
					v27 = *v26;
					if (*v26)
					{
						if (!*(_DWORD*)(v27 + 28) && !(unsigned int)sub_1403746E0(v27, a2))
							return 0i64;
					}
					++v25;
					++v26;
				} while (v25 < 0x10);
			}
			*(_DWORD*)(a1 + 36) |= 0x2000u;
		}
		v28 = *(_QWORD**)(a1 + 1448);
		if (v28)
			*v28 = *(_QWORD*)(a1 + 1456);
		v29 = *(_QWORD*)(a1 + 1456);
		if (v29)
			*(_QWORD*)(v29 + 1448) = *(_QWORD*)(a1 + 1448);
		v30 = *(__int64**)a1;
		*(_QWORD*)(a1 + 1448) = 0i64;
		*(_QWORD*)(a1 + 1456) = 0i64;
		--* ((_DWORD*)v30 + 541);
		return 1i64;
	}
	v5 = 0i64;
	if (!*(_QWORD*)(a1 + 888))
	{
	LABEL_11:
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(a1 + 36) & 0xFFFFFFF3 | 4;
		goto LABEL_12;
	}
	while (1)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 896) + 8 * v5);
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
			return 0i64;
		if ((unsigned __int64)++v5 >= *(_QWORD*)(a1 + 888))
			goto LABEL_11;
	}
}

