//----- (0000000140374780) ----------------------------------------------------
__int64 __fastcall sub_140374780(__int64 a1)
{
	bool v1; // zf
	unsigned int i; // edi
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_DWORD*)(a1 + 28) == 0;
	v8[0] = -1;
	if (!v1)
		return *(unsigned int*)(a1 + 44);
	for (i = 0; i < *(_DWORD*)(a1 + 44); ++i)
	{
		v4 = *(_QWORD*)(a1 + 8i64 * i + 48);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 16);
			if (v5)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v5 + 32i64))(v5, v8))
					return *(unsigned int*)(a1 + 44);
				sub_140373540(v4);
				v6 = *(_QWORD*)(v4 + 16);
				if (v6)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
					*(_QWORD*)(v4 + 16) = 0i64;
				}
			}
		}
	}
	*(_DWORD*)(a1 + 28) = 1;
	return *(unsigned int*)(a1 + 44);
}
// 140374780: using guessed type int var_18[6];

