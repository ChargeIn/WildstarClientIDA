//----- (000000014088D9D0) ----------------------------------------------------
__int64 __fastcall sub_14088D9D0(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned __int64 v5; // rbp
	int v6; // r14d
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	char v11[264]; // [rsp+30h] [rbp-138h] BYREF
	__int64 v12[3]; // [rsp+138h] [rbp-30h] BYREF
	__int64 v13; // [rsp+150h] [rbp-18h]
	char v14; // [rsp+158h] [rbp-10h]

	v5 = a3;
	sub_140890370((__int64)v11, *(_QWORD*)(a1 + 16), 0);
	if (v12[0])
	{
		v6 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 32i64) & 0xFF00;
		sub_1408907B0((__int64)v11, a2, v5, v6, *(_DWORD*)(a1 + 48));
		while (!v14)
		{
			v7 = sub_1408904A0((__int64)v11, 0);
			v8 = sub_14088FAE0(v12, a2 - v7);
			if (v8 >= v13)
				v9 = 0i64;
			else
				v9 = v13 - v8;
			if (v9 >= v5)
				break;
			(*(void(__fastcall**)(_QWORD, char*, _QWORD))(**(_QWORD**)(a1 + 16) + 96i64))(*(_QWORD*)(a1 + 16), v11, 0i64);
			sub_1408907B0((__int64)v11, a2, v5, v6, *(_DWORD*)(a1 + 48));
		}
	}
	return nullsub_1(v11);
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 14088D9D0: using guessed type __int64 var_30[3];

