//----- (0000000140030C10) ----------------------------------------------------
__int64 __fastcall sub_140030C10(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 16) += -8 * ((*(_QWORD*)(a1 + 16) - result) >> 3);
	return result;
}

