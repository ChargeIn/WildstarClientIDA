//----- (0000000140193C80) ----------------------------------------------------
_BOOL8 __fastcall sub_140193C80(__int64 a1, __int64 a2, char* a3, unsigned int* a4)
{
	__int64 v6; // rsi
	unsigned int v7; // edi
	unsigned int v8; // edi
	unsigned __int64 v9; // rdx
	__int64 v10; // r10
	char v11; // cl
	__int16 v12; // ax
	char v13; // r8
	char v14; // r8
	char v15; // r9
	__int64 v16; // rcx
	unsigned int v18; // [rsp+20h] [rbp-30h] BYREF
	char v19[4]; // [rsp+24h] [rbp-2Ch] BYREF
	__int64 v20; // [rsp+28h] [rbp-28h] BYREF
	__int64 v21[2]; // [rsp+30h] [rbp-20h] BYREF

	if ((*((int(__fastcall**)(__int64, __int64*, void*, _QWORD))a4 + 1029))(a1, &v20, &unk_140964750, 0i64) < 0)
		return 1i64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v20 + 160i64))(v20, 0i64, 8i64);
	v21[1] = 0i64;
	v21[0] = 16896i64;
	v6 = 0i64;
	v18 = 0;
	(*(void(__fastcall**)(__int64, __int64*, unsigned int*, char*))(*(_QWORD*)v20 + 184i64))(v20, v21, &v18, v19);
	LODWORD(v21[0]) = 268464128;
	v7 = 0;
	if (v18)
		v7 = v18;
	(*(void(__fastcall**)(__int64, __int64*, unsigned int*, char*))(*(_QWORD*)v20 + 184i64))(v20, v21, &v18, v19);
	if (v18 && v18 > v7)
		v7 = v18;
	LODWORD(v21[0]) = 268455936;
	(*(void(__fastcall**)(__int64, __int64*, unsigned int*, char*))(*(_QWORD*)v20 + 184i64))(v20, v21, &v18, v19);
	if (v18 && v18 > v7)
		v7 = v18;
	LODWORD(v21[0]) = 268451904;
	(*(void(__fastcall**)(__int64, __int64*, unsigned int*, char*))(*(_QWORD*)v20 + 184i64))(v20, v21, &v18, v19);
	if (v18 && v18 > v7)
		v7 = v18;
	if (v7)
	{
		v8 = v7 >> 20;
		if (v8 > 0x10)
		{
			if (v8 > 0x40)
				v7 = (v8 + 63) & 0xFFFFFFC0;
			else
				v7 = (v8 + 31) & 0xFFFFFFE0;
		}
		else
		{
			v7 = (v8 + 7) & 0xFFFFFFF8;
		}
	}
	v9 = 512i64;
	v10 = (__int64)&a4[257 * *a4 + 1];
	if (v10 && a3)
	{
		do
		{
			v11 = *a3;
			if (*a3 < 0)
			{
				if (v9 > 1 && (v11 & 0xE0) == 0xC0 && (v13 = a3[1], (v13 & 0xC0) == 0x80))
				{
					a3 += 2;
					v12 = v13 & 0x3F | ((v11 & 0x1F) << 6);
					v9 -= 2i64;
				}
				else
				{
					if (v9 <= 2
						|| (v11 & 0xF0) != 0xE0
						|| (v14 = a3[1], (v14 & 0xC0) != 0x80)
						|| (v15 = a3[2], (v15 & 0xC0) != 0x80))
					{
						++a3;
						--v9;
						continue;
					}
					a3 += 3;
					v12 = v15 & 0x3F | (((unsigned __int16)(v11 << 6) | v14 & 0x3F) << 6);
					v9 -= 3i64;
				}
			}
			else
			{
				++a3;
				v12 = v11;
				--v9;
			}
			if (v6 == 512)
				break;
			*(_WORD*)(v10 + 2 * v6++) = v12;
			if (!v12)
				break;
		} while (v9);
	}
	a4[257 * *a4 + 257] = v7;
	v16 = v20;
	++* a4;
	(*(void(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v16 + 16i64))(v16, v9);
	return *a4 < 8;
}

