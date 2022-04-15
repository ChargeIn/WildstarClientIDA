//----- (0000000140476990) ----------------------------------------------------
int* __fastcall sub_140476990(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v5; // rax
	__int64 v6; // rbx
	int* result; // rax

	v2 = qword_140C7CF68;
	v5 = sub_14018B280(24i64, 0);
	if (v5 != (int*)-16i64)
		*((_QWORD*)v5 + 2) = a2;
	*(_QWORD*)v5 = v2;
	*((_QWORD*)v5 + 1) = *(_QWORD*)(v2 + 8);
	**(_QWORD**)(v2 + 8) = v5;
	*(_QWORD*)(v2 + 8) = v5;
	v6 = *(_QWORD*)(a1 + 6248);
	result = sub_14018B280(24i64, 0);
	if (result != (int*)-16i64)
		*((_QWORD*)result + 2) = a2;
	*(_QWORD*)result = v6;
	*((_QWORD*)result + 1) = *(_QWORD*)(v6 + 8);
	**(_QWORD**)(v6 + 8) = result;
	*(_QWORD*)(v6 + 8) = result;
	return result;
}
// 140C7CF68: using guessed type __int64 qword_140C7CF68;

