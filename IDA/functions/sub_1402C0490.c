//----- (00000001402C0490) ----------------------------------------------------
__int64 __fastcall sub_1402C0490(__int64 a1, _BYTE* a2, __int64 a3)
{
	_QWORD* v3; // r9
	unsigned int v6; // ebx
	__int16 v7; // r10
	__int64 v8; // r11
	unsigned __int64 v9; // rax
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int16 v12; // r9
	__int64 v13; // r11
	unsigned __int64 v14; // rcx
	int v15; // edx
	__int64 result; // rax

	v3 = *(_QWORD**)(a1 + 840);
	v6 = 1;
	v7 = 0;
	v8 = 0i64;
	while (1)
	{
		if (v3[3] > 7ui64)
		{
			v9 = ++v3[2];
			v3[3] = 0i64;
			if (v9 >= v3[1])
				return 2147500037i64;
		}
		v10 = v3[3];
		++v8;
		v7 = (2 * v7) | (*(unsigned __int8*)v3[2] << v10 >> 7) & 1;
		v3[3] = v10 + 1;
		if (v8)
		{
			if (v7 <= *(__int16*)(a3 + 18))
			{
			LABEL_12:
				v15 = *(__int16*)(a3 + 2i64 * v6 + 52);
				if (v7 + (unsigned int)*(unsigned __int8*)(v6 + a3 + 86) - v15 <= 0xFF)
				{
					result = 0i64;
					*a2 = *(_BYTE*)(*(unsigned __int8*)(v6 + a3 + 86) + *(_QWORD*)(a3 + 8) - (__int16)v15 + v7);
					return result;
				}
			}
			else
			{
			LABEL_6:
				v11 = *(_QWORD**)(a1 + 840);
				++v6;
				v12 = 0;
				v13 = 0i64;
				while (1)
				{
					if (v11[3] > 7ui64)
					{
						v14 = ++v11[2];
						v11[3] = 0i64;
						if (v14 >= v11[1])
							break;
					}
					++v13;
					v12 = (2 * v12) | (*(unsigned __int8*)v11[2] << v11[3]++ >> 7) & 1;
					if (v13)
					{
						v7 = v12 | (2 * v7);
						if (v7 > *(__int16*)(a3 + 2i64 * v6 + 16))
							goto LABEL_6;
						if (v6 > 0x10)
							return 2147500037i64;
						goto LABEL_12;
					}
				}
			}
			return 2147500037i64;
		}
	}
}

