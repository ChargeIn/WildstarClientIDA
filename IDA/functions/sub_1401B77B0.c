//----- (00000001401B77B0) ----------------------------------------------------
__int64 __fastcall sub_1401B77B0(__int64 a1, __int64* a2, __int64 a3)
{
	unsigned __int64 v5; // r12
	unsigned __int64 v6; // rdi
	int* v7; // rbp
	unsigned __int64 v8; // rbx
	int v9; // esi
	__int64 v10; // rbx
	__int64 v11; // rax

	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	v6 = v5;
	if (v5 > 0xFFFFFFFF0i64)
		v5 = 0xFFFFFFFF0i64;
	v7 = sub_14018B280(v5, 0);
	if (v6)
	{
		while (1)
		{
			v8 = v6;
			if (v5 < v6)
				v8 = v5;
			v9 = (*(__int64(__fastcall**)(__int64, int*, unsigned __int64))(*(_QWORD*)a3 + 64i64))(a3, v7, v8);
			if (v9 < 0)
				break;
			v9 = (*(__int64(__fastcall**)(__int64*, int*, unsigned __int64))(*a2 + 96))(a2, v7, v8);
			if (v9 < 0)
				break;
			v6 -= v8;
			if (!v6)
				goto LABEL_9;
		}
		sub_14018B900((__int64)v7, 0);
		return (unsigned int)v9;
	}
	else
	{
	LABEL_9:
		sub_14018B900((__int64)v7, 0);
		(*(void(__fastcall**)(__int64*, _QWORD))(*a2 + 56))(a2, 0i64);
		v10 = *a2;
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 32i64))(a3);
		(*(void(__fastcall**)(__int64*, __int64))(v10 + 40))(a2, v11);
		return 0i64;
	}
}

