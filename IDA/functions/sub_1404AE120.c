//----- (00000001404AE120) ----------------------------------------------------
int* __fastcall sub_1404AE120(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int* result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	result = sub_14018B280(24i64, 0);
	if (result != (int*)-16i64)
		*((_QWORD*)result + 2) = *a2;
	*(_QWORD*)result = v2;
	*((_QWORD*)result + 1) = *(_QWORD*)(v2 + 8);
	**(_QWORD**)(v2 + 8) = result;
	*(_QWORD*)(v2 + 8) = result;
	return result;
}

