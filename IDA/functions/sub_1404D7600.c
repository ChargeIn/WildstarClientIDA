//----- (00000001404D7600) ----------------------------------------------------
__int64 __fastcall sub_1404D7600(__int64 a1)
{
	__int64 v1; // rsi
	unsigned int v3; // ebx
	__int64 v4; // rax
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // edx
	int v10; // eax
	int v11; // eax
	int v12; // eax
	int v13; // eax
	int v14; // edx
	__m128* v15; // rax
	__m128* v16; // rbp
	int v17; // r14d
	int v18; // eax
	__int64 v19; // rcx

	v1 = *(_QWORD*)(a1 + 120);
	v3 = 0;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 608i64))(qword_140C65670))
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 40i64))(
			*(_QWORD*)(a1 + 30088),
			*(unsigned int*)(v4 + 8),
			HIDWORD(*(_QWORD*)(v4 + 8)));
	}
	sub_1404D7830(a1);
	if (!v1)
		goto LABEL_44;
	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088)))
	{
		*(_OWORD*)(a1 + 30128) = 0i64;
		*(_OWORD*)(a1 + 30144) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 25744);
	if (v5 && (v6 = *(_DWORD*)(v5 + 264)) != 0)
	{
		v7 = sub_1403D90D0(a1, v6);
		if (!v7)
			goto LABEL_20;
		if ((*(_BYTE*)(v7 + 36) & 1) != 0 || !sub_140466B90(v1, v7))
		{
		LABEL_16:
			v3 = 4;
			goto LABEL_20;
		}
		v8 = *(_QWORD*)(a1 + 25744);
		v9 = 0;
		if (v8)
			v9 = *(_DWORD*)(v8 + 264);
		v10 = sub_14045A950(v1, v9);
		if (v10)
		{
			v11 = v10 - 1;
			if (v11)
			{
				if (v11 != 1)
					goto LABEL_20;
				goto LABEL_16;
			}
			v3 = 8;
		}
		else
		{
			v3 = 2;
		}
	}
	else
	{
		v3 = 1;
	}
LABEL_20:
	v12 = *(_DWORD*)(v1 + 440);
	if (v12 == 1)
	{
		v3 |= 0x80u;
	}
	else if (v12 == 2)
	{
		v3 |= 0x100u;
	}
	if ((*(_BYTE*)(v1 + 4208) & 0x40) != 0)
		v3 |= 0x20u;
	if (*(_DWORD*)(v1 + 4232) == 1)
		v3 |= 0x40u;
	v13 = *(_DWORD*)(v1 + 4896);
	if (v13 == 4)
		v3 |= 0x10u;
	if (v13 == 5)
		v3 |= 0x200u;
	if ((unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)))
		v3 |= 0x1000u;
	v14 = *(_DWORD*)(a1 + 25796);
	if (v14)
	{
		v15 = (__m128*)sub_1403D90D0(a1, v14);
		v16 = v15;
		if (v15)
		{
			sub_14046C300(v15, 0, 0);
			v17 = *(_DWORD*)v16[400].m128_u64[1];
			if (v17 != 101)
				v3 |= 0x400u;
			v18 = sub_14045A950(v1, v16->m128_i32[2]);
			if (!v18)
			{
				v3 &= ~0x400u;
			LABEL_43:
				v3 |= 0x800u;
				goto LABEL_44;
			}
			if (v18 == 1 && v17 == 101)
				goto LABEL_43;
		}
	}
LABEL_44:
	v19 = *(_QWORD*)(a1 + 30088);
	*(_DWORD*)(a1 + 30160) = v3;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 376i64))(v19, v3);
}
// 140C65670: using guessed type __int64 qword_140C65670;

