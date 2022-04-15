//----- (00000001407BEAF0) ----------------------------------------------------
__int64 __fastcall sub_1407BEAF0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 40);
	if (!v2)
		return *(unsigned int*)(a1 + 32);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 80i64))(v2);
	if ((int)result >= 0)
		return *(unsigned int*)(a1 + 32);
	return result;
}

