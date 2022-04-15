//----- (00000001407E7568) ----------------------------------------------------
__int64 __fastcall sub_1407E7568(__int64 a1, signed int* a2, __m128i* a3)
{
	_QWORD* v6; // rax
	__int64 v7; // rbx
	char* v8; // r15
	_WORD** v9; // rdi
	UINT v10; // eax
	signed int v11; // ebx
	__int64 v12; // rax
	__int64 v14; // rax
	_WORD v15[88]; // [rsp+30h] [rbp-F8h] BYREF

	v6 = sub_1407E3D94();
	v7 = (__int64)(v6 + 40);
	v8 = (char*)(v6 + 115);
	v9 = (_WORD**)(v6 + 41);
	*((_DWORD*)v6 + 84) = 0;
	*((_WORD*)v6 + 460) = 0;
	v6[41] = a1 + 128;
	v6[40] = a1;
	if (*(_WORD*)(a1 + 128))
		sub_1407E74CC((__int64)&off_14095FD90, 22, (WCHAR**)v6 + 41);
	if (!**(_WORD**)v7)
	{
		*(_DWORD*)(v7 + 16) |= 0x104u;
		if ((int)sub_1407E8750((char*)v15, 85) > 1)
		{
			v14 = sub_1407E6CA0(v15);
			if ((unsigned int)sub_1407E6D08(v7 + 600, 85i64, (char*)v15, v14 + 1))
			{
				sub_1407DC390();
				__debugbreak();
			}
		}
	LABEL_11:
		if (!*(_DWORD*)(v7 + 16))
			return 0i64;
		goto LABEL_12;
	}
	if (**v9)
		sub_1407E6E0C(v7);
	else
		sub_1407E6EBC(v7);
	if (!*(_DWORD*)(v7 + 16))
	{
		if ((unsigned int)sub_1407E74CC((__int64)&off_14095F150, 64, (WCHAR**)v7))
		{
			if (**v9)
				sub_1407E6E0C(v7);
			else
				sub_1407E6EBC(v7);
		}
		goto LABEL_11;
	}
LABEL_12:
	v10 = sub_1407E73B0((WCHAR*)(a1 + 256), v7);
	v11 = v10;
	if (v10 && v10 - 65000 > 1 && IsValidCodePage((unsigned __int16)v10))
	{
		if (a2)
			*a2 = v11;
		if (!a3)
			return 1i64;
		a3[18].m128i_i16[0] = 0;
		v12 = sub_1407E6CA0(v8);
		if ((unsigned int)sub_1407E6D08((__int64)a3[18].m128i_i64, 85i64, v8, v12 + 1))
		{
			sub_1407DC390();
			__debugbreak();
		}
		if (sub_1407E8688((__int64)a3[18].m128i_i64, 0x1001u, (WCHAR*)a3, 64)
			&& sub_1407E8688((__int64)a3[18].m128i_i64, 0x1002u, (WCHAR*)&a3[8], 64)
			&& (!sub_1407DD988(a3 + 8, 0x5Fu) && !sub_1407DD988(a3 + 8, 0x2Eu)
				|| sub_1407E8688((__int64)a3[18].m128i_i64, 7u, (WCHAR*)&a3[8], 64)))
		{
			sub_1407F0AF0(v11, a3[16].m128i_i16, 0x10ui64, 0xAu);
			return 1i64;
		}
	}
	return 0i64;
}
// 14095F150: using guessed type wchar_t *off_14095F150;
// 14095FD90: using guessed type wchar_t *off_14095FD90;

