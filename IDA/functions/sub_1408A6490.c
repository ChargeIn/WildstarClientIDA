//----- (00000001408A6490) ----------------------------------------------------
int* __fastcall sub_1408A6490(__int64 a1)
{
	int* v2; // rcx
	int* result; // rax

	v2 = *(int**)(a1 + 16);
	if (v2)
		result = sub_1407E4830(v2, 0i64, (unsigned int)(4 * *(_DWORD*)(a1 + 8)));
	*(_DWORD*)(a1 + 24) = 0;
	return result;
}

