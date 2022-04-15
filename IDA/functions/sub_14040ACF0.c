//----- (000000014040ACF0) ----------------------------------------------------
void __fastcall sub_14040ACF0(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdx
	unsigned __int64 i; // r8
	__int64 v5; // rax

	v3 = *(_QWORD*)(a1 + 256);
	for (i = 0i64; i < v3; ++i)
	{
		v5 = *(_QWORD*)(a1 + 248);
		if (*(_QWORD*)(v5 + 8 * i) == a2)
			*(_QWORD*)(v5 + 8 * i) = 0i64;
	}
	if (a2)
	{
		sub_140401490(a2);
		sub_14018B900(a2, 0);
	}
}

