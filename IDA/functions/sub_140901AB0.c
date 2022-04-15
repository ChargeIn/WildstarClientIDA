//----- (0000000140901AB0) ----------------------------------------------------
__int64 __fastcall sub_140901AB0(int* a1, __int64* a2)
{
	__int64 result; // rax
	int v5; // eax
	__int64 v6; // rax
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // r9
	int v10; // ecx
	__int64 v11; // r8
	int v12; // edx
	unsigned __int64 v13; // r8
	__int64 v14; // r8
	int v15; // ecx
	int v16; // ecx
	int v17; // eax
	__int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
	int v19; // [rsp+60h] [rbp+20h] BYREF
	int v20; // [rsp+70h] [rbp+30h] BYREF
	int v21; // [rsp+78h] [rbp+38h] BYREF

	v20 = 0;
	v21 = 0;
	v19 = 0;
	if (!a1 || (sub_1407E4830(a1, 255i64, 0x24ui64), !a2))
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	if ((unsigned __int64)*a2 >= 0x793407000i64)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		return 22i64;
	}
	sub_140905788();
	if ((unsigned int)sub_1409056F8(&v20))
	{
		sub_1407DC390();
		__debugbreak();
	}
	if ((unsigned int)sub_140905728(&v21))
	{
		sub_1407DC390();
		__debugbreak();
	}
	if ((unsigned int)sub_140905758(&v19))
	{
		sub_1407DC390();
		__debugbreak();
	}
	if (*a2 <= 259200)
	{
		result = sub_140901564(a1, a2);
		if (!(_DWORD)result)
		{
			if (v20 && (unsigned int)sub_1409057C4(a1))
			{
				v5 = v19;
				a1[8] = 1;
				v6 = v21 + v5;
			}
			else
			{
				v6 = v19;
			}
			v7 = *a1 - v6;
			v8 = (int)v7 % 60;
			*a1 = (int)v7 % 60;
			if ((int)v7 % 60 < 0)
			{
				v7 -= 60i64;
				*a1 = v8 + 60;
			}
			v9 = a1[1] + v7 / 60;
			v10 = (int)v9 % 60;
			a1[1] = (int)v9 % 60;
			if ((int)v9 % 60 < 0)
			{
				v9 -= 60i64;
				a1[1] = v10 + 60;
			}
			v11 = a1[2] + v9 / 60;
			v12 = (int)v11 % 24;
			a1[2] = (int)v11 % 24;
			if ((int)v11 % 24 < 0)
			{
				v11 -= 24i64;
				a1[2] = v12 + 24;
			}
			v13 = (__int64)((unsigned __int128)(v11 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 2;
			v14 = (v13 >> 63) + v13;
			if (v14 <= 0)
			{
				if (v14 >= 0)
					return 0i64;
				v16 = a1[6];
				a1[3] += v14;
				v17 = a1[3];
				a1[6] = ((int)v14 + v16 + 7) % 7;
				if (v17 <= 0)
				{
					a1[4] = 11;
					a1[3] = v17 + 31;
					a1[7] += v14 + 365;
					--a1[5];
					return 0i64;
				}
			}
			else
			{
				v15 = v14 + a1[6];
				a1[3] += v14;
				a1[6] = v15 % 7;
			}
			a1[7] += v14;
			return 0i64;
		}
	}
	else
	{
		v18[0] = *a2 - v19;
		result = sub_140901564(a1, v18);
		if (!(_DWORD)result)
		{
			if (!v20 || !(unsigned int)sub_1409057C4(a1))
				return 0i64;
			v18[0] -= v21;
			result = sub_140901564(a1, v18);
			if (!(_DWORD)result)
			{
				a1[8] = 1;
				return 0i64;
			}
		}
	}
	return result;
}

