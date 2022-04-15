//----- (00000001401A48D0) ----------------------------------------------------
void __fastcall sub_1401A48D0(__int64 a1)
{
	float v1; // xmm0_4
	int v2; // [rsp+20h] [rbp-28h] BYREF
	__int64 v3; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v4)(); // [rsp+30h] [rbp-18h]
	__int64 v5; // [rsp+38h] [rbp-10h]

	v1 = *(float*)&dword_140C1E45C;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) - 4848i64) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 16) = 0i64;
	if (v1 >= 0.0)
	{
		v2 = 0;
		v3 = a1;
		v5 = 0i64;
		v4 = sub_1401A4870;
		sub_140195960(a1 + 24, 60000, (__int64)&v2, 4);
	}
}
// 1401A4870: using guessed type __int64 __fastcall sub_1401A4870();
// 140C1E45C: using guessed type int dword_140C1E45C;

