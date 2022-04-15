//----- (00000001408D33D0) ----------------------------------------------------
__int64 __fastcall sub_1408D33D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	int* v5; // rax

	v5 = (int*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)a2 + 8i64))(a2, a3);
	*(_QWORD*)(a1 + 16) = v5;
	*(_QWORD*)(a1 + 8) = v5;
	if (!v5)
		return 52i64;
	sub_1407E4830(v5, 0i64, a3);
	*(_DWORD*)a1 = a3;
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16) + (unsigned int)a3;
	return 1i64;
}

