//----- (00000001408996E0) ----------------------------------------------------
void __fastcall sub_1408996E0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // [rsp+20h] [rbp-18h] BYREF
	__int64 v4; // [rsp+24h] [rbp-14h]

	if ((*(_BYTE*)(a1 + 98) & 0xF) == 0)
	{
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 8i64) + 112i64) = 0i64;
		v2 = *(_QWORD*)(a1 + 160);
		v3 = 0;
		v4 = 4i64;
		sub_14088B940(*(_QWORD*)(v2 + 8), &v3);
	}
	sub_14088B5C0(a1);
}

