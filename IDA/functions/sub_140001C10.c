//----- (0000000140001C10) ----------------------------------------------------
__int64 __fastcall sub_140001C10(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 680);
	if (result)
		return *(_QWORD*)(result + 8);
	return result;
}
