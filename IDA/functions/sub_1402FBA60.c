//----- (00000001402FBA60) ----------------------------------------------------
__int64 __fastcall sub_1402FBA60(__int64 a1)
{
	__int64 v1; // rcx
	__int64 v2; // rbx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 1232);
	if (v1)
	{
		do
		{
			v2 = *(_QWORD*)(v1 + 1248);
			if (*(_DWORD*)(v1 + 1200))
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 936i64))(v1);
			v1 = v2;
		} while (v2);
	}
	return result;
}

