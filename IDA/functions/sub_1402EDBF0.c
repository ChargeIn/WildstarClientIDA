//----- (00000001402EDBF0) ----------------------------------------------------
__int64 __fastcall sub_1402EDBF0(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rcx

	v1 = a1 - 16;
	v2 = *(_DWORD*)(a1 - 16) - 1;
	if (v2 >= 0)
	{
		v3 = a1 + 112i64 * *(int*)(a1 - 16) + 104;
		do
		{
			v4 = *(_QWORD*)(v3 - 112);
			v3 -= 112i64;
			sub_14018B900(v4, 0);
			--v2;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

