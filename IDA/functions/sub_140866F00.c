//----- (0000000140866F00) ----------------------------------------------------
__int64 __fastcall sub_140866F00(__int64 a1, __int64 a2)
{
	float v2; // xmm1_4
	__int64 result; // rax
	int v5; // ecx
	_DWORD* v6; // r14
	__int64 v7; // rax
	_QWORD* v8; // rsi
	int v9; // ebx
	int v10; // edx
	int v11; // eax
	float v12; // xmm2_4
	int v13; // ebx
	__int64 v14; // rcx
	__int64 v15; // [rsp+60h] [rbp+8h]

	result = *(unsigned __int8*)(a1 + 381);
	if ((result & 0x10) == 0 && (result & 0x20) == 0)
	{
		LOBYTE(a2) = 1;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 136i64))(a1, a2);
		v5 = (int)(*(_DWORD*)(a1 + 640) << 28) >> 28;
		result = (unsigned int)(v5 - 1);
		if ((unsigned int)result <= 1)
		{
			if (v2 < 50.0)
				return result;
		}
		else if (v5 != 5)
		{
			return result;
		}
		if (*(_DWORD*)(a1 + 636))
		{
			result = sub_140856D40(1283, 0, (__int64*)(a1 + 544));
			v6 = (_DWORD*)result;
			if (result)
			{
				v7 = sub_1408819F0(dword_140C10F20, 80i64);
				if (v7)
				{
					v8 = (_QWORD*)sub_14082B2C0(v7, *(_QWORD*)(a1 + 176));
					if (v8)
					{
						v6[60] = *(_DWORD*)(a1 + 404);
						sub_140857160(v6, (_DWORD*)(a1 + 552));
						LODWORD(v15) = *(_DWORD*)(a1 + 636);
						BYTE4(v15) = 0;
						(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v6 + 40i64))(v6, v15);
						sub_140857210((__int64)v6, *(_QWORD*)(a1 + 624));
						sub_1408572D0((__int64)v6, *(_QWORD*)(a1 + 136), (*(_BYTE*)(a1 + 144) & 2) != 0, (__int64)v8);
						sub_140857240((__int64)v6, a1 + 504);
						if ((unsigned int)(((int)(*(_DWORD*)(a1 + 640) << 28) >> 28) - 1) <= 1)
						{
							v12 = *(float*)(a1 + 632);
							if (v12 >= (float)(v2 * 0.5))
								v12 = v2;
							v9 = sub_1408666A0((float)(v2 - v12));
							sub_140857140((__int64)v6, a1, (int)v12);
						}
						else
						{
							v9 = sub_1408666A0(*(float*)(a1 + 632));
							if (*(char*)(a1 + 382) >= 0)
								v10 = 1024;
							else
								v10 = (unsigned __int16)(0x5DC00u / dword_140C110B4);
							if (v9 < v10)
								v9 = v10;
							if (*(char*)(a1 + 382) < 0)
								v11 = *(_DWORD*)(a1 + 408) + (unsigned __int16)(0x5DC00u / dword_140C110B4);
							else
								v11 = *(_DWORD*)(a1 + 408) + 1024;
							if (v11 > 0)
								v9 += v11;
							sub_140857370((__int64)v6, *(_QWORD*)(a1 + 128), *(_BYTE*)(a1 + 144) & 1, (__int64)v8);
						}
						if ((*(unsigned int(__fastcall**)(_DWORD*, __int64, _QWORD))(*(_QWORD*)v6 + 48i64))(
							v6,
							14i64,
							(unsigned int)v9) == 1)
						{
							v8[1] = v6;
							sub_14082B460((__int64)(v8 + 4), a1 + 96);
							sub_14082BB80((__int64)qword_140C61B68, (__int64)v8);
							if (v9 >= 1024 && *(_DWORD*)(a1 + 404))
								sub_14082C2B0((__int64)qword_140C61B68, (__int64)v8);
						}
						else
						{
							v13 = dword_140C10F20;
							(*(void(__fastcall**)(_QWORD*, _QWORD))(*v8 + 8i64))(v8, 0i64);
							sub_140881720(v13, (__int64)v8);
						}
					}
				}
				result = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 16i64))(v6);
				*(_BYTE*)(a1 + 381) |= 2u;
			}
			v14 = *(_QWORD*)(a1 + 544);
			*(_QWORD*)(a1 + 544) = 0i64;
			if (v14)
				result = sub_140866000(v14);
			*(_DWORD*)(a1 + 636) = 0;
		}
	}
	return result;
}
// 140866F5E: variable 'v2' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

