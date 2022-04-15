//----- (00000001404A6960) ----------------------------------------------------
int* sub_1404A6960()
{
	int* result; // rax

	result = sub_14018B280(48i64, 0);
	if (result)
	{
		*((_QWORD*)result + 2) = 0i64;
		*((_QWORD*)result + 3) = 0i64;
		*((_QWORD*)result + 4) = 0i64;
	}
	return result;
}

