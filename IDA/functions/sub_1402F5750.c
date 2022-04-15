//----- (00000001402F5750) ----------------------------------------------------
__int64 __fastcall sub_1402F5750(__int64 a1, __int64 a2, unsigned int a3)
{
	int v3; // eax
	__int64 result; // rax
	__int64 v8; // rdi
	void(__fastcall * ***v9)(_QWORD); // rsi
	int v10; // edx
	__int64 v11; // rdx
	__int64 v12; // r8
	void(__fastcall * **v13)(_QWORD); // rdi
	void(__fastcall * **v14)(_QWORD); // rcx
	unsigned int v15; // r15d
	unsigned int i; // ebp
	__int64 v17; // r14
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rax
	_QWORD* v21; // rsi
	__int64 v22; // rdi
	_WORD* v23; // rdx
	__int64 v24; // rdx
	unsigned int v25; // edi
	__int64 v26; // rcx
	__int64 v27; // rcx
	unsigned int j; // ebp
	__int64 v29; // r11
	int v30; // r14d
	__int64 v31; // rcx
	__int64 v32; // rdx
	__int64 v33; // rdi
	unsigned int v34; // eax
	int v35; // r10d
	__int64 v36; // r9
	unsigned __int16 v37; // r8
	__int64 v38; // rcx
	void(__fastcall * **v39)(_QWORD, __int64); // rcx
	__int64 v40; // rcx
	__int64 v41; // rcx
	_QWORD* v42; // rdi
	__int64 v43; // [rsp+88h] [rbp+20h] BYREF

	v3 = *(_DWORD*)(a1 + 52);
	if (a3)
	{
		if (v3 == 63)
			return 1i64;
	}
	else if (v3 == 31)
	{
		return 1i64;
	}
	if ((v3 & 1) == 0)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 16i64))(a1, a2, 0i64);
		if (!(_DWORD)result)
			return result;
		*(_DWORD*)(a1 + 52) |= 1u;
	}
	if ((*(_BYTE*)(a1 + 52) & 2) == 0)
	{
		if (*(_QWORD*)(a1 + 1136))
		{
			sub_14003D8F0(&v43, *(_QWORD*)(a1 + 56) + 440i64);
			v8 = *(_QWORD*)(a1 + 1136);
			v9 = (void(__fastcall****)(_QWORD))(v8 + 56);
			if (!*(_QWORD*)(v8 + 56))
			{
				v10 = *(_DWORD*)(v8 + 44);
				if (v10)
				{
					if (*(_DWORD*)(v8 + 40) > 0xFFFFu)
					{
						v11 = (unsigned int)(4 * v10);
						v12 = 1i64;
					}
					else
					{
						v11 = (unsigned int)(2 * v10);
						v12 = 0i64;
					}
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
						qword_140C65670,
						v11,
						v12,
						1i64,
						v8 + 56);
				}
				sub_140326380(v8);
			}
			v13 = *v9;
			v14 = *(void(__fastcall****)(_QWORD))(a1 + 1144);
			if (v14 != *v9)
			{
				if (v14)
					(*v14)[1](v14);
				*(_QWORD*)(a1 + 1144) = v13;
				if (v13)
					(**v13)(v13);
			}
			sub_14003D880(&v43);
		}
		*(_DWORD*)(a1 + 52) |= 2u;
	}
	v15 = 0;
	if ((*(_BYTE*)(a1 + 52) & 4) == 0)
	{
		if (*(_QWORD*)(a1 + 1136))
		{
			for (i = 0; i < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 448i64); ++i)
			{
				v17 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 456i64);
				v18 = *(_QWORD*)(a1 + 1056) + 24i64 * i;
				v19 = *(_QWORD*)(v18 + 16);
				v20 = *(_QWORD*)(a1 + 1136);
				v21 = (_QWORD*)(v18 + 16);
				v22 = 32i64 * i;
				if (v19)
				{
					if (!*(_DWORD*)(*(_QWORD*)(v20 + 80) + 4i64 * i))
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
						*v21 = 0i64;
					}
				}
				else if (*(_DWORD*)(*(_QWORD*)(v20 + 80) + 4i64 * i))
				{
					if (*(_QWORD*)v18)
					{
						sub_1401E42B0((_QWORD*)(v18 + 16), (void(__fastcall****)(_QWORD))v18);
					}
					else
					{
						v23 = *(_WORD**)(v18 + 8);
						if (!v23)
							v23 = *(_WORD**)(v22 + v17 + 24);
						if ((int)sub_1402EC8C0(
							0i64,
							v23,
							*(unsigned __int16*)(v22 + v17 + 2),
							*(unsigned int*)(v22 + v17 + 4),
							(*(_DWORD*)(a1 + 40) >> 6) & 1,
							(__int64)v21) >= 0)
							(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v21 + 48i64))(*v21, *(unsigned int*)(a1 + 1064));
					}
				}
			}
		}
		v24 = *(_QWORD*)(a1 + 1080);
		if (v24 && *(_QWORD*)(v24 - 8) && !*(_QWORD*)(a1 + 1088))
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670
				+ 96i64))(
					qword_140C65670,
					v24,
					0i64,
					1i64,
					1,
					0,
					0,
					a1 + 1088);
		*(_DWORD*)(a1 + 52) |= 4u;
	}
	if ((*(_BYTE*)(a1 + 52) & 8) == 0)
	{
		v25 = 0;
		if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 448i64))
		{
			do
			{
				v26 = *(_QWORD*)(*(_QWORD*)(a1 + 1056) + 24i64 * v25 + 16);
				if (v26)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v26 + 32i64))(v26, a2))
						return 0i64;
				}
			} while (++v25 < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 448i64));
		}
		v27 = *(_QWORD*)(a1 + 1088);
		if (v27 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v27 + 32i64))(v27, a2))
			return 0i64;
		for (j = 0; j < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 496i64); ++j)
		{
			v29 = *(_QWORD*)(a1 + 64);
			v30 = *(_DWORD*)(a1 + 1096);
			v31 = *(_QWORD*)(v29 + 504);
			v32 = 6i64 * j;
			v33 = *(_QWORD*)(a1 + 1104) + 96i64 * j;
			if (!v30)
				goto LABEL_62;
			v34 = *(_DWORD*)(v31 + 48i64 * j + 32);
			v35 = 0;
			if (v34)
			{
				v32 = *(_QWORD*)(v31 + 48i64 * j + 40);
				v36 = v34;
				do
				{
					if ((unsigned int)*(unsigned __int16*)v32 < *(_DWORD*)(v29 + 448))
					{
						v37 = *(_WORD*)(32i64 * *(unsigned __int16*)v32 + *(_QWORD*)(v29 + 456));
						if (v37 < 0xDu)
							v35 |= 1 << v37;
					}
					v32 += 296i64;
					--v36;
				} while (v36);
			}
			if ((v30 & v35) != 0)
			{
			LABEL_62:
				v39 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 1088);
				if (*(void(__fastcall****)(_QWORD, __int64))(v33 + 80) != v39)
				{
					if (v39)
						(**v39)(v39, v32);
					v40 = *(_QWORD*)(v33 + 80);
					if (v40)
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v40 + 8i64))(v40, v32);
					*(_QWORD*)(v33 + 80) = *(_QWORD*)(a1 + 1088);
				}
			}
			else
			{
				v38 = *(_QWORD*)(v33 + 80);
				if (v38)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v38 + 8i64))(v38, v32);
					*(_QWORD*)(v33 + 80) = 0i64;
				}
			}
		}
		*(_DWORD*)(a1 + 52) |= 8u;
	}
	if ((*(_BYTE*)(a1 + 52) & 0x10) == 0)
	{
		if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 760i64))
		{
			do
			{
				v41 = *(_QWORD*)(*(_QWORD*)(a1 + 1424) + 8i64 * v15);
				if (v41)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v41 + 40i64))(v41, a2))
						return 0i64;
				}
			} while (++v15 < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 760i64));
		}
		*(_DWORD*)(a1 + 52) |= 0x10u;
	}
	if (a3 && (*(_BYTE*)(a1 + 52) & 0x20) == 0)
	{
		v42 = *(_QWORD**)(a1 + 1232);
		if (v42)
		{
			while ((*(unsigned int(__fastcall**)(_QWORD*, __int64, _QWORD))(*v42 + 24i64))(v42, a2, a3))
			{
				v42 = (_QWORD*)v42[156];
				if (!v42)
					goto LABEL_81;
			}
			return 0i64;
		}
	LABEL_81:
		*(_DWORD*)(a1 + 52) |= 0x20u;
	}
	return 1i64;
}
// 1402F5B37: variable 'v32' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

