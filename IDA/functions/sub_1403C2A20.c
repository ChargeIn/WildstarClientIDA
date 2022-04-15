//----- (00000001403C2A20) ----------------------------------------------------
__int64 __fastcall sub_1403C2A20(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v4; // rax
	__int64 v5; // rbx
	unsigned int v6; // edi
	__int64 v7; // rsi
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rdx
	__int64 v13; // rax
	unsigned __int64 v15; // rbp
	unsigned __int64 v16; // r12
	unsigned __int64 i; // rbx
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // r8
	__int64 v21; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v22; // [rsp+28h] [rbp-40h]
	__int64 v23; // [rsp+30h] [rbp-38h] BYREF
	__int64 v24; // [rsp+38h] [rbp-30h]
	unsigned __int64 v25; // [rsp+40h] [rbp-28h]

	v2 = qword_140C65898;
	if (*(_DWORD*)(qword_140C65898 + 26180) != 49)
		return 2147500037i64;
	v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(qword_140C65898 + 26176));
	if (!v4 || !*(_DWORD*)(v4 + 14040))
		return 2147500037i64;
	v5 = qword_140C65898;
	v6 = 0;
	v22 = 0i64;
	v21 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, &v21);
	sub_1403D6710(v5 + 184, &v21);
	sub_1403D6710(v5 + 280, &v21);
	sub_1403D6710(v5 + 304, &v21);
	v7 = v21;
	v8 = 0i64;
	if (a2)
	{
		v9 = *(int*)(a2 + 772);
		if (v9 < 0xA)
		{
			v10 = a2 + 8 * (v9 + 4 * v9 + 3);
			if (v10)
			{
				v11 = *(_QWORD*)(a2 + 616);
				v12 = *(_QWORD*)(v10 + 32);
				if (v11 < v12)
					v8 = v12 - v11;
			}
		}
	LABEL_9:
		v13 = 0i64;
		v23 = 0i64;
		v24 = 0i64;
		v25 = 0i64;
		if (a2)
			v13 = *(_QWORD*)a2;
		v25 = v8;
		v24 = v13;
		sub_1403F4900(v2, 0x14Cu, (__int64)&v23);
		goto LABEL_12;
	}
	v15 = v22;
	v16 = 0i64;
	for (i = 0i64; i < v15; ++i)
	{
		if ((unsigned int)sub_140569F10(*(_QWORD*)(v7 + 8 * i)))
		{
			v19 = *(_QWORD*)(v7 + 8 * i);
			v20 = *(_QWORD*)(v19 + 72);
			if (!v20)
				v20 = *(_QWORD*)(v19 + 64) + 8i64;
			v16 += sub_1403B54A0(v18, *(_QWORD*)(v19 + 64), v20, *(float*)(v19 + 132));
		}
	}
	v8 = *(_QWORD*)(v2 + 5624);
	if (v16 < v8)
		goto LABEL_9;
	v6 = -2147467259;
LABEL_12:
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	return v6;
}
// 1403C2BC0: variable 'v18' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

