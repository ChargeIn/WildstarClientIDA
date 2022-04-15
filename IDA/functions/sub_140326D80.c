//----- (0000000140326D80) ----------------------------------------------------
void __fastcall sub_140326D80(_QWORD* a1)
{
	unsigned __int64 v1; // rsi
	__int64 v3; // rdi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v1 = 0i64;
	if (a1[1])
	{
		do
		{
			v3 = a1[2] + 8 * v1;
			while (*(_QWORD*)v3)
			{
				v4 = *(_QWORD*)v3;
				*(_QWORD*)v3 = *(_QWORD*)(*(_QWORD*)v3 + 8i64);
				v5 = *(_QWORD*)(v4 + 40);
				if (v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
				v6 = *(_QWORD*)(v4 + 24);
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
				sub_14018B900(v4, 0);
			}
			++v1;
		} while (v1 < a1[1]);
		*a1 = 0i64;
	}
	else
	{
		*a1 = 0i64;
	}
}

