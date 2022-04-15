//----- (0000000140265480) ----------------------------------------------------
__int64 __fastcall sub_140265480(_WORD* a1, _DWORD* a2, unsigned int a3)
{
	_DWORD* v3; // r10
	unsigned __int64 v5; // rbx
	__int64 result; // rax
	unsigned int v7; // edx
	unsigned int v8; // edx
	unsigned int v9; // edx
	unsigned int v10; // edx
	unsigned int v11; // edx
	unsigned int v12; // edx
	unsigned int v13; // edx
	unsigned int v14; // edx
	unsigned int v15; // edx
	unsigned int v16; // edx
	int v17; // [rsp+20h] [rbp+18h]
	int v18; // [rsp+20h] [rbp+18h]
	int v19; // [rsp+20h] [rbp+18h]

	v3 = a2;
	v5 = (unsigned __int64)&a2[4 * a3];
	if ((unsigned __int64)a2 < v5)
	{
		result = (16i64 * a3 + 15) / 16;
		if (result >= 4)
		{
			do
			{
				if (a1)
				{
					v7 = *v3 & 0x7FFFFFFF;
					if (v7 >= 0x33800000)
					{
						if (v7 > 0x387FEFFF)
						{
							if (v7 > 0x47FFEFFF)
								LOWORD(v8) = 17407;
							else
								v8 = (v7 - 939520000) >> 13;
						}
						else
						{
							result = v7 >> 23;
							v8 = (((*v3 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
						}
					}
					else
					{
						LOWORD(v8) = 0;
					}
					*a1 = HIWORD(*v3) & 0x8000 | v8;
				}
				if (a1 != (_WORD*)-2i64)
				{
					v17 = v3[4];
					v9 = v17 & 0x7FFFFFFF;
					if ((v17 & 0x7FFFFFFFu) >= 0x33800000)
					{
						if (v9 > 0x387FEFFF)
						{
							if (v9 > 0x47FFEFFF)
								LOWORD(v10) = 17407;
							else
								v10 = (v9 - 939520000) >> 13;
						}
						else
						{
							result = v9 >> 23;
							v10 = (((v17 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
						}
					}
					else
					{
						LOWORD(v10) = 0;
					}
					a1[1] = HIWORD(v17) & 0x8000 | v10;
				}
				if (a1 != (_WORD*)-4i64)
				{
					v18 = v3[8];
					v11 = v18 & 0x7FFFFFFF;
					if ((v18 & 0x7FFFFFFFu) >= 0x33800000)
					{
						if (v11 > 0x387FEFFF)
						{
							if (v11 > 0x47FFEFFF)
								LOWORD(v12) = 17407;
							else
								v12 = (v11 - 939520000) >> 13;
						}
						else
						{
							result = v11 >> 23;
							v12 = (((v18 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
						}
					}
					else
					{
						LOWORD(v12) = 0;
					}
					a1[2] = HIWORD(v18) & 0x8000 | v12;
				}
				if (a1 != (_WORD*)-6i64)
				{
					v19 = v3[12];
					v13 = v19 & 0x7FFFFFFF;
					if ((v19 & 0x7FFFFFFFu) >= 0x33800000)
					{
						if (v13 > 0x387FEFFF)
						{
							if (v13 > 0x47FFEFFF)
								LOWORD(v14) = 17407;
							else
								v14 = (v13 - 939520000) >> 13;
						}
						else
						{
							result = v13 >> 23;
							v14 = (((v19 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
						}
					}
					else
					{
						LOWORD(v14) = 0;
					}
					a1[3] = HIWORD(v19) & 0x8000 | v14;
				}
				v3 += 16;
				a1 += 4;
			} while ((__int64)v3 < (__int64)(v5 - 48));
		}
		for (; (unsigned __int64)v3 < v5; ++a1)
		{
			if (a1)
			{
				v15 = *v3 & 0x7FFFFFFF;
				if (v15 >= 0x33800000)
				{
					if (v15 > 0x387FEFFF)
					{
						if (v15 > 0x47FFEFFF)
							LOWORD(v16) = 17407;
						else
							v16 = (v15 - 939520000) >> 13;
					}
					else
					{
						result = v15 >> 23;
						v16 = (((*v3 & 0x7FFFFF | 0x800000u) >> (113 - result)) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v16) = 0;
				}
				*a1 = HIWORD(*v3) & 0x8000 | v16;
			}
			v3 += 4;
		}
	}
	return result;
}

