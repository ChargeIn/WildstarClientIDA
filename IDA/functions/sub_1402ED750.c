//----- (00000001402ED750) ----------------------------------------------------
void __fastcall sub_1402ED750(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rdi
	__int64 v3; // rsi
	__int64* v4; // rbx
	int i; // edi

	v1 = *(_QWORD*)(a1 + 8);
	if (v1)
	{
		v2 = *(int*)(v1 - 8);
		v3 = v1 - 8;
		v4 = (__int64*)(v1 + 160 * v2);
		for (i = v2 - 1; i >= 0; --i)
		{
			v4 -= 20;
			sub_1402EE5B0(v4);
		}
		sub_14018B900(v3, 0);
	}
}

