//----- (0000000140896ED0) ----------------------------------------------------
__int64 __fastcall sub_140896ED0(__int64 a1)
{
	__int64 v1; // r12
	__int64 v3; // r12
	char v5; // bl
	__int64 v6; // rsi
	__int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	unsigned __int16 v10; // ax
	__int64 v11; // rcx
	__int64 v12; // rdi
	__int64 v13; // rcx
	__int16* v14; // rdi
	_QWORD* v15; // rbx
	_QWORD* v16; // rax
	_QWORD* v17; // rcx
	__int64 v18; // rax
	__int64 v19; // r15
	__int64 v20; // rax
	char v21; // cl
	int v23; // eax
	char v24; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_QWORD*)a1;
	*(_WORD*)(a1 + 72) |= 1u;
	*(_DWORD*)(a1 + 32) = 0;
	*(_BYTE*)(a1 + 40) = 1;
	v3 = v1 + 248;
	if (!v3)
		return 2i64;
	while (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3))
	{
		if ((unsigned int)((__int64)(*(_QWORD*)(v3 + 40) - *(_QWORD*)(v3 + 32)) >> 3) && *(_BYTE*)(v3 + 74))
		{
			if ((unsigned int)sub_140897D50(a1, v3) != 1)
			{
				sub_140897DE0(a1);
				return 2i64;
			}
		}
		else
		{
			v3 = *(_QWORD*)(v3 + 8);
			if (!v3)
				return 2i64;
		}
		v5 = 0;
		v24 = 0;
		while (1)
		{
			v6 = *(_QWORD*)(a1 + 16);
			v7 = 0i64;
			v8 = *(_QWORD*)(v6 - 24);
			v9 = *(_DWORD*)(v8 + 56);
			if (v9 < 0)
				goto LABEL_14;
			if (v9 > 1)
			{
				if (v9 <= 3)
				{
					v10 = sub_1408979D0(a1, (__int64*)(v6 - 24), &v24);
					v5 = v24;
					v7 = v10;
				}
			LABEL_14:
				if (!v5)
					goto LABEL_43;
				goto LABEL_15;
			}
			if (((v9 - 1) & 0xFFFFFFFD) != 0)
				v14 = *(__int16**)(v6 - 8);
			else
				v14 = (__int16*)sub_140896C70(v8);
			if (!v14)
			{
				v5 = 1;
				v24 = 1;
				goto LABEL_15;
			}
			v15 = *(_QWORD**)(v6 - 24);
			if ((*(_BYTE*)(a1 + 72) & 1) != 0 && v14 == (__int16*)v15[8])
			{
				v16 = *(_QWORD**)(a1 + 48);
				v17 = *(_QWORD**)(a1 + 56);
				if (v16 == v17)
					goto LABEL_48;
				do
				{
					if ((_QWORD*)*v16 == v15)
						break;
					v16 += 2;
				} while (v16 != v17);
				if (v16 == v17 || v16 == (_QWORD*)-8i64)
				{
				LABEL_48:
					v18 = (*(__int64(__fastcall**)(__int16*, __int64))(*(_QWORD*)v14 + 24i64))(
						v14,
						(__int64)(v15[5] - v15[4]) >> 3);
					v19 = v18;
					if (v18)
					{
						if (!sub_140897CD0((_QWORD*)(a1 + 48), (__int64)v15, v18))
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
					}
				}
			}
			if (v14[13] + 1 != (unsigned int)((__int64)(v15[5] - v15[4]) >> 3))
				break;
			v20 = v6 - 16;
			v14[13] = 0;
			if (v6 == 16)
				goto LABEL_42;
			v21 = *(_BYTE*)(v20 + 2);
			if ((v21 & 1) != 0)
			{
				if ((v21 & 2) != 0)
					goto LABEL_42;
				if ((*(_WORD*)v20)-- != 1)
					goto LABEL_42;
			}
			v5 = 1;
			v24 = 1;
		LABEL_15:
			v11 = *(_QWORD*)(a1 + 16);
			v12 = *(_QWORD*)(v3 + 8);
			if ((*(_DWORD*)(*(_QWORD*)(v11 - 24) + 56i64) & 0xFFFFFFFD) == 0)
			{
				v13 = *(_QWORD*)(v11 - 8);
				if (v13)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 8i64))(v13, v7);
			}
			*(_QWORD*)(a1 + 16) -= 24i64;
			if (!v12)
				return 2i64;
		}
		++v14[13];
	LABEL_42:
		LOWORD(v7) = v14[13];
	LABEL_43:
		v3 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8i64 * (unsigned __int16)v7);
		if (!v3)
			return 2i64;
	}
	v23 = *(_DWORD*)(v3 + 32);
	*(_DWORD*)(a1 + 32) = v23;
	*(_BYTE*)(a1 + 40) = v23 != 0;
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(v3 + 16);
	*(_WORD*)(a1 + 74) = *(_WORD*)(v3 + 20);
	return 1i64;
}
// 140896FF0: variable 'v7' is possibly undefined

