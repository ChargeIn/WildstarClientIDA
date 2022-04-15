//----- (00000001408C4EE0) ----------------------------------------------------
int* __fastcall sub_1408C4EE0(__int64 a1)
{
	unsigned int i; // esi
	__int64 v3; // rdi
	int* result; // rax

	if (*(_QWORD*)(a1 + 304))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 288); ++i)
		{
			v3 = 168i64 * i;
			sub_1408CAEA0((_DWORD*)(v3 + *(_QWORD*)(a1 + 304)));
			result = sub_1408CAB10(v3 + *(_QWORD*)(a1 + 304) + 144i64);
		}
	}
	return result;
}

