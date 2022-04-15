//----- (00000001408CA130) ----------------------------------------------------
int* __fastcall sub_1408CA130(unsigned int* a1)
{
	int* result; // rax

	result = (int*)*((_QWORD*)a1 + 1);
	if (result)
		return sub_1407E4830(*((int**)a1 + 1), 0i64, 4i64 * *a1);
	return result;
}

