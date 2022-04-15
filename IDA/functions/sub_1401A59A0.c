//----- (00000001401A59A0) ----------------------------------------------------
void __fastcall sub_1401A59A0(__int64 a1)
{
	__int64* v2; // rbx
	__int64* v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi

	if (*(_QWORD*)(a1 + 48))
	{
		do
		{
			v2 = *(__int64**)(a1 + 48);
			*(_QWORD*)(a1 + 48) = v2[9];
			v3 = *(__int64**)(a1 + 56);
			if (v2 == v3)
				*(_QWORD*)(a1 + 56) = v3[8];
			v4 = v2[8];
			if (v4)
				*(_QWORD*)(v4 + 72) = v2[9];
			v5 = v2[9];
			if (v5)
				*(_QWORD*)(v5 + 64) = v2[8];
			v6 = *v2;
			v7 = v2[10];
			v2[2] = 0i64;
			(*(void(__fastcall**)(__int64*, _QWORD))(v6 + 120))(v2, 0i64);
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v7 + 24i64))(v7, v2);
		} while (*(_QWORD*)(a1 + 48));
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
	}
}

