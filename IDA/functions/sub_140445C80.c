//----- (0000000140445C80) ----------------------------------------------------
_QWORD* __fastcall sub_140445C80(_QWORD* a1)
{
	int* v2; // rax
	_QWORD* result; // rax

	a1[1] = 0i64;
	a1[2] = 0i64;
	v2 = sub_14018B280(72i64, 0);
	a1[5] = 0i64;
	a1[4] = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[4] + 8i64) = 0i64;
	*(_QWORD*)(a1[4] + 16i64) = a1[4];
	*(_QWORD*)(a1[4] + 24i64) = a1[4];
	a1[7] = 0i64;
	a1[8] = 0i64;
	a1[9] = 0i64;
	a1[10] = 0i64;
	a1[11] = 0i64;
	a1[12] = 0i64;
	a1[13] = 0i64;
	result = a1;
	a1[14] = 0i64;
	return result;
}

