//----- (0000000140848CC0) ----------------------------------------------------
bool __fastcall sub_140848CC0(__int64 a1, __int64 a2)
{
	int v2; // edi
	__int64 v4; // rsi
	int v6; // eax
	char v7; // dl
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r9
	bool v11; // r12
	char v12; // al
	char v13; // r14
	char v14; // r15
	__int64 v15; // rdi
	__int64 v16; // rax
	__int64 v17; // rax
	float v18; // xmm0_4
	char v19; // cl
	float v20; // xmm0_4
	_BYTE* v21; // rcx
	int v22; // eax
	unsigned __int8 v23; // di
	int v24; // eax
	int v26; // eax
	int v27; // ecx
	int v28; // eax
	bool v29; // di
	int v30; // ecx
	bool v31; // zf
	char v32; // dl
	int v33; // [rsp+60h] [rbp+8h] BYREF
	bool v34; // [rsp+70h] [rbp+18h] BYREF

	v2 = *(_DWORD*)(a1 + 476);
	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 96i64))(v4);
	if (v6 != -1)
	{
		*(_BYTE*)(a2 + 61) = 1;
		if (!v6)
			goto LABEL_45;
	}
	*(_DWORD*)(a2 + 8) = v2;
	v7 = *(_BYTE*)(a1 + 92);
	*(_BYTE*)(a2 + 62) = v7;
	sub_140848120(a1, v7, v4, v2, &v34, &v33);
	v11 = v34;
	if (v34 || *(char*)(v4 + 382) < 0)
	{
		v12 = *(_BYTE*)(v4 + 381);
		if ((v12 & 0x10) != 0)
		{
			*(_BYTE*)(a2 + 61) = 1;
		}
		else if ((v12 & 0x40) != 0)
		{
			*(_BYTE*)(a2 + 60) = 1;
		}
	}
	v13 = v33;
	v14 = 1;
	*(_BYTE*)(a2 + 63) = v33;
	if (!v13)
	{
		v26 = *(_DWORD*)(a1 + 84);
		if (v26 == 2)
		{
			v14 = 0;
			if (*(_BYTE*)(a1 + 88))
			{
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(a1 + 704) + 32i64))(a1 + 704, *(unsigned int*)(a1 + 80));
				if (*(_DWORD*)(a1 + 80) != 2)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 704) + 16i64))(a1 + 704);
			}
			if (*(_DWORD*)(a1 + 80) == 1)
			{
				if (*(_DWORD*)(v4 + 408) < (int)*(unsigned __int16*)(a2 + 16))
				{
					v33 = *(unsigned __int16*)(a2 + 16);
					*(_DWORD*)(a2 + 56) = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(a1 + 704) + 24i64))(
						a1 + 704,
						&v33);
				}
				v27 = *(_DWORD*)(v4 + 408);
				if (v27 >= 0)
					*(_DWORD*)(v4 + 408) = v27 - *(unsigned __int16*)(a2 + 16);
			}
		}
		else if (v26 == 1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
			v14 = 0;
		}
		else
		{
			v13 = 1;
		}
		goto LABEL_58;
	}
	v15 = *(_QWORD*)(a1 + 96);
	if (v15)
	{
		while (*(_BYTE*)(v15 + 448))
		{
			v15 = *(_QWORD*)(v15 + 440);
			if (!v15)
				goto LABEL_13;
		}
	}
	else
	{
	LABEL_13:
		v16 = sub_140881960(dword_140C10F20, 464i64, 0x10u);
		v15 = v16;
		if (v16)
		{
			*(_QWORD*)(v16 + 432) = 0i64;
			*(_BYTE*)(v16 + 448) = 0;
			sub_1407E4830((int*)v16, 0i64, 0x180ui64);
			*(_QWORD*)(v15 + 384) = 0i64;
			*(_QWORD*)(v15 + 392) = 0i64;
			*(_QWORD*)(v15 + 400) = 0i64;
			*(_QWORD*)(v15 + 408) = 0i64;
			*(_QWORD*)(v15 + 416) = 0i64;
			*(_QWORD*)(v15 + 424) = 0i64;
			v17 = *(_QWORD*)(a1 + 96);
			if (v17)
			{
				*(_QWORD*)(v15 + 440) = v17;
				*(_QWORD*)(a1 + 96) = v15;
			}
			else
			{
				*(_QWORD*)(a1 + 96) = v15;
				*(_QWORD*)(v15 + 440) = 0i64;
			}
			++* (_DWORD*)(a1 + 104);
		}
	}
	if (v15)
	{
		v18 = *(float*)(v15 + 432);
		if (v18 >= 0.0)
		{
			if (v18 > 100.0)
				v18 = 100.0;
		}
		else
		{
			v18 = 0.0;
		}
		v19 = 1;
		*(_BYTE*)(a1 + 926) |= v18 != *(float*)(a1 + 916);
		*(float*)(a1 + 916) = v18;
		v20 = *(float*)(v15 + 436);
		if (v20 <= *(float*)(v4 + 240))
			v20 = *(float*)(v4 + 240);
		if (v20 >= 0.0)
		{
			if (v20 > 100.0)
				v20 = 100.0;
		}
		else
		{
			v20 = 0.0;
		}
		if (v20 == *(float*)(a1 + 1172))
			v19 = 0;
		*(_BYTE*)(a1 + 1182) |= v19;
		*(float*)(a1 + 1172) = v20;
	}
	v21 = *(_BYTE**)(a1 + 16);
	if (*(_BYTE*)(a1 + 88) && (v21[32] & 1) != 0 || *(_DWORD*)(a1 + 84) != 2)
		goto LABEL_58;
	if ((v21[32] & 1) == 0)
	{
		v22 = sub_140861310(v21);
		if (v22 == 63)
		{
			v13 = 0;
			v14 = 0;
		}
		else if (v22 != 1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
			v13 = 0;
			v14 = 0;
		}
		goto LABEL_58;
	}
	v23 = 0;
	v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 112i64))(v4, *(unsigned int*)(a1 + 80)) - 1;
	if (v24)
	{
		if (v24 == 1)
			goto LABEL_45;
	}
	else
	{
		v23 = 1;
	}
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)(a1 + 704) + 40i64))(
		a1 + 704,
		*(unsigned int*)(a1 + 80),
		v23) != 1)
	{
	LABEL_45:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
		return 0;
	}
LABEL_58:
	if (*(_BYTE*)(a1 + 93))
	{
		v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 112i64))(v4, *(unsigned int*)(a1 + 80));
		if (v28 == 1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
			*(_BYTE*)(a1 + 89) = 1;
		}
		else if (v28 == 2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
			v14 = 0;
		}
		*(_BYTE*)(a1 + 93) = 0;
	}
	v29 = v14 && *(_DWORD*)(v4 + 408) < (int)*(unsigned __int16*)(a2 + 16);
	v30 = *(_DWORD*)(v4 + 408);
	if (v30 >= 0)
		*(_DWORD*)(v4 + 408) = v30 - *(unsigned __int16*)(a2 + 16);
	if (*(_BYTE*)(a1 + 88))
	{
		if (!v13)
			sub_1408607A0(v4);
	}
	else if (v13)
	{
		LOBYTE(v8) = 1;
		sub_14085E190(v4, v8, v9, v10);
	}
	*(_BYTE*)(a1 + 88) = v13;
	if (v29)
	{
		v31 = *(_QWORD*)(a1 + 688) == 0i64;
		*(_BYTE*)(a1 + 89) = v11;
		if (v31)
		{
			if ((unsigned int)sub_140846F60(a1) == 1)
			{
				if ((*(_BYTE*)(v4 + 380) & 0x20) == 0)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 120i64))(v4);
				*(_DWORD*)(v4 + 464) = 1120534528;
				v32 = *(_BYTE*)(a2 + 62);
				*(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 476);
				sub_140848120(a1, v32, v4, *(_DWORD*)(a1 + 476), &v34, &v33);
			}
			else
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
				v29 = 0;
			}
		}
	}
	*(_BYTE*)(a1 + 90) = 1;
	return v29;
}
// 14084908E: variable 'v8' is possibly undefined
// 14084908E: variable 'v9' is possibly undefined
// 14084908E: variable 'v10' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

