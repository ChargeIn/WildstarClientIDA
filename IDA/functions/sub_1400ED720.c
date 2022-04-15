//----- (00000001400ED720) ----------------------------------------------------
int* __fastcall sub_1400ED720(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	int* v6; // rax
	__int64 v7; // rcx

	v3 = *(_QWORD*)(a1 + 2640);
	v6 = sub_14018B280(24i64, 0);
	if (v6 != (int*)-16i64)
		*((_QWORD*)v6 + 2) = a2;
	*(_QWORD*)v6 = v3;
	*((_QWORD*)v6 + 1) = *(_QWORD*)(v3 + 8);
	**(_QWORD**)(v3 + 8) = v6;
	v7 = qword_140C63650;
	*(_QWORD*)(v3 + 8) = v6;
	return sub_1400E2060(v7, a2, a3);
}
// 140C63650: using guessed type __int64 qword_140C63650;

