//----- (0000000140622CD0) ----------------------------------------------------
void __fastcall sub_140622CD0(__int64* a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v7; // rax
	int v8[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+2Ch] [rbp-1Ch]
	__int64 v10; // [rsp+34h] [rbp-14h]
	int v11; // [rsp+3Ch] [rbp-Ch]

	if (!a4
		&& a6
		&& !*(_DWORD*)(a6 + 676)
		&& !*(_DWORD*)(a6 + 684)
		&& (*(_DWORD*)(a6 + 968) || *(float*)(a6 + 596) > 0.0))
	{
		v8[2] = 1065353216;
		v8[1] = sub_1401AE6F0(0, -1);
		v9 = 0i64;
		v11 = 0;
		v7 = *a1;
		v8[0] = 547;
		v10 = 3i64;
		(*(void(__fastcall**)(__int64*, _QWORD, int*))(v7 + 584))(a1, 0i64, v8);
	}
}

