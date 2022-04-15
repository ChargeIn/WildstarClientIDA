//----- (00000001408ABB00) ----------------------------------------------------
int* __fastcall sub_1408ABB00(__int64 a1)
{
	__int64 i; // rbx
	int* result; // rax

	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 2456); i = (unsigned int)(i + 1))
		result = sub_1408ADC70(a1 + 8 * (i + 2 * (i + 134)));
	return result;
}

