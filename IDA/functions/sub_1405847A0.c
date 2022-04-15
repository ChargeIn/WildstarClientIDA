//----- (00000001405847A0) ----------------------------------------------------
void __fastcall sub_1405847A0(__int64 a1, int a2)
{
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v5)(); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]
	int v7; // [rsp+58h] [rbp+10h] BYREF

	if (a2)
	{
		if (*(_QWORD*)(a1 + 160))
			return;
		v4 = a1;
		v3 = 0;
		v6 = 0i64;
		v5 = sub_140584770;
		sub_140195960(a1 + 144, 120000, (__int64)&v3, 4);
	}
	v7 = a2;
	sub_1403F4740(qword_140C65898, 0x76Fu, (__int64)&v7);
}
// 140584770: using guessed type __int64 __fastcall sub_140584770();
// 140C65898: using guessed type __int64 qword_140C65898;

