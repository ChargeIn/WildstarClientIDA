//----- (00000001400BD410) ----------------------------------------------------
void __fastcall sub_1400BD410(__int64 a1, int a2)
{
	_DWORD* v3; // rbx
	__int64 v4; // rdi

	if (a2 == 1)
	{
		*(_DWORD*)(a1 + 40) &= ~1u;
		sub_1400B9E10((__int64**)(a1 + 8), 0i64, 0i64, 0i64);
		*(_DWORD*)(a1 + 112) &= ~1u;
		sub_1400B9E10((__int64**)(a1 + 80), 0i64, 0i64, 0i64);
		v3 = (_DWORD*)(a1 + 304);
		v4 = 8i64;
		do
		{
			if (*(_QWORD*)v3)
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v3 + 40i64))(*(_QWORD*)v3);
				v3[2] = 1;
				v3[4] = sub_14018CDF0();
			}
			v3 += 6;
			--v4;
		} while (v4);
		*(_DWORD*)(a1 + 616) = 0;
	}
}

