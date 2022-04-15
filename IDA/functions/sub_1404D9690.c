//----- (00000001404D9690) ----------------------------------------------------
void __fastcall sub_1404D9690(__m128* a1, __int64 a2, double a3, double a4, __int64 a5)
{
	unsigned __int64 v5; // rax
	int v7; // edi
	__int64 v8; // rax

	v5 = a1[7].m128_u64[1];
	if (!v5 || *(_DWORD*)(v5 + 592) || a1[1652].m128_i32[2] || sub_1404DAF50(qword_140C65898))
	{
		sub_1404D9450(a1, 1u, a3, a4, a5);
	}
	else
	{
		v7 = a1[1612].m128_i32[1];
		sub_14055B0E0((__int64)a1, v7, a3, a4);
		if (v7)
		{
			v8 = sub_1403D90D0((__int64)a1, v7);
			if (v8)
			{
				if (*(_DWORD*)(v8 + 592))
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C89D98 + 64i64))(qword_140C89D98);
				else
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C89D88 + 64i64))(qword_140C89D88);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C89D88: using guessed type __int64 qword_140C89D88;
// 140C89D98: using guessed type __int64 qword_140C89D98;

