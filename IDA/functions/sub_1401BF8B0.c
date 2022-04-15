//----- (00000001401BF8B0) ----------------------------------------------------
__int64 __fastcall sub_1401BF8B0(__int64 a1, unsigned __int16* a2, __int64* a3)
{
	__int64 v6; // r9
	unsigned __int64 v7; // rax
	unsigned __int16 v8; // r8
	unsigned __int64 v9; // rdi
	int* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13[8]; // [rsp+20h] [rbp-168h] BYREF
	int v14[68]; // [rsp+60h] [rbp-128h] BYREF

	if ((*(_BYTE*)(a1 + 48) & 2) == 0)
		return 2147942405i64;
	if (!a2)
		return 2147942487i64;
	if (*(_DWORD*)(a1 + 64))
		return 2684551172i64;
	v6 = -1i64;
	v7 = 0i64;
	do
	{
		v8 = *a2;
		if (*a2 >= 0x80u)
		{
			if (v8 >= 0x1000u)
			{
				if (v7 >= 0x102)
					return 2147942522i64;
				*((_BYTE*)v14 + v7) = (v8 >> 12) | 0xE0;
				*((_BYTE*)v14 + v7 + 1) = (v8 >> 6) & 0x3F | 0x80;
				v7 += 3i64;
				*((_BYTE*)&v13[7] + v7 + 7) = *(_BYTE*)a2 & 0x3F | 0x80;
			}
			else
			{
				if (v7 >= 0x103)
					return 2147942522i64;
				*((_BYTE*)v14 + v7) = (v8 >> 6) | 0xC0;
				v7 += 2i64;
				*((_BYTE*)&v13[7] + v7 + 7) = *(_BYTE*)a2 & 0x3F | 0x80;
			}
		}
		else
		{
			if (v7 >= 0x104)
				return 2147942522i64;
			*((_BYTE*)&v13[7] + ++v7 + 7) = v8;
		}
		if (!v8)
			break;
		++a2;
		--v6;
	} while (v6);
	v9 = 0i64;
	if (LOBYTE(v14[0]))
	{
		do
			++v9;
		while (*((_BYTE*)v14 + v9));
	}
	v10 = sub_14018B280(v9 + 17, 0);
	if (v10)
	{
		*((_QWORD*)v10 + 1) = v9;
		*(_QWORD*)v10 = off_140B55060;
	}
	v11 = (__int64)(v10 + 4);
	sub_1407DB590(v10 + 4, v14, v9);
	*(_BYTE*)(v9 + v11) = 0;
	v13[1] = *a3;
	v13[2] = a3[1];
	v13[3] = a3[2];
	v12 = a3[3];
	v13[0] = v11;
	v13[4] = v12;
	v13[5] = a3[4];
	v13[6] = a3[5];
	sub_1401C04F0((__int64*)(a1 + 88), (__int64)v13);
	if (v13[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13[0] - 16) + 8i64))(v13[0] - 16);
	return 0i64;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

