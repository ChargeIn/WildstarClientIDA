//----- (00000001403FFC00) ----------------------------------------------------
_QWORD* __fastcall sub_1403FFC00(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* v3; // rsi
	__int64 v5; // rbx
	int** v6; // rdi
	int* v7; // rcx

	v3 = a3;
	v5 = a1;
	if (a1 != a2)
	{
		v6 = (int**)(a3 + 4);
		do
		{
			if (v3)
			{
				*(v6 - 1) = 0i64;
				*v6 = 0i64;
				v6[1] = 0i64;
				v7 = sub_14018B280(16i64, 0);
				*(v6 - 1) = v7;
				*v6 = v7;
				v6[1] = v7 + 4;
				if (v7)
					*(_WORD*)v7 = 0;
				if (*(_QWORD*)v5)
					(***(void(__fastcall****)(_QWORD))v5)(*(_QWORD*)v5);
				*v3 = *(_QWORD*)v5;
				*((_DWORD*)v6 - 6) = *(_DWORD*)(v5 + 8);
			}
			v5 += 48i64;
			v3 += 6;
			v6 += 6;
		} while (v5 != a2);
	}
	return v3;
}

