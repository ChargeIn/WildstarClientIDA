//----- (0000000140712ED0) ----------------------------------------------------
__int64 __fastcall sub_140712ED0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
		return *(unsigned int*)(result + 52);
	return result;
}

