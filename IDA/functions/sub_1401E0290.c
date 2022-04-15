//----- (00000001401E0290) ----------------------------------------------------
__int64 __fastcall sub_1401E0290(__int64* a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rax
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+28h] [rbp-10h]

	v4 = *a1;
	v6 = a3;
	v7 = a4;
	return (*(__int64(__fastcall**)(__int64*, __int64, __int64*))(v4 + 72))(a1, a2, &v6);
}

