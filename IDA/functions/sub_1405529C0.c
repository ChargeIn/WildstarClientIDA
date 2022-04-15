//----- (00000001405529C0) ----------------------------------------------------
__int64 __fastcall sub_1405529C0(__int64 a1)
{
	int v1; // ecx
	int v2; // ecx
	unsigned int v4; // ebx
	__int64 v5; // rcx
	unsigned int v6; // ebx
	__int64 v7; // rcx

	v1 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 52i64);
	if (v1)
	{
		v2 = v1 - 1;
		if (v2)
		{
			return v2 == 1;
		}
		else
		{
			v4 = 0;
			v5 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v5)
				LOBYTE(v4) = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) == 166;
			else
				LOBYTE(v4) = 0;
			return v4;
		}
	}
	else
	{
		v6 = 0;
		v7 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v7)
			LOBYTE(v6) = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7) == 167;
		else
			LOBYTE(v6) = 0;
		return v6;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

