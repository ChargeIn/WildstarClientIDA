#include "../winhttp.h"

//----- (0000000140899420) ----------------------------------------------------
__int64 __fastcall sub_140899420(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v4; // esi
	__int64* v5; // rdi
	__int64 v6; // r14
	__int64 v7; // rax
	unsigned int i; // ebp
	__int64 v9; // rax
	unsigned int v10; // eax
	char v11; // al
	unsigned int v12; // edi
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-48h] BYREF
	int v15; // [rsp+28h] [rbp-40h]
	int v16; // [rsp+2Ch] [rbp-3Ch]
	__int64 v17; // [rsp+30h] [rbp-38h]
	__int64 v18; // [rsp+88h] [rbp+20h] BYREF

	v4 = sub_14088C3E0((_QWORD*)a1, a2, a3);
	if (v4 == 1)
	{
		v5 = (__int64*)(a1 + 136);
		if (*(_QWORD*)(a1 + 136))
		{
			sub_140899E50(a1 + 136);
			sub_140881720(dword_140C10F20, *v5);
			*v5 = 0i64;
			*(_QWORD*)(a1 + 144) = 0i64;
			*(_DWORD*)(a1 + 152) = 0;
		}
		v6 = *(unsigned int*)(*(_QWORD*)(a1 + 128) + 272i64);
		if (!(_DWORD)v6)
			goto LABEL_14;
		v7 = sub_1408819F0(dword_140C10F20, 24 * v6);
		*v5 = v7;
		*(_QWORD*)(a1 + 144) = v7;
		if (!v7)
			return 52;
		*(_DWORD*)(a1 + 152) = v6;
		v4 = 1;
		for (i = 0; i < (unsigned int)v6; ++i)
		{
			sub_14087B9A0(&v14);
			v14 = off_1409A9830;
			v16 = -1;
			v17 = 0i64;
			v9 = sub_140898BD0(a1 + 136);
			if (v9)
			{
				*(_DWORD*)(v9 + 8) = v15;
				*(_DWORD*)(v9 + 12) = v16;
				*(_QWORD*)(v9 + 16) = v17;
			}
			v14 = off_1409A9830;
			sub_14087BAE0((__int64)&v14);
			sub_14087B9B0(&v14);
			v10 = sub_140899620(*v5 + 24i64 * i, i, a1);
			v4 = v10;
			if (v10 != 1)
				return v4;
		}
		if (v4 == 1)
		{
		LABEL_14:
			++* (_DWORD*)(a1 + 80);
			*(_BYTE*)(a1 + 192) |= 2u;
			if (*(_QWORD*)(a1 + 16))
			{
				return (unsigned int)sub_14089B200(a1, 0);
			}
			else
			{
				v4 = sub_14089B200(a1, 1);
				if (v4 == 1)
				{
					v11 = *(_BYTE*)(a1 + 98);
					*(_BYTE*)(a1 + 192) &= ~1u;
					v14 = 0i64;
					LOBYTE(v15) = 0;
					if ((v11 & 0xFu) <= 1)
					{
						v12 = sub_140899EB0((_QWORD*)a1);
						v18 = sub_140898DF0(a1, v12);
						if (v18)
						{
							sub_140899FD0((_QWORD*)a1, v12, (__int64)&v14, &v18);
							if (v18)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 72i64))(v18);
						}
					}
				}
			}
		}
	}
	return v4;
}
// 1409A9830: using guessed type __int64 (__fastcall *off_1409A9830[7])();
// 140C10F20: using guessed type int dword_140C10F20;

