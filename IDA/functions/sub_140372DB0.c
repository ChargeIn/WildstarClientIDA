//----- (0000000140372DB0) ----------------------------------------------------
__int64 __fastcall sub_140372DB0(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rbx
	unsigned __int64 v5; // rbp
	int** v6; // r15
	int* v7; // rax
	unsigned int v8; // esi
	int* v9; // rcx
	int v10; // eax

	v2 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	v4 = v2 + 1960;
	if (*(_QWORD*)v4 == *(_QWORD*)(v4 + 8))
		sub_1400290D0(v4);
	v5 = (*(__int64(__fastcall**)(__int64))(v4 + 24))(a1 + 24);
	v6 = (int**)(*(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8)));
	v7 = sub_14018B280(32i64, 0);
	v8 = 0;
	if (v7)
	{
		v9 = *v6;
		*(_QWORD*)v7 = v5;
		*((_QWORD*)v7 + 1) = v9;
		LODWORD(v9) = *(_DWORD*)(a1 + 24);
		*((_QWORD*)v7 + 3) = a1;
		v7[4] = (int)v9;
	}
	else
	{
		v7 = 0i64;
	}
	*v6 = v7;
	++* (_QWORD*)v4;
	v10 = sub_140372E60(a1);
	if (v10 < 0)
		return (unsigned int)v10;
	return v8;
}

