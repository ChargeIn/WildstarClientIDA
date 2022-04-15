//----- (000000014057EE50) ----------------------------------------------------
void __fastcall sub_14057EE50(__int64 a1, unsigned int a2)
{
	int v3; // eax
	int v5; // r8d
	_DWORD* v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // [rsp+30h] [rbp-38h]
	__int64 v9; // [rsp+40h] [rbp-28h] BYREF
	__int64 v10; // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp-18h]

	v3 = 200;
	if (*(_DWORD*)(a1 + 16) == 1)
		v3 = 100;
	v5 = a2 - v3;
	if ((int)(a2 - v3) >= 0
		&& v5 < *(_DWORD*)(a1 + 632)
		&& (v6 = *(_DWORD**)(*(_QWORD*)(a1 + 624) + 8i64 * v5)) != 0i64
		&& *v6)
	{
		v7 = qword_140C65898;
		*(_DWORD*)(a1 + 640) = a2;
		sub_1400EA3E0(*(_QWORD*)(v7 + 29504), "GuildBankTab", byte_1409EA5CC);
	}
	else
	{
		v9 = 0i64;
		v10 = 0i64;
		v11 = a2;
		LODWORD(v8) = *(_DWORD*)(qword_140C635F0 + 5760);
		v10 = *(_QWORD*)a1;
		v9 = v8;
		sub_1403F4900(qword_140C65898, 0x477u, (__int64)&v9);
	}
}
// 14057EF0F: variable 'v8' is possibly undefined
// 1409EA5CC: using guessed type _BYTE byte_1409EA5CC[24];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

