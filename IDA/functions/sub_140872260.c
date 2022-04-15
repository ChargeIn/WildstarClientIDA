//----- (0000000140872260) ----------------------------------------------------
int* __fastcall sub_140872260(__int64 a1)
{
	int* result; // rax

	*(_BYTE*)(a1 + 207) = 1;
	result = *(int**)(a1 + 176);
	if (result)
		return sub_1407E4830(*(int**)(a1 + 176), 0i64, *(unsigned int*)(a1 + 184));
	return result;
}

