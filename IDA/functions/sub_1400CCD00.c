//----- (00000001400CCD00) ----------------------------------------------------
void __fastcall sub_1400CCD00(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rcx
	__int64 v3; // rcx

	v1 = *(_QWORD*)(a1 + 680);
	if (v1)
	{
		v2 = *(_QWORD*)(v1 + 32);
		if (v2)
			sub_1400C6B20(v2);
		v3 = *(_QWORD*)(v1 + 32);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v1 + 32) = 0i64;
		}
	}
}

