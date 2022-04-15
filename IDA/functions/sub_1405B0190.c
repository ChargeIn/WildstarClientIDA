//----- (00000001405B0190) ----------------------------------------------------
void __fastcall sub_1405B0190(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	int v5; // eax
	int v6[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+2Ch] [rbp-1Ch]
	__int64 v8; // [rsp+34h] [rbp-14h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	if (!a4)
	{
		v5 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
		v6[0] = 1118;
		v6[1] = (int)((double)v5 * 2.328306436538696e-10 * 4294967296.0);
		v6[2] = 1065353216;
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v6);
	}
}
// 140C77890: using guessed type __int64 qword_140C77890;

