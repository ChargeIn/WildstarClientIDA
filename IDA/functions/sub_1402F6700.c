//----- (00000001402F6700) ----------------------------------------------------
void __fastcall sub_1402F6700(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 i; // rbx
	__int64 v7; // rcx

	if (*(_QWORD*)(a1 + 1128))
	{
		for (i = 0i64; (unsigned int)i < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 696i64); i = (unsigned int)(i + 1))
		{
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 1128) + 40 * i);
			if (v7)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v7 + 72i64))(v7, a2, a3);
		}
	}
}

