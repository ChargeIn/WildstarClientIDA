//----- (0000000140863540) ----------------------------------------------------
__int64 __fastcall sub_140863540(__int64 a1, __int64* a2, unsigned int a3)
{
	__int64 v4; // r12
	int v6; // edi
	__int64 v7; // r9
	unsigned int v8; // ebx
	int v9; // edx
	__int64 v10; // r14
	void(__fastcall * **v11)(_QWORD, _QWORD); // rsi
	int v12; // ebx
	__int64 v13; // rax
	int v14; // esi
	__int64 v15; // rax
	__int64 v16; // rax
	char v17; // al
	__int64 v18; // rcx
	int v19; // eax
	int v20; // edx
	int i; // ecx
	__int64 v22; // rcx
	__int64 v23; // r9
	__int64 v24; // r8
	char v26[8]; // [rsp+30h] [rbp-48h] BYREF
	char v27[8]; // [rsp+38h] [rbp-40h] BYREF
	__int64 v28; // [rsp+40h] [rbp-38h] BYREF
	char v29; // [rsp+48h] [rbp-30h]
	int v30; // [rsp+98h] [rbp+20h] BYREF
	unsigned int v31; // [rsp+9Ch] [rbp+24h]

	v4 = a3;
	sub_140862D80(a1, a3);
	v6 = 0;
	v28 = 0i64;
	sub_14085CEB0(a2, (unsigned int)v4, &v28);
	v7 = v28;
	if (!v28)
	{
		v8 = 1;
		goto LABEL_24;
	}
	v9 = *(_DWORD*)(v28 + 32);
	v10 = a1 + 8 * (v4 + 4 * v4 + 111);
	*(_DWORD*)v10 = v9;
	v8 = sub_14082FAF0((__int64)&off_140C10F70, v9, (__int64*)(v10 + 16));
	if (v8 == 1)
	{
		(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(v10 + 16) + 24i64))(*(_QWORD*)(v10 + 16), v26);
		if (!v26[4])
		{
			(*(void(__fastcall**)(_QWORD, __int64(__fastcall***)()))(**(_QWORD**)(v10 + 16) + 8i64))(
				*(_QWORD*)(v10 + 16),
				&off_140C10F70);
			v11 = *(void(__fastcall****)(_QWORD, _QWORD))(v10 + 24);
			*(_QWORD*)(v10 + 16) = 0i64;
			if (v11)
			{
				v12 = dword_140C10F28;
				(**v11)(v11, 0i64);
				sub_140881720(v12, (__int64)v11);
				*(_QWORD*)(v10 + 24) = 0i64;
			}
			v8 = 2;
			goto LABEL_23;
		}
		v13 = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)()))(**(_QWORD**)(v28 + 40) + 16i64))(
			*(_QWORD*)(v28 + 40),
			&off_140C10F70);
		*(_QWORD*)(v10 + 8) = v13;
		if (v13)
		{
			sub_140857D10(v28, v13, 0i64);
			v15 = sub_1408819F0(dword_140C10F28, 56i64);
			if (v15)
				v16 = sub_140861FE0(v15, a1, v4, a2);
			else
				v16 = 0i64;
			*(_QWORD*)(v10 + 24) = v16;
			v14 = 2;
			if (v16)
			{
				v17 = v29;
				*(_BYTE*)(v10 + 32) &= ~1u;
				v18 = *(_QWORD*)(v10 + 16);
				*(_BYTE*)(v10 + 32) |= v17 & 1;
				v19 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v18 + 24i64))(v18, v27);
				v14 = v19;
				if (v27[5])
				{
					v14 = 2;
				}
				else if (v19 == 1)
				{
					v20 = *(_DWORD*)(a1 + 856);
					for (i = v20; i; i &= i - 1)
						++v6;
					v22 = *(_QWORD*)(v10 + 16);
					v23 = *(_QWORD*)(v10 + 8);
					v24 = *(_QWORD*)(v10 + 24);
					v30 = dword_140C110B4;
					v31 = v20 & 0x3FFFF | (v6 << 26) & 0x1F000000 | 0xA0800000;
					v14 = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)(), __int64, __int64, int*))(*(_QWORD*)v22 + 48i64))(
						v22,
						&off_140C10F70,
						v24,
						v23,
						&v30);
					if (v14 == 1)
					{
						v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 16) + 16i64))(*(_QWORD*)(v10 + 16));
						if (v14 == 1)
							goto LABEL_22;
					}
				}
			}
		}
		else
		{
			v14 = 2;
		}
		sub_140862D80(a1, v4);
	LABEL_22:
		v8 = v14;
	}
LABEL_23:
	v7 = v28;
LABEL_24:
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	return v8;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C110B4: using guessed type int dword_140C110B4;

