//----- (00000001402ED7D0) ----------------------------------------------------
void __fastcall sub_1402ED7D0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rsi
	int v3; // edi
	__int64* v4; // rbx
	__int64 v5; // rcx

	v1 = *(_QWORD*)(a1 + 8);
	if (v1)
	{
		v2 = v1 - 8;
		v3 = *(_DWORD*)(v1 - 8) - 1;
		if (v3 >= 0)
		{
			v4 = (__int64*)(v1 + 32i64 * *(int*)(v1 - 8) + 24);
			do
			{
				v5 = *(v4 - 5);
				v4 -= 4;
				sub_14018B900(v5, 0);
				sub_14018B900(*v4, 0);
				--v3;
			} while (v3 >= 0);
		}
		sub_14018B900(v2, 0);
	}
}

