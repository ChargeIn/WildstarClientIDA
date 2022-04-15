//----- (0000000140379E70) ----------------------------------------------------
__int64 __fastcall sub_140379E70(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 result; // rax

	v2 = *a1;
	*((_DWORD*)a1 + 83) = a2;
	result = (*(__int64 (**)(void))(v2 + 336))();
	if (result)
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)result + 272i64))(result, *((unsigned int*)a1 + 83));
	return result;
}

