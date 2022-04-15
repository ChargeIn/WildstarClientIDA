//----- (00000001407716F0) ----------------------------------------------------
__int64 __fastcall sub_1407716F0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 384);
	if (result)
		return *(_QWORD*)(result + 16);
	return result;
}

