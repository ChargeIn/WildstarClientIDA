//----- (00000001407DCE60) ----------------------------------------------------
char* __fastcall sub_1407DCE60(unsigned int a1, char* a2)
{
	char* v4; // rsi
	_QWORD* v6; // rbx
	int* v7; // rdi
	int v8; // eax
	int v9; // ecx

	v4 = 0i64;
	if (a1 <= 5)
	{
		v6 = sub_1407E3D94();
		sub_1407E69FC();
		*((_DWORD*)v6 + 50) |= 0x10u;
		v7 = (int*)sub_1407E2BB0(0x158ui64, 1ui64);
		if (v7)
		{
			sub_1407E2340(12);
			sub_1407DC730(v7, v6[24]);
			sub_1407E2528(12);
			v4 = sub_1407DD1D0((UINT*)v7, a1, a2);
			if (v4)
			{
				if (a2)
				{
					v8 = sub_1407E6BB8(a2, aC_18);
					v9 = dword_140C5F560;
					if (v8)
						v9 = 1;
					dword_140C5F560 = v9;
				}
				sub_1407E2340(12);
				sub_1407E6A74((char**)v6 + 24, (__int64)v7);
				sub_1407E6958((__int64)v7);
				if ((v6[25] & 2) == 0 && (dword_140C10470 & 1) == 0)
				{
					sub_1407E6A74((char**)&off_140C102E0, v6[24]);
					off_140C0F6E8 = (void**)*((_QWORD*)off_140C102E0 + 30);
					off_140C10460 = (wchar_t*)*((_QWORD*)off_140C102E0 + 33);
					dword_140C10458 = *((_DWORD*)off_140C102E0 + 53);
				}
				sub_1407E2528(12);
			}
			else
			{
				sub_1407E6958((__int64)v7);
				sub_1407E67C0((char*)v7);
			}
		}
		*((_DWORD*)v6 + 50) &= ~0x10u;
		return v4;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
}
// 140C0F6E8: using guessed type void **off_140C0F6E8;
// 140C102E0: using guessed type void *off_140C102E0;
// 140C10458: using guessed type int dword_140C10458;
// 140C10460: using guessed type wchar_t *off_140C10460;
// 140C10470: using guessed type int dword_140C10470;
// 140C5F560: using guessed type int dword_140C5F560;

