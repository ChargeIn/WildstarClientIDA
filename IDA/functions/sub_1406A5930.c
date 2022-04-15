//----- (00000001406A5930) ----------------------------------------------------
__int64 __fastcall sub_1406A5930(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rdx
	__int64 result; // rax
	__int64 v6; // rsi
	int v7; // edi
	unsigned __int64 v8; // rcx
	__int64 v9; // r15
	__int64 v10; // rax
	unsigned int* v11; // rcx
	__int64 v12; // r14
	int v13; // ebp
	int v14; // r13d
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // rcx
	_DWORD* v19; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v6 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
		if (v6)
		{
			v8 = **(unsigned int**)(v3 + 8);
			if (v8 < (__int64)(*(_QWORD*)(v6 + 256) - *(_QWORD*)(v6 + 248)) >> 3
				&& (v9 = *(_QWORD*)(*(_QWORD*)(v6 + 248) + 8 * v8)) != 0)
			{
				v10 = sub_140206C60(*(_DWORD*)(v9 + 4));
				v11 = *(unsigned int**)(v3 + 8);
				v7 = 0;
				v12 = *v11;
				v13 = 1;
				if (v10)
				{
					v14 = *(_DWORD*)(v10 + 128);
					if (((v14 - 1) & 0xFFFFFFFD) == 0)
					{
						v15 = *(_QWORD*)(v6 + 232);
						if (v15 && (unsigned int)v12 < *(_DWORD*)(v6 + 272))
							v16 = v15 + 192 * v12;
						else
							v16 = 0i64;
						if (sub_1405A9C70(v16) > 0.0)
						{
							v17 = *(_QWORD*)(v6 + 232);
							if (v17 && (unsigned int)v12 < *(_DWORD*)(v6 + 272))
								v18 = v17 + 192 * v12;
							else
								v18 = 0i64;
							sub_1405A9C70(v18);
						}
						else
						{
							v13 = 0;
						}
					}
					if ((unsigned int)(v14 - 2) <= 1 && !*(_DWORD*)(v9 + 56))
						v13 = 0;
				}
				LOBYTE(v7) = v13 != 0;
			}
			else
			{
				v7 = 0;
			}
		}
		else
		{
			v7 = 0;
		}
		v19 = (_DWORD*)a1[2];
		*v19 = v7;
		v19[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = (_DWORD*)a1[2];
		result = 1i64;
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

