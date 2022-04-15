//----- (00000001400D23B0) ----------------------------------------------------
__int64 __fastcall sub_1400D23B0(__int64 a1, int* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	char v8; // al
	int* v10; // rcx
	int v11; // eax
	int v12; // [rsp+20h] [rbp-18h]
	int v13; // [rsp+28h] [rbp-10h]
	int v14; // [rsp+40h] [rbp+8h]
	int v15; // [rsp+44h] [rbp+Ch]
	int v16; // [rsp+48h] [rbp+10h] BYREF
	int v17; // [rsp+4Ch] [rbp+14h]

	*(_DWORD*)(a1 + 848) = *a2;
	*(_DWORD*)(a1 + 852) = a2[1];
	if (*(char*)(a1 + 28) < 0)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, a1 + 848);
		sub_1400E6730(*(_QWORD*)(a1 + 32), (_QWORD*)a1);
	}
	if ((*(_BYTE*)(a1 + 656) & 2) != 0)
	{
		v4 = *(_QWORD*)(a1 + 472);
		if (v4 && sub_1400C4EE0(v4, a2))
			sub_1400CAC90((_QWORD*)a1);
		v5 = *(_QWORD*)(a1 + 472);
		if (v5)
		{
			if ((*(_BYTE*)(v5 + 1392) & 4) != 0)
				return 0i64;
		}
	}
	if ((*(_BYTE*)(a1 + 656) & 4) != 0)
	{
		v6 = *(_QWORD*)(a1 + 464);
		if (v6 && sub_1400C4EE0(v6, a2))
			sub_1400CAE90((_QWORD*)a1);
		v7 = *(_QWORD*)(a1 + 464);
		if (v7)
		{
			if ((*(_BYTE*)(v7 + 1392) & 4) != 0)
				return 0i64;
		}
	}
	v8 = *(_BYTE*)(a1 + 29);
	if ((v8 & 8) != 0 || (v8 & 0x10) != 0 || (v8 & 0x20) != 0 || (v8 & 0x40) != 0)
	{
		v10 = *(int**)(*(_QWORD*)(a1 + 32) + 2832i64);
		v14 = *v10;
		v15 = v10[1];
		v11 = *v10 - *(_DWORD*)(a1 + 856);
		v17 = v15 - *(_DWORD*)(a1 + 860);
		v16 = v11;
		sub_1400CBE10(a1, &v16);
		*(_DWORD*)(a1 + 856) = v14;
		*(_DWORD*)(a1 + 860) = v15;
		return 0i64;
	}
	if (*(char*)(a1 + 28) < 0)
	{
		v13 = *(_DWORD*)(a1 + 852);
		v12 = *(_DWORD*)(a1 + 848);
		sub_1400D4070(a1, 0x36u, (char*)a1, byte_1409D3014, v12, v13);
	}
	return 1i64;
}
// 1409D3014: using guessed type _BYTE byte_1409D3014[24];

