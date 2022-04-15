//----- (00000001402CE560) ----------------------------------------------------
void __fastcall sub_1402CE560(_QWORD* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rsi

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			sub_1402CF790((_QWORD*)(v3 + *a1));
			++v1;
			v3 += 416i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		(**(void(__fastcall***)(__int64))(*a1 - 16i64))(*a1 - 16i64);
}

