//----- (000000014086F950) ----------------------------------------------------
__int64 __fastcall sub_14086F950(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rsi
	int v4; // ebp
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 168);
	if (v1 == *(_QWORD*)(a1 + 176))
	{
		*(_QWORD*)(a1 + 176) = v1;
	}
	else
	{
		do
		{
			v3 = *(_QWORD*)(v1 + 8);
			v4 = dword_140C10F20;
			if (v3)
			{
				sub_1408562D0(*(_QWORD*)(v1 + 8));
				sub_140881720(v4, v3);
			}
			v1 += 16i64;
		} while (v1 != *(_QWORD*)(a1 + 176));
		result = *(_QWORD*)(a1 + 168);
		*(_QWORD*)(a1 + 176) = result;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

