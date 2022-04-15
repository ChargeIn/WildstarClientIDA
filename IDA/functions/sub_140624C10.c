//----- (0000000140624C10) ----------------------------------------------------
void __fastcall sub_140624C10(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v7; // [rsp+20h] [rbp-38h] BYREF
	int v8[3]; // [rsp+28h] [rbp-30h] BYREF
	__int64 v9; // [rsp+34h] [rbp-24h]
	__int64 v10; // [rsp+3Ch] [rbp-1Ch]
	int v11; // [rsp+44h] [rbp-14h]
	int v12; // [rsp+78h] [rbp+20h] BYREF

	if (!a4)
	{
		sub_1406257A0(a6, 2017i64, &v12, &v7);
		if (v12)
		{
			v8[0] = v12;
			v8[1] = 0;
			v9 = 0i64;
			v10 = 0i64;
			v8[2] = 1065353216;
			v11 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v8);
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 648i64))(a1, v7, a6);
		}
		else
		{
			sub_140622B70(a6);
		}
	}
}
// 1406257A0: using guessed type __int64 __fastcall sub_1406257A0(_QWORD, _QWORD, _QWORD, _QWORD);

