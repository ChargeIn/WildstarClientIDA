//----- (00000001400E1480) ----------------------------------------------------
void __fastcall sub_1400E1480(__int64 a1)
{
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = 9;
	v3 = a1 + 456;
	do
	{
		v4 = *(_QWORD*)(v3 - 32);
		v3 -= 32i64;
		if (v4)
			sub_14018B900(v4, 0);
		--v2;
	} while (v2 >= 0);
	v5 = *(_QWORD*)(a1 + 104);
	if (v5)
		sub_14018B900(v5, 0);
	v6 = *(_QWORD*)(a1 + 72);
	if (v6)
		sub_14018B900(v6, 0);
}

