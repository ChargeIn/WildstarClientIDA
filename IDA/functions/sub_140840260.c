//----- (0000000140840260) ----------------------------------------------------
__int64 __fastcall sub_140840260(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v3; // r12
	__int128 v6; // xmm1
	unsigned int v7; // r8d
	unsigned int v8; // r13d
	unsigned int v9; // esi
	__int128 v10; // xmm1
	unsigned int v11; // r8d
	unsigned int i; // ebp
	unsigned int v13; // esi
	struct _RTL_CRITICAL_SECTION* v14; // r14
	__int64 v15; // rbx
	unsigned int v16; // edx
	int v17; // eax
	unsigned int v18; // r8d
	__int64 v19; // r12
	unsigned int v20; // ebp
	struct _RTL_CRITICAL_SECTION* v21; // r14
	__int64 v22; // rbx
	__int128 v24; // [rsp+40h] [rbp-68h] BYREF
	__int128 v25; // [rsp+50h] [rbp-58h]
	__int128 v26; // [rsp+60h] [rbp-48h]
	__int64 v27; // [rsp+70h] [rbp-38h]

	*(_BYTE*)(a1 + 2400) = 1;
	v2 = *(_DWORD*)(a2 + 32);
	v3 = 0i64;
	if (v2 == 1)
	{
		v6 = *(_OWORD*)(a2 + 16);
		v7 = *(_DWORD*)(a2 + 40);
		v24 = *(_OWORD*)a2;
		v25 = v6;
		*(_QWORD*)&v6 = *(_QWORD*)(a2 + 48);
		v26 = *(_OWORD*)(a2 + 32);
		v27 = v6;
		v8 = sub_1408400A0(a1, (__int64)&v24, v7);
		if (v8 == 1)
		{
			v8 = sub_140840C50((struct _RTL_CRITICAL_SECTION*)a1);
			if (v8 != 1)
				sub_140843460(a1, *(_DWORD*)(a2 + 40));
		}
	}
	else
	{
		v9 = 0;
		if (v2)
		{
			while (1)
			{
				v10 = *(_OWORD*)(a2 + 16);
				v11 = *(_DWORD*)(*(_QWORD*)(a2 + 40) + 4i64 * v9);
				v24 = *(_OWORD*)a2;
				v25 = v10;
				*(_QWORD*)&v10 = *(_QWORD*)(a2 + 48);
				v26 = *(_OWORD*)(a2 + 32);
				v27 = v10;
				v8 = sub_1408400A0(a1, (__int64)&v24, v11);
				if (v8 != 1)
					break;
				if (++v9 >= *(_DWORD*)(a2 + 32))
					goto LABEL_8;
			}
			if (v9)
			{
				v19 = 4i64 * v9;
				do
				{
					v19 -= 4i64;
					v20 = *(_DWORD*)(v19 + *(_QWORD*)(a2 + 40));
					v21 = (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776);
					--v9;
					EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776));
					v22 = *((_QWORD*)&v21[1].DebugInfo + v20 % 0xC1);
					if (v22)
					{
						while (*(_DWORD*)(v22 + 24) != v20)
						{
							v22 = *(_QWORD*)(v22 + 16);
							if (!v22)
								goto LABEL_26;
						}
						++* (_DWORD*)(v22 + 8);
						LeaveCriticalSection(v21);
						sub_1408434C0(a1, v22, 0);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
					}
					else
					{
					LABEL_26:
						LeaveCriticalSection(v21);
					}
				} while (v9);
				v3 = 0i64;
			}
		}
		else
		{
		LABEL_8:
			v8 = sub_140840C50((struct _RTL_CRITICAL_SECTION*)a1);
			if (v8 != 1)
			{
				for (i = 0; i < *(_DWORD*)(a2 + 32); ++i)
				{
					v13 = *(_DWORD*)(*(_QWORD*)(a2 + 40) + 4i64 * i);
					v14 = (LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776);
					EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776));
					v15 = *((_QWORD*)&v14[1].DebugInfo + v13 % 0xC1);
					if (v15)
					{
						while (*(_DWORD*)(v15 + 24) != v13)
						{
							v15 = *(_QWORD*)(v15 + 16);
							if (!v15)
								goto LABEL_13;
						}
						++* (_DWORD*)(v15 + 8);
						LeaveCriticalSection(v14);
						sub_1408434C0(a1, v15, 0);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
					}
					else
					{
					LABEL_13:
						LeaveCriticalSection(v14);
					}
				}
			}
		}
		sub_140881720(dword_140C10F20, *(_QWORD*)(a2 + 40));
		*(_QWORD*)(a2 + 40) = 0i64;
	}
	*(_BYTE*)(a1 + 2400) = 0;
	v16 = -1;
	*(_QWORD*)(a1 + 2384) = *(_QWORD*)(a1 + 2376);
	v17 = *(_DWORD*)a2;
	v18 = 0;
	if (*(int*)a2 >= 0)
	{
		if (v17 <= 1)
		{
			v16 = *(_DWORD*)(a2 + 36);
			v18 = *(_DWORD*)(a2 + 32);
			goto LABEL_34;
		}
		if (v17 == 4)
			goto LABEL_34;
		if ((unsigned int)(v17 - 6) <= 1)
		{
			v18 = *(_DWORD*)(a2 + 32);
			goto LABEL_34;
		}
	}
	if (*(_DWORD*)(a2 + 32) == 1)
		v18 = *(_DWORD*)(a2 + 40);
LABEL_34:
	if (*(_DWORD*)(a2 + 24) == 1)
		v3 = *(_QWORD*)(a2 + 40);
	sub_14083CE60(
		a1 + 2304,
		*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a2 + 8),
		v18,
		v3,
		v8,
		v16,
		*(_QWORD*)(a2 + 16));
	return v8;
}
// 1408404EA: conditional instruction was optimized away because rbx.8!=0
// 140840514: conditional instruction was optimized away because rbx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

