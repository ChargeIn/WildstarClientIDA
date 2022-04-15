//----- (00000001402658B0) ----------------------------------------------------
_DWORD* __fastcall sub_1402658B0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
	unsigned __int64 v3; // rbx
	_WORD* v4; // r11
	_DWORD* v5; // r9
	unsigned int v6; // edx
	unsigned int v7; // edx
	unsigned int v8; // edx
	unsigned int v9; // edx
	unsigned int v10; // edx
	unsigned int v11; // edx
	unsigned int v12; // edx
	unsigned int v13; // edx
	_DWORD* result; // rax
	int v15; // [rsp+0h] [rbp-18h]
	int v16; // [rsp+28h] [rbp+10h]
	int v17; // [rsp+30h] [rbp+18h]

	v3 = a2 + 16i64 * a3;
	if (a2 < v3)
	{
		v4 = (_WORD*)(a1 + 4);
		v5 = (_DWORD*)(a2 + 8);
		do
		{
			if (v4 != (_WORD*)4)
			{
				v17 = *(v5 - 2);
				v6 = v17 & 0x7FFFFFFF;
				if ((v17 & 0x7FFFFFFFu) >= 0x33800000)
				{
					if (v6 > 0x387FEFFF)
					{
						if (v6 > 0x47FFEFFF)
							LOWORD(v7) = 17407;
						else
							v7 = (v6 - 939520000) >> 13;
					}
					else
					{
						v7 = (((v17 & 0x7FFFFF | 0x800000u) >> (113 - (v6 >> 23))) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v7) = 0;
				}
				*(v4 - 2) = HIWORD(v17) & 0x8000 | v7;
				v16 = *(v5 - 1);
				v8 = v16 & 0x7FFFFFFF;
				if ((v16 & 0x7FFFFFFFu) >= 0x33800000)
				{
					if (v8 > 0x387FEFFF)
					{
						if (v8 > 0x47FFEFFF)
							LOWORD(v9) = 17407;
						else
							v9 = (v8 - 939520000) >> 13;
					}
					else
					{
						v9 = (((v16 & 0x7FFFFF | 0x800000u) >> (113 - (v8 >> 23))) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v9) = 0;
				}
				*(v4 - 1) = HIWORD(v16) & 0x8000 | v9;
				v10 = *v5 & 0x7FFFFFFF;
				if (v10 >= 0x33800000)
				{
					if (v10 > 0x387FEFFF)
					{
						if (v10 > 0x47FFEFFF)
							LOWORD(v11) = 17407;
						else
							v11 = (v10 - 939520000) >> 13;
					}
					else
					{
						v11 = (((*v5 & 0x7FFFFF | 0x800000u) >> (113 - (v10 >> 23))) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v11) = 0;
				}
				*v4 = HIWORD(*v5) & 0x8000 | v11;
				v15 = v5[1];
				v12 = v15 & 0x7FFFFFFF;
				if ((v15 & 0x7FFFFFFFu) >= 0x33800000)
				{
					if (v12 > 0x387FEFFF)
					{
						if (v12 > 0x47FFEFFF)
							LOWORD(v13) = 17407;
						else
							v13 = (v12 - 939520000) >> 13;
					}
					else
					{
						v13 = (((v15 & 0x7FFFFF | 0x800000u) >> (113 - (v12 >> 23))) + 4096) >> 13;
					}
				}
				else
				{
					LOWORD(v13) = 0;
				}
				v4[1] = HIWORD(v15) & 0x8000 | v13;
			}
			v5 += 4;
			v4 += 4;
			result = v5 - 2;
		} while ((unsigned __int64)(v5 - 2) < v3);
	}
	return result;
}

