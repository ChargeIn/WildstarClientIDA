//----- (00000001407C4250) ----------------------------------------------------
__int64 __fastcall sub_1407C4250(__int64 a1)
{
	__int64 i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD*)(a1 + 1248); i; i = *(_QWORD*)(i + 104))
	{
		*(_DWORD*)(i + 360) = -1;
		result = sub_1407D20E0((__int64*)i);
	}
	return result;
}

