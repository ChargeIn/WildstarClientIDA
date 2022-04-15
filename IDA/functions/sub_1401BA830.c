//----- (00000001401BA830) ----------------------------------------------------
__int64 __fastcall sub_1401BA830(__int64 a1)
{
	__int64 v2; // rbp
	unsigned __int64* v3; // r14
	unsigned __int64 v4; // rbx
	unsigned __int64 v5; // rsi
	__int64 v7; // [rsp+20h] [rbp-68h] BYREF
	__int64 v8[2]; // [rsp+28h] [rbp-60h] BYREF
	char v9[16]; // [rsp+38h] [rbp-50h] BYREF
	__int64 v10[2]; // [rsp+48h] [rbp-40h] BYREF
	unsigned __int64 v11; // [rsp+58h] [rbp-30h]

	if (*(_DWORD*)(a1 + 664))
		return a1 + 632;
	v2 = 64i64;
	v3 = (unsigned __int64*)(a1 + 64);
	do
	{
		v4 = *v3;
		v5 = 0i64;
		if (*v3)
		{
			do
			{
				if ((v4 & 0xF) != 0)
					break;
				if (v4 < 0x240)
					break;
				if (v4 + 24 > *(_QWORD*)(a1 + 576))
					break;
				if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v4 - 8), (int*)v10, 0x18ui64) < 0)
					break;
				if (v10[0] >= 0)
					break;
				if ((v10[0] & 0xF) != 0)
					break;
				if (v10[1] != v5)
					break;
				if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v4 - v10[0]), (int*)&v7, 8ui64) < 0)
					break;
				if (v10[0] != v7)
					break;
				v8[0] = v4;
				v8[1] = -v10[0];
				sub_1401BC880(a1 + 632, (__int64)v9, v8);
				if (!v9[8])
					break;
				v5 = v4;
				v4 = v11;
			} while (v11);
		}
		++v3;
		--v2;
	} while (v2);
	*(_DWORD*)(a1 + 664) = 1;
	return a1 + 632;
}

