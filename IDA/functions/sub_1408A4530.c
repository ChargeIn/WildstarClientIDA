//----- (00000001408A4530) ----------------------------------------------------
int* __fastcall sub_1408A4530(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdi
	__int64 v4; // rbx
	int* result; // rax

	if (*(_QWORD*)(a1 + 8) && a2)
	{
		v3 = a2;
		v4 = 0i64;
		do
		{
			result = sub_1408A6490(v4 + *(_QWORD*)(a1 + 8));
			v4 += 56i64;
			--v3;
		} while (v3);
	}
	return result;
}

