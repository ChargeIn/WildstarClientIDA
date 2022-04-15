//----- (00000001402F6460) ----------------------------------------------------
__int64 __fastcall sub_1402F6460(__int64 a1, __int64* a2)
{
	__int64 result; // rax

	result = *a2;
	*(_QWORD*)(a1 + 860) = *a2;
	return result;
}

