//----- (0000000140538A10) ----------------------------------------------------
void __fastcall sub_140538A10(__int64* a1)
{
	unsigned __int64 v1; // rbx
	__int64 v3; // rdi
	__int64 v4; // rbp
	__int64 v5; // rcx
	__int64 v6; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		v3 = 0i64;
		do
		{
			v4 = *a1;
			v5 = *(_QWORD*)(*a1 + v3 + 72);
			if (v5)
				sub_14018B900(v5, 0);
			v6 = *(_QWORD*)(v4 + v3 + 40);
			if (v6)
				sub_14018B900(v6, 0);
			++v1;
			v3 += 96i64;
		} while (v1 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
}

