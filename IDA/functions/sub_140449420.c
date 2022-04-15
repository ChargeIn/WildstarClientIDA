//----- (0000000140449420) ----------------------------------------------------
__int64 __fastcall sub_140449420(__int64 a1, unsigned int(__fastcall*** a2)(_QWORD), _DWORD* a3)
{
	__int64 v3; // r13
	__int64 v7; // r12
	__int64 v8; // rbx
	unsigned __int64 v9; // rbp
	__int64 i; // rdi
	_DWORD* v11; // rsi
	unsigned __int64 j; // rdi
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rbx
	_DWORD* v16; // rax
	int v17; // edx
	int v18; // r8d
	int v19; // eax

	v3 = qword_140C658F8;
	if (!a2)
		return 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 104) + 16i64))(*(_QWORD*)(qword_140C658F8 + 104))
		/ 0xCui64;
	if (v9)
	{
		for (i = 0i64; ; i += 12i64)
		{
			v11 = (_DWORD*)(i + (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 104) + 32i64))(*(_QWORD*)(v3 + 104)));
			if (*v11 == (**a2)(a2))
				break;
			if (++v8 >= v9)
				return v7;
		}
		for (j = (int)v11[1]; j < (int)v11[2]; ++j)
		{
			v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 112) + 32i64))(*(_QWORD*)(v3 + 112));
			v14 = sub_140449680(v3, *(_DWORD*)(v13 + 4 * j));
			v15 = v14;
			if (v14)
			{
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 32i64))(v14))
				{
					v16 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 88i64))(v15);
					v17 = v16[1];
					v18 = v16[3];
					if (*a3 >= *v16 && *a3 < v16[2])
					{
						v19 = a3[1];
						if (v19 >= v17 && v19 < v18)
						{
							if (((*(__int64(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)v15 + 104i64))(v15, a3) & 1) == 0)
								return v15;
							v7 = v15;
						}
					}
				}
			}
		}
	}
	return v7;
}
// 140C658F8: using guessed type __int64 qword_140C658F8;

