//----- (00000001407296B0) ----------------------------------------------------
void __fastcall sub_1407296B0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
	__int64 v7; // rbx
	int v8; // esi
	int* v9; // rax

	if (a7 && a3 == 63 && *(_DWORD*)(a7 + 1264))
	{
		v7 = *(_QWORD*)(a7 + 1496);
		v8 = dword_140C636A8;
		v9 = sub_14018B280(24i64, 0);
		if (v9 != (int*)-16i64)
			v9[4] = v8;
		*(_QWORD*)v9 = v7;
		*((_QWORD*)v9 + 1) = *(_QWORD*)(v7 + 8);
		**(_QWORD**)(v7 + 8) = v9;
		*(_QWORD*)(v7 + 8) = v9;
		--* (_DWORD*)(a7 + 1264);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

