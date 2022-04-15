//----- (00000001401A4870) ----------------------------------------------------
void __fastcall sub_1401A4870(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rcx
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	void(__fastcall * v5)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 8);
	v4 = a1;
	v2 = a1 + 24;
	*(_QWORD*)(v2 - 8) = *(_QWORD*)(v1 - 4848);
	*(_QWORD*)(v1 - 4848) = *(_QWORD*)(v2 - 24);
	v3 = 0;
	v5 = sub_1401A48D0;
	v6 = 0i64;
	sub_140195960(v2, 0, (__int64)&v3, 4);
}

