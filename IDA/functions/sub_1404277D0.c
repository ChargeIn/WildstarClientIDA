//----- (00000001404277D0) ----------------------------------------------------
__int64 __fastcall sub_1404277D0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	int v8; // eax
	int v10; // [rsp+20h] [rbp-28h]
	int v11; // [rsp+28h] [rbp-20h]
	int v12; // [rsp+38h] [rbp-10h]
	int v13; // [rsp+58h] [rbp+10h] BYREF
	int v14; // [rsp+5Ch] [rbp+14h]

	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a3 + 32i64))(a3, &v13);
	v12 = a4;
	v8 = 200;
	if (*(_DWORD*)(a2 + 16) == 1)
		v8 = 100;
	v11 = v14 + 1;
	v10 = v13 - v8 + 1;
	return sub_1400EA3E0(a1, "GuildBankItem", "ZiiOb", a2, v10, v11, a3, v12);
}

