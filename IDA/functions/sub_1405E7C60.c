//----- (00000001405E7C60) ----------------------------------------------------
void __fastcall sub_1405E7C60(__int64 a1, int a2)
{
	bool v2; // zf
	int v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	void(__fastcall * v6)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		v2 = *(_QWORD*)(a1 + 88) == 0i64;
		*(_DWORD*)(a1 + 64) = a2;
		if (!v2)
			sub_140195D70(a1 + 72);
		v4 = 0;
		v5 = sub_14001C280(a1);
		v7 = 0i64;
		v6 = sub_14029EA70;
		sub_140195960(a1 + 72, dword_140C6664C, (__int64)&v4, 4);
	}
}
// 140C6664C: using guessed type int dword_140C6664C;

