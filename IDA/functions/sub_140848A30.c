//----- (0000000140848A30) ----------------------------------------------------
__int64 __fastcall sub_140848A30(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = a1 + 480;
	result = *(_QWORD*)(v3 + 88);
	if (result)
	{
		result = a2 + result - a3;
		*(_QWORD*)(v3 + 88) = result;
	}
	return result;
}

