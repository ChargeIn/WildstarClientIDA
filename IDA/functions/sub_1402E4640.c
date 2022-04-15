//----- (00000001402E4640) ----------------------------------------------------
__int64 __fastcall sub_1402E4640(__int64 a1, _DWORD* a2, void(__fastcall*** a3)(_QWORD))
{
	__int64 v5; // rbx
	unsigned __int64 v7; // rbp
	int** v8; // r15
	int* v9; // rax
	unsigned int v10; // edi
	int* v11; // rcx
	int v12; // eax

	v5 = *(_QWORD*)(a1 + 16) + 1784i64;
	if (*(_QWORD*)v5 == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1792i64))
		sub_1400290D0(*(_QWORD*)(a1 + 16) + 1784i64);
	v7 = (*(__int64(__fastcall**)(_DWORD*))(v5 + 24))(a2);
	v8 = (int**)(*(_QWORD*)(v5 + 16) + 8 * (v7 % *(_QWORD*)(v5 + 8)));
	v9 = sub_14018B280(32i64, 0);
	v10 = 0;
	if (v9)
	{
		v11 = *v8;
		*(_QWORD*)v9 = v7;
		*((_QWORD*)v9 + 1) = v11;
		LODWORD(v11) = *a2;
		*((_QWORD*)v9 + 3) = a1;
		v9[4] = (int)v11;
	}
	else
	{
		v9 = 0i64;
	}
	*v8 = v9;
	++* (_QWORD*)v5;
	v12 = sub_1402E4700(a1, (__int64)a2, a3);
	if (v12 < 0)
		return (unsigned int)v12;
	return v10;
}

