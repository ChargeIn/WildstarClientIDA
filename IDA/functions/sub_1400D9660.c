//----- (00000001400D9660) ----------------------------------------------------
__int64 __fastcall sub_1400D9660(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	char* v3; // rcx

	v1 = sub_1400D66A0(a1, 1u);
	if (v1)
	{
		v2 = *(_QWORD*)(v1 + 448);
		if (v2)
		{
			v3 = *(char**)(v2 + 48);
			if (v3)
			{
				*(_DWORD*)(v2 + 16) = 0;
				sub_1400D4070((__int64)v3, 0x4Eu, v3, "s", *(_QWORD*)(*(_QWORD*)(v2 + 40) + 16i64));
			}
		}
	}
	return 0i64;
}

