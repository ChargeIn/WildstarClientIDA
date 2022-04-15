//----- (00000001407E4830) ----------------------------------------------------
int* __fastcall sub_1407E4830(int* a1, __int64 a2, unsigned __int64 a3)
{
	int* v3; // r11
	unsigned int v4; // ecx
	unsigned __int64 v5; // r9
	unsigned __int64 v6; // r9
	unsigned __int64 v7; // r9
	unsigned __int64 i; // r9
	void* retaddr; // [rsp+0h] [rbp+0h] BYREF

	v3 = a1;
	if (a3 >= 8)
	{
		a2 = (unsigned __int8)a2;
		if (_bittest(&dword_140C60170, 1u))
		{
			memset(a1, a2, a3);
			return v3;
		}
		a2 *= 0x101010101010101i64;
		if (a3 >= 0x40)
		{
			v4 = -(int)a1 & 7;
			if (v4)
			{
				a3 -= v4;
				*(_QWORD*)v3 = a2;
			}
			a1 = (int*)((char*)v3 + v4);
			v5 = a3;
			a3 &= 0x3Fu;
			v6 = v5 >> 6;
			if (v6)
			{
				if (v6 >= 0x1C00)
				{
					do
					{
						_mm_stream_si32(a1, a2);
						_mm_stream_si32(a1 + 2, a2);
						_mm_stream_si32(a1 + 4, a2);
						a1 += 16;
						_mm_stream_si32(a1 - 10, a2);
						_mm_stream_si32(a1 - 8, a2);
						--v6;
						_mm_stream_si32(a1 - 6, a2);
						_mm_stream_si32(a1 - 4, a2);
						_mm_stream_si32(a1 - 2, a2);
					} while (v6);
					_InterlockedOr8((volatile signed __int8*)&retaddr, 0);
				}
				else
				{
					do
					{
						*(_QWORD*)a1 = a2;
						*((_QWORD*)a1 + 1) = a2;
						*((_QWORD*)a1 + 2) = a2;
						a1 += 16;
						*((_QWORD*)a1 - 5) = a2;
						*((_QWORD*)a1 - 4) = a2;
						--v6;
						*((_QWORD*)a1 - 3) = a2;
						*((_QWORD*)a1 - 2) = a2;
						*((_QWORD*)a1 - 1) = a2;
					} while (v6);
				}
			}
		}
		v7 = a3;
		a3 &= 7u;
		for (i = v7 >> 3; i; --i)
		{
			*(_QWORD*)a1 = a2;
			a1 += 2;
		}
	}
	for (; a3; --a3)
	{
		*(_BYTE*)a1 = a2;
		a1 = (int*)((char*)a1 + 1);
	}
	return v3;
}
// 140C60170: using guessed type int dword_140C60170;

