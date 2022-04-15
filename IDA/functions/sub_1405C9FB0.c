//----- (00000001405C9FB0) ----------------------------------------------------
void __fastcall sub_1405C9FB0(__int64 a1)
{
	int v1; // [rsp+20h] [rbp-28h] BYREF
	__int64 v2; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v3)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v4; // [rsp+38h] [rbp-10h]

	if (!*(_QWORD*)(a1 + 416) && !*(_QWORD*)(a1 + 448))
	{
		v2 = a1;
		v1 = 0;
		v4 = 0i64;
		v3 = sub_1405CA010;
		sub_140195960(a1 + 432, 250, (__int64)&v1, 4);
	}
}

