//----- (00000001408884D0) ----------------------------------------------------
__int64 __fastcall sub_1408884D0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 184);
	if (!result || (*(_BYTE*)(result + 20) & 7) == 0)
		return 0i64;
	return result;
}

