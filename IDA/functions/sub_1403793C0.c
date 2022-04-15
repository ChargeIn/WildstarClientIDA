//----- (00000001403793C0) ----------------------------------------------------
__int64 __fastcall sub_1403793C0(__int64 a1, __int64* a2, int a3, unsigned int a4, int a5)
{
	int v8; // eax
	int v9; // xmm0_4
	__int64 v10; // rax
	int v12; // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+24h] [rbp-24h]
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+2Ch] [rbp-1Ch]
	_QWORD v16[2]; // [rsp+34h] [rbp-14h]

	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 128i64) & 0x8000000) != 0)
	{
		v8 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
		v12 = a3;
		v15 = a4;
		*(_QWORD*)((char*)v16 + 4) = 0i64;
		v9 = 1065353216;
		v13 = (int)((double)v8 * 2.328306436538696e-10 * 4294967296.0);
		LODWORD(v16[0]) = a5;
		v10 = *a2;
	}
	else
	{
		v10 = *a2;
		v12 = a3;
		v9 = 0;
		v13 = 0;
		v15 = 0i64;
		LODWORD(v16[1]) = 0;
		v16[0] = 19i64;
	}
	v14 = v9;
	return (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(v10 + 584))(a2, 0i64, &v12);
}
// 140C77890: using guessed type __int64 qword_140C77890;

