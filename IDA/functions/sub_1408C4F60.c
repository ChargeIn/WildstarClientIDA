//----- (00000001408C4F60) ----------------------------------------------------
int* __fastcall sub_1408C4F60(__int64 a1)
{
	unsigned int* v1; // rbx
	__int64 v2; // rdi
	int* result; // rax

	v1 = (unsigned int*)(a1 + 8);
	v2 = 4i64;
	do
	{
		result = sub_1408CA620(v1);
		v1 += 6;
		--v2;
	} while (v2);
	return result;
}

