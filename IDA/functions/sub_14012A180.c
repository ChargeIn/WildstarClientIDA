//----- (000000014012A180) ----------------------------------------------------
void __fastcall sub_14012A180(__int64 a1)
{
	unsigned __int64 i; // rdi
	_BYTE** v3; // rsi
	__int64 v4; // rcx
	unsigned __int64 j; // rdi
	_QWORD* v6; // rsi
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-18h]

	for (i = 0i64; i < *(_QWORD*)(a1 + 864); ++i)
	{
		v3 = *(_BYTE***)(*(_QWORD*)(a1 + 856) + 8 * i);
		if (v3)
		{
			if (*v3)
			{
				v4 = *((_QWORD*)*v3 + 2);
				if (v4)
				{
					LODWORD(v9) = *(_DWORD*)(a1 + 776) >= 0;
					sub_1400EA3E0(v4, v3[2], "Xb", a1, v9);
					sub_1400EC370(*((_QWORD*)*v3 + 2), v3[2]);
				}
			}
		}
	}
	for (j = 0i64; j < *(_QWORD*)(a1 + 864); ++j)
	{
		v6 = *(_QWORD**)(*(_QWORD*)(a1 + 856) + 8 * j);
		if (*v6)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
			*v6 = 0i64;
		}
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 856) + 8 * j);
		if (v7)
		{
			v8 = *(_QWORD*)(v7 + 16);
			if (v8)
				sub_14018B900(v8, 0);
			sub_14018B900(v7, 0);
		}
	}
	*(_QWORD*)(a1 + 864) = 0i64;
}
// 14012A1EE: variable 'v9' is possibly undefined

