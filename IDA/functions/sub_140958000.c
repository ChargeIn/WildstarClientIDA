//----- (0000000140958000) ----------------------------------------------------
__int64 __fastcall sub_140958000(char* a1, unsigned int a2)
{
	_DWORD* StackBase; // rdi
	int v4; // ebp
	const __m128i* v5; // rbx
	int v6; // eax
	__int64 v7; // rsi
	const __m128i* v9; // [rsp+50h] [rbp+8h] BYREF
	__int64 v10; // [rsp+60h] [rbp+18h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (a1)
	{
		sub_14018D320((int**)&v9, a1);
		v5 = v9;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = sub_1401B5B50(*(__int64*)&qword_140C63788, v5, a2, 3, &v10);
	v7 = v10;
	if (v6 < 0)
		v7 = 0i64;
	if (v5)
		(*(void(__fastcall**)(const __m128i*))(v5[-1].m128i_i64[0] + 8))(v5 - 1);
	*(StackBase - 1) = v4;
	return v7;
}

