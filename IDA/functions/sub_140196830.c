//----- (0000000140196830) ----------------------------------------------------
int* __fastcall sub_140196830(__int64 a1, int* a2)
{
	int* result; // rax
	_QWORD* v4; // rcx

	result = sub_14018B280(64i64, 0);
	if (result != (int*)-32i64)
	{
		result[8] = *a2;
		*((_QWORD*)result + 5) = 0i64;
		*((_QWORD*)result + 7) = 0i64;
		*((_QWORD*)result + 6) = result + 10;
		*((_QWORD*)result + 7) = *((_QWORD*)result + 5);
		*((_QWORD*)result + 5) = result + 12;
		v4 = (_QWORD*)*((_QWORD*)result + 7);
		if (v4)
			*v4 = result + 14;
	}
	return result;
}

