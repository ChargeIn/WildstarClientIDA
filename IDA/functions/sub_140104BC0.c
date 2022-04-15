//----- (0000000140104BC0) ----------------------------------------------------
int* __fastcall sub_140104BC0(__int64 a1)
{
	_QWORD* v1; // rdi
	_QWORD* i; // rbx
	int* v4; // rdi
	int* v5; // rbx
	int* result; // rax

	v1 = *(_QWORD**)(a1 + 40);
	for (i = *(_QWORD**)(a1 + 32); i != v1; ++i)
	{
		if (*i)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 8i64))(*i);
	}
	v4 = *(int**)(a1 + 40);
	v5 = *(int**)(a1 + 32);
	result = sub_1407DB590(v5, v4, 0i64);
	*(_QWORD*)(a1 + 40) += -8 * (((char*)v4 - (char*)v5) >> 3);
	return result;
}

