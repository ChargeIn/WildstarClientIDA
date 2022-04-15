//----- (00000001403E5A10) ----------------------------------------------------
__int64 __fastcall sub_1403E5A10(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD*)a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)a1 = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	if (*(_QWORD*)(a1 + 80))
		CloseHandle(*(HANDLE*)(a1 + 80));
	sub_14062EE70((_QWORD*)(a1 + 32));
	sub_14062EE70((_QWORD*)(a1 + 16));
	sub_14018B900(a1, 0);
	return a1;
}

