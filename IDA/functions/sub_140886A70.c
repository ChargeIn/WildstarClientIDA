//----- (0000000140886A70) ----------------------------------------------------
char __fastcall sub_140886A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v8; // [rsp+38h] [rbp+10h] BYREF
	char v9; // [rsp+40h] [rbp+18h] BYREF

	LOBYTE(a4) = 1;
	v5 = (*(__int64(__fastcall**)(__int64, char*, __int64*, __int64))(*(_QWORD*)a2 + 32i64))(a2, &v9, &v8, a4);
	if (v5)
	{
		LOBYTE(v6) = v8 != 0;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a2 + 40i64))(a2, v5, 1i64, v6);
		LOBYTE(v5) = 1;
	}
	return v5;
}
// 140886AB3: variable 'v6' is possibly undefined

