//----- (00000001404B4890) ----------------------------------------------------
int* __fastcall sub_1404B4890(__int64 a1)
{
	__int64* i; // rbx
	int* v3; // rdi
	int* v4; // rbx
	int* result; // rax

	for (i = *(__int64**)(a1 + 8); i != *(__int64**)(a1 + 16); ++i)
		sub_14018B900(*i, 0);
	v3 = *(int**)(a1 + 16);
	v4 = *(int**)(a1 + 8);
	result = sub_1407DB590(v4, v3, 0i64);
	*(_QWORD*)(a1 + 16) += -8 * (((char*)v3 - (char*)v4) >> 3);
	return result;
}

