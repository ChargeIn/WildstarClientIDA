//----- (00000001401E0240) ----------------------------------------------------
__int64 __fastcall sub_1401E0240(__int64* a1, unsigned int a2, unsigned int a3, int a4)
{
	__int64 v7; // rax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v9 = sub_14020BD20(a3);
	v7 = *a1;
	v10 = a4;
	return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64*))(v7 + 72))(a1, a2, &v9);
}

