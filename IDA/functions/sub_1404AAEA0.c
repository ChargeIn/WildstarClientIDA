//----- (00000001404AAEA0) ----------------------------------------------------
int* sub_1404AAEA0()
{
	int* result; // rax
	int* v1; // rbx
	int* v2; // rax

	result = sub_14018B280(48i64, 0);
	v1 = result;
	if (result)
	{
		v2 = sub_14018B280(48i64, 0);
		*((_QWORD*)v1 + 3) = 0i64;
		*((_QWORD*)v1 + 2) = v2;
		*(_BYTE*)v2 = 0;
		*(_QWORD*)(*((_QWORD*)v1 + 2) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v1 + 2) + 16i64) = *((_QWORD*)v1 + 2);
		*(_QWORD*)(*((_QWORD*)v1 + 2) + 24i64) = *((_QWORD*)v1 + 2);
		return v1;
	}
	return result;
}

