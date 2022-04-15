//----- (00000001400EFAE0) ----------------------------------------------------
int* __fastcall sub_1400EFAE0(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rdi
	_QWORD* v5; // rbx

	result = sub_14018B280(72i64, 0);
	v4 = result;
	v5 = result + 8;
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 5) = 0i64;
		*((_QWORD*)result + 6) = 0i64;
		*((_QWORD*)result + 7) = 0i64;
		sub_14001B240(v5, *(int**)(a2 + 8), *(_QWORD*)(a2 + 16));
		result = v4;
		v5[4] = *(_QWORD*)(a2 + 32);
	}
	return result;
}

