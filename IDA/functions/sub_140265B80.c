//----- (0000000140265B80) ----------------------------------------------------
__int64 __fastcall sub_140265B80(_DWORD* a1, _DWORD* a2, unsigned int a3)
{
	_DWORD* v3; // r9
	_DWORD* v4; // r10
	unsigned __int64 v5; // r11
	__int64 result; // rax
	_DWORD* v7; // rcx
	_DWORD* v8; // rdx
	_DWORD* v9; // rcx
	signed __int64 v10; // r9

	v3 = a2;
	v4 = a1;
	v5 = (unsigned __int64)&a2[4 * a3];
	if ((unsigned __int64)a2 < v5)
	{
		result = (16i64 * a3 + 15) / 16;
		if (result >= 4)
		{
			v7 = a1 + 6;
			do
			{
				if (v4)
				{
					*v4 = *v3;
					*(v7 - 5) = v3[1];
					*(v7 - 4) = v3[2];
					result = (unsigned int)v3[3];
					*(v7 - 3) = result;
				}
				if (v7 != (_DWORD*)8)
				{
					*(v7 - 2) = v3[4];
					*(v7 - 1) = v3[5];
					*v7 = v3[6];
					result = (unsigned int)v3[7];
					v7[1] = result;
				}
				if (v7 != (_DWORD*)-8i64)
				{
					v7[2] = v3[8];
					v7[3] = v3[9];
					v7[4] = v3[10];
					result = (unsigned int)v3[11];
					v7[5] = result;
				}
				if (v7 != (_DWORD*)-24i64)
				{
					v7[6] = v3[12];
					v7[7] = v3[13];
					v7[8] = v3[14];
					result = (unsigned int)v3[15];
					v7[9] = result;
				}
				v3 += 16;
				v4 += 16;
				v7 += 16;
			} while ((__int64)v3 < (__int64)(v5 - 48));
		}
		if ((unsigned __int64)v3 < v5)
		{
			v8 = v3 + 2;
			v9 = v4 + 2;
			v10 = (char*)v3 - (char*)v4;
			do
			{
				if (v9 != (_DWORD*)8)
				{
					*(v9 - 2) = *(_DWORD*)((char*)v9 + v10 - 8);
					*(v9 - 1) = *(v8 - 1);
					*v9 = *v8;
					v9[1] = v8[1];
				}
				v9 += 4;
				v8 += 4;
				result = (__int64)v9 + v10 - 8;
			} while (result < v5);
		}
	}
	return result;
}

