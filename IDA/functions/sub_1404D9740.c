//----- (00000001404D9740) ----------------------------------------------------
void __fastcall sub_1404D9740(__m128* a1, __int64 a2, double a3, double a4, __int64 a5)
{
	unsigned __int64 v5; // rax
	int v6; // edx

	v5 = a1[7].m128_u64[1];
	if (!v5 || *(_DWORD*)(v5 + 592) || a1[1652].m128_i32[2])
	{
		sub_1404D9450(a1, 1u, a3, a4, a5);
	}
	else
	{
		v6 = a1[1612].m128_i32[1];
		if (v6)
		{
			sub_14055B0E0((__int64)a1, v6, a3, a4);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89D98 + 64i64))(qword_140C89D98, 0i64);
		}
	}
}
// 140C89D98: using guessed type __int64 qword_140C89D98;

