//----- (0000000140636840) ----------------------------------------------------
__int64 __fastcall sub_140636840(__int64 a1, int** a2)
{
	__int64 v2; // rsi
	int* v3; // rbx

	v2 = qword_140C65C20;
	*(_QWORD*)(qword_140C65C20 + 328) = 0i64;
	sub_14063A760((__int64*)(v2 + 320), a2[1], *(unsigned int*)a2);
	sub_14063A8F0((__int64*)(v2 + 320));
	v3 = *(int**)(v2 + 320);
	if (v3 != &v3[5 * *(_QWORD*)(v2 + 328)])
	{
		do
		{
			sub_14063A0E0(v2, v3);
			v3 += 5;
		} while (v3 != (int*)(*(_QWORD*)(v2 + 320) + 20i64 * *(_QWORD*)(v2 + 328)));
	}
	return 0i64;
}
// 140C65C20: using guessed type __int64 qword_140C65C20;

