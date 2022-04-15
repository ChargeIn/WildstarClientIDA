//----- (00000001405F2370) ----------------------------------------------------
void __fastcall sub_1405F2370(__int64 a1, __int64 a2, int a3)
{
	__m128* v5; // rax

	if (!a3 && !*(_DWORD*)(a2 + 96))
	{
		v5 = (__m128*)sub_1404CB460(a1 + 184, a2 + 60);
		if (!v5 || !*(_QWORD*)(qword_140C65898 + 25744) || (int)sub_140486340((__int64*)a2, v5) < 0)
		{
			*(_QWORD*)(a1 + 144) = 0i64;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

