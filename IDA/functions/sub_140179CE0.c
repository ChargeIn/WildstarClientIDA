//----- (0000000140179CE0) ----------------------------------------------------
__int64 __fastcall sub_140179CE0(__int64 a1, int* a2)
{
	int v4; // r15d
	int v5; // esi
	int v6; // ebp
	__int64 v7; // r14
	int v8; // ecx
	int v9; // eax
	__int64 v10; // rdi
	int v11; // eax
	__int64 v12; // rdx
	__int64 v13; // r8
	int v14; // ebp
	__int64 v15; // rdi
	__int64 v16; // rcx
	unsigned int v18; // eax
	char v19; // cl
	unsigned int v20; // edi
	int v21[4]; // [rsp+30h] [rbp-28h] BYREF

	if (*(_BYTE*)(a1 + 1148))
	{
		sub_1400CB3D0(a1, v21);
		v4 = qword_140C77760;
		v5 = v21[2] - v21[0];
		v6 = HIDWORD(qword_140C77760);
		if ((*(_BYTE*)(a1 + 656) & 8) != 0 && (v7 = *(_QWORD*)(a1 + 48)) != 0)
		{
			v4 += sub_14010CF80(*(_QWORD*)(a1 + 48));
			v5 -= sub_14010D0A0(v7);
			v8 = sub_14010D1C0(v7) + v6;
		}
		else
		{
			v8 = HIDWORD(qword_140C77760);
		}
		if (*a2 < v4
			|| *a2 >= v5
			|| (v9 = a2[1], v9 < v6)
			|| v9 >= v8
			|| ((*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) & 0xFFFFFFFFFFFFFFF8ui64) == 8)
		{
			sub_14017A3D0((_QWORD*)a1);
			sub_1400CA2D0(a1, 1, 1, 1, 1);
			qword_140C63690 = a1;
			*(_BYTE*)(a1 + 1148) = 0;
		}
		v10 = (int)sub_140179450(a1, a2);
		v11 = sub_140179350(a1);
		if ((_DWORD)v10 != v11 && (int)v10 >= 0 && v11 >= 0)
		{
			v12 = *(_QWORD*)(a1 + 1208);
			v13 = *(_QWORD*)(v12 + 8 * v10);
			if (!*(_BYTE*)(v13 + 1124))
			{
				v14 = 0;
				*(_QWORD*)(v12 + 8i64 * v11) = v13;
				*(_QWORD*)(*(_QWORD*)(a1 + 1208) + 8 * v10) = a1;
				if ((int)((__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3) > 0)
				{
					v15 = 0i64;
					do
					{
						v16 = *(_QWORD*)(v15 + *(_QWORD*)(a1 + 1208));
						if (v16 != a1)
							sub_14017B020((_QWORD*)(v16 + 1200), a1 + 1200);
						sub_1401795D0(*(_QWORD*)(*(_QWORD*)(a1 + 1208) + v15));
						++v14;
						v15 += 8i64;
					} while (v14 < (int)((__int64)(*(_QWORD*)(a1 + 1216) - *(_QWORD*)(a1 + 1208)) >> 3));
				}
			}
		}
		return 0i64;
	}
	else
	{
		if (qword_140C63690 == a1)
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 64i64))(
				*(_QWORD*)(a1 + 32),
				1026i64,
				0i64,
				0i64);
		v18 = sub_1400D23B0(a1, a2);
		v19 = *(_BYTE*)(a1 + 29);
		v20 = v18;
		if (((v19 & 8) != 0 || (v19 & 0x10) != 0 || (v19 & 0x20) != 0 || (v19 & 0x40) != 0) && qword_140C63690 != a1)
			sub_1401795D0(a1);
		return v20;
	}
}
// 140C63690: using guessed type __int64 qword_140C63690;
// 140C77760: using guessed type __int64 qword_140C77760;

