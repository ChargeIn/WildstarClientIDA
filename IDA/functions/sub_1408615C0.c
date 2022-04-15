//----- (00000001408615C0) ----------------------------------------------------
int* __fastcall sub_1408615C0(__int64 a1, unsigned int a2)
{
	int* result; // rax
	__int64 v5; // rcx

	result = sub_140872260(a1 + 16);
	v5 = *(_QWORD*)(a1 + 8);
	if (v5)
		return (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 32i64))(v5, a2);
	return result;
}

