//----- (0000000140860EA0) ----------------------------------------------------
char __fastcall sub_140860EA0(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
	char v4; // al
	char result; // al
	__int64 v7; // rbx
	__int64* v8; // rdx
	__int64(__fastcall * **v9)(_QWORD, __int64, __int64, __int64); // r14
	__int64 v10; // rax
	__int64(__fastcall * *v11)(__int64, _QWORD, _QWORD, _QWORD); // r9
	__int64 v12; // rdi
	__int64 v13; // r8
	__int64 v14; // r9
	__int64* v15; // rdx
	__int64 v16; // [rsp+40h] [rbp-38h] BYREF
	__int64 v17; // [rsp+48h] [rbp-30h]
	int v18; // [rsp+50h] [rbp-28h]
	int v19; // [rsp+54h] [rbp-24h]
	__int64 v20; // [rsp+58h] [rbp-20h]
	__int16 v21; // [rsp+60h] [rbp-18h]

	v4 = *(_BYTE*)(a1 + 381);
	if ((v4 & 0x40) != 0 || *(_QWORD*)(a1 + 136) && (*(_BYTE*)(a1 + 144) & 2) != 0)
		return (**(__int64(__fastcall***)(__int64, _QWORD, _QWORD, _QWORD))a1)(a1, 0i64, 0i64, 0i64);
	result = v4 | 0x20;
	*(_BYTE*)(a1 + 381) = result;
	if (*(_DWORD*)a2)
	{
		v7 = *a2;
		v8 = *(__int64**)(a1 + 128);
		if (v8)
		{
			return sub_14083AB80(qword_140C61B70, v8, 0x2000000i64, 0.0, v7, SHIDWORD(v7), 0);
		}
		else
		{
			v9 = (__int64(__fastcall***)(_QWORD, __int64, __int64, __int64))(a1 + 16);
			v18 = *(_DWORD*)(a1 + 296);
			v19 = 0;
			v16 = a1 + 16;
			v17 = 0x2000000i64;
			v20 = v7;
			v21 = 256;
			v10 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v16, 1, 0);
			v11 = *(__int64(__fastcall***)(__int64, _QWORD, _QWORD, _QWORD))a1;
			*(_BYTE*)(a1 + 144) |= 1u;
			*(_BYTE*)(a1 + 383) &= ~0x80u;
			v12 = v10;
			*(_QWORD*)(a1 + 128) = v10;
			result = ((__int64(__fastcall*)(__int64, __int64, _QWORD))v11[16])(a1, 14i64, (unsigned int)v7);
			if (!v12)
			{
				LOBYTE(v14) = 1;
				return (**v9)(v9, v17, v13, v14);
			}
		}
	}
	else if ((*(_BYTE*)(a1 + 378) & 0x78) != 0)
	{
		v15 = *(__int64**)(a1 + 128);
		if (v15)
		{
			return sub_14083AB80(qword_140C61B70, v15, 0x2000000i64, 0.0, 0, 4, 0);
		}
		else if ((_BYTE)a3)
		{
			if (*(char*)(a1 + 382) >= 0)
			{
				*(_DWORD*)(a1 + 296) = 0;
				*(_DWORD*)(a1 + 204) = 0;
			}
			LOBYTE(a3) = 1;
			return (**(__int64(__fastcall***)(__int64, _QWORD, __int64, _QWORD))a1)(a1, 0i64, a3, 0i64);
		}
	}
	else
	{
		LOBYTE(a4) = 1;
		return (**(__int64(__fastcall***)(__int64, _QWORD, _QWORD, __int64))a1)(a1, 0i64, 0i64, a4);
	}
	return result;
}
// 140860FB7: variable 'v13' is possibly undefined
// 140860FB7: variable 'v14' is possibly undefined
// 140C61B70: using guessed type __int64 qword_140C61B70;

