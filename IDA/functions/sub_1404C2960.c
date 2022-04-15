//----- (00000001404C2960) ----------------------------------------------------
void __fastcall sub_1404C2960(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64* v6; // rax
	__int64 v7; // rcx

	sub_1404C80A0(*(_QWORD*)(a1 + 296), *(_QWORD*)(a1 + 288));
	v2 = qword_140C659F0;
	if (*(_QWORD*)(qword_140C659F0 + 144) == *(_QWORD*)(a1 + 288))
	{
		v3 = *(_QWORD*)(qword_140C659F0 + 144);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(v2 + 144) = 0i64;
		}
		*(_DWORD*)(v2 + 160) = 0;
	}
	v4 = *(_QWORD*)(a1 + 288);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 288) = 0i64;
	}
	*(_QWORD*)(a1 + 288) = 0i64;
	v5 = sub_140203DA0(*(_DWORD*)(a1 + 96));
	if (v5)
	{
		if (*(_DWORD*)(v5 + 32))
		{
			v6 = (__int64*)xmmword_140C7DFC0;
			if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
			{
				while (1)
				{
					v7 = *v6;
					if (*(_DWORD*)(*v6 + 188) == *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64))
						break;
					if (++v6 == *((__int64**)&xmmword_140C7DFC0 + 1))
						return;
				}
				if (v7)
					sub_1405AE1C0(v7, a1, 1);
			}
		}
	}
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

