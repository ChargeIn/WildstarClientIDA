//----- (00000001408D34A0) ----------------------------------------------------
int* __fastcall sub_1408D34A0(int** a1)
{
	int* result; // rax

	result = (int*)*(unsigned int*)a1;
	if ((_DWORD)result)
	{
		sub_1407E4830(a1[1], 0i64, (unsigned int)result);
		result = a1[1];
		a1[2] = result;
	}
	return result;
}

