//----- (0000000140854910) ----------------------------------------------------
char __fastcall sub_140854910(__int64 a1, char a2)
{
	char v3; // cl
	__int64 v4; // rax
	__int64* v5; // rcx
	__int64 v6; // rcx

	v3 = *(_BYTE*)(a1 + 90);
	LOBYTE(v4) = (v3 & 2) != 0;
	if ((_BYTE)v4 != a2)
	{
		*(_BYTE*)(a1 + 90) = v3 ^ (v3 ^ (2 * a2)) & 2;
		v4 = *(_QWORD*)(a1 + 56);
		if (v4)
		{
			*(_BYTE*)(v4 + 59) = a2;
			v5 = *(__int64**)(a1 + 56);
			v4 = *v5;
			if (*v5 != v5[1])
			{
				do
				{
					v6 = *(_QWORD*)(v4 + 8);
					if (v6)
						*(_BYTE*)(v6 + 27) = a2;
					v4 += 24i64;
				} while (v4 != *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64));
			}
		}
	}
	return v4;
}

