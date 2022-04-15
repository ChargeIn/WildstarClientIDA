//----- (00000001406BC040) ----------------------------------------------------
char __fastcall sub_1406BC040(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	int v4; // [rsp+30h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 24) != a2 && *(float*)(a2 + 648) <= 0.0)
		return 0;
	if ((*(_DWORD*)(a2 + 432) & 0x10000000) != 0)
	{
		v3 = *(_QWORD*)(a2 + 944);
		if (v3)
		{
			v4 = 0;
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 8i64))(v3, &v4);
		}
	}
	return 1;
}

