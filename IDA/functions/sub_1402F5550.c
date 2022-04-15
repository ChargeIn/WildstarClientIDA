//----- (00000001402F5550) ----------------------------------------------------
__int64 __fastcall sub_1402F5550(__int64 a1, __int64 a2, unsigned int a3)
{
	double v3; // xmm1_8
	__int64 v4; // rdi
	int v5; // ecx
	__int64 result; // rax
	__int64 v9; // rbp
	__int64 v10; // rsi
	__int64 v11; // rbx
	_QWORD* v12; // r14
	unsigned __int16* v13; // rax
	_QWORD* v14; // rbx
	__int64* i; // rax

	v4 = a1;
	v5 = *(_DWORD*)(a1 + 48);
	if (a3)
	{
		if (v5 == 15)
			return 1i64;
	}
	else if ((v5 & 0xFFFFFFFB) == 11)
	{
		return 1i64;
	}
	if ((v5 & 1) == 0)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 1400i64))(v4);
		if (!(_DWORD)result)
			return result;
		*(_DWORD*)(v4 + 48) |= 1u;
		sub_1402F39E0(v4, v3);
	}
	if ((*(_BYTE*)(v4 + 48) & 2) == 0)
	{
		if (*(_QWORD*)(v4 + 1112) && *(_DWORD*)(*(_QWORD*)(v4 + 64) + 696i64))
		{
			v9 = 0i64;
			do
			{
				v10 = 40 * v9 + *(_QWORD*)(*(_QWORD*)(v4 + 64) + 704i64);
				if (*(_DWORD*)(v10 + 24))
				{
					v11 = 0i64;
					v12 = (_QWORD*)(40 * v9 + *(_QWORD*)(v4 + 1128));
					do
					{
						if (*v12)
						{
							v13 = (unsigned __int16*)(*(_QWORD*)(v10 + 32) + 32i64 * (unsigned int)v11);
							if (*((_DWORD*)v13 + 2))
								(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)*v12 + 32i64))(
									*v12,
									v12[1] + 8 * v11,
									*(unsigned int*)(*(_QWORD*)(v4 + 1112) + 4i64 * *v13),
									*(unsigned int*)(*(_QWORD*)(v4 + 1112) + 4i64 * v13[1]));
						}
						v11 = (unsigned int)(v11 + 1);
					} while ((unsigned int)v11 < *(_DWORD*)(v10 + 24));
				}
				v9 = (unsigned int)(v9 + 1);
			} while ((unsigned int)v9 < *(_DWORD*)(*(_QWORD*)(v4 + 64) + 696i64));
		}
		*(_DWORD*)(v4 + 48) |= 2u;
	}
	if (!a3 || (*(_BYTE*)(v4 + 48) & 4) != 0)
		goto LABEL_27;
	v14 = *(_QWORD**)(v4 + 1232);
	if (!v14)
	{
	LABEL_26:
		*(_DWORD*)(v4 + 48) |= 4u;
	LABEL_27:
		if ((*(_BYTE*)(v4 + 48) & 8) == 0)
		{
			for (i = (__int64*)(v4 + 1216); *i; i = (__int64*)(*i + 1216))
			{
				if (*(_DWORD*)(v4 + 1200))
					break;
				v4 = *i;
			}
			sub_1402F9D70(v4);
		}
		return 1i64;
	}
	while ((*(unsigned int(__fastcall**)(_QWORD*, __int64, _QWORD))(*v14 + 16i64))(v14, a2, a3))
	{
		v14 = (_QWORD*)v14[156];
		if (!v14)
			goto LABEL_26;
	}
	return 0i64;
}
// 1402F55F9: conditional instruction was optimized away because ecx.4!=0
// 1402F5646: conditional instruction was optimized away because ecx.4!=0
// 1402F55BC: variable 'v3' is possibly undefined

