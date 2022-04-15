//----- (00000001403762E0) ----------------------------------------------------
__int64 __fastcall sub_1403762E0(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // edi
	__int64 v3; // rbx
	bool v4; // zf
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rdx

	v1 = a1 - 8;
	v2 = *(_DWORD*)(a1 - 8) - 1;
	if (v2 >= 0)
	{
		v3 = a1 + 32i64 * *(int*)(a1 - 8) + 16;
		do
		{
			v4 = *(_QWORD*)(v3 - 48) == 0i64;
			v3 -= 32i64;
			if (!v4)
			{
				if (*(_QWORD*)v3)
					**(_QWORD**)v3 = *(_QWORD*)(v3 + 8);
				v5 = *(_QWORD*)(v3 + 8);
				if (v5)
					*(_QWORD*)(v5 + 16) = *(_QWORD*)v3;
				v6 = *(_QWORD*)(v3 - 16);
				*(_QWORD*)v3 = 0i64;
				*(_QWORD*)(v3 + 8) = 0i64;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			}
			if (*(_QWORD*)v3)
				**(_QWORD**)v3 = *(_QWORD*)(v3 + 8);
			v7 = *(_QWORD*)(v3 + 8);
			if (v7)
				*(_QWORD*)(v7 + 16) = *(_QWORD*)v3;
			--v2;
			*(_QWORD*)v3 = 0i64;
			*(_QWORD*)(v3 + 8) = 0i64;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

