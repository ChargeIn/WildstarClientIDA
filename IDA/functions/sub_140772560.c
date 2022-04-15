//----- (0000000140772560) ----------------------------------------------------
void __fastcall sub_140772560(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // rsi

	v2 = 0i64;
	if (*(_QWORD*)(a1 + 808))
	{
		do
		{
			v4 = *(_QWORD*)(a1 + 800);
			v5 = *(_QWORD*)(v4 + 8 * v2);
			if (v5)
			{
				sub_14076F7C0(*(_QWORD*)(v4 + 8 * v2), a2);
				sub_14018B900(v5, 0);
			}
			++v2;
		} while (v2 < *(_QWORD*)(a1 + 808));
		*(_QWORD*)(a1 + 808) = 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 808) = 0i64;
	}
}
// 140772593: variable 'a2' is possibly undefined

