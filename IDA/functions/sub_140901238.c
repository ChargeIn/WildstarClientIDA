//----- (0000000140901238) ----------------------------------------------------
__int64 __fastcall sub_140901238(int* a1, int a2)
{
	__int64 v4; // r10
	signed int v5; // ecx
	int v6; // edx
	int v7; // ecx
	__int64 v8; // r11
	int v9; // eax
	int v10; // eax
	__int64 v12; // [rsp+30h] [rbp-40h] BYREF
	int v13; // [rsp+38h] [rbp-38h] BYREF
	int v14; // [rsp+3Ch] [rbp-34h] BYREF
	int v15[8]; // [rsp+40h] [rbp-30h] BYREF
	int v16; // [rsp+60h] [rbp-10h]

	v13 = 0;
	v14 = 0;
	if (a1)
	{
		v4 = a1[5];
		v12 = v4;
		if ((unsigned __int64)(v4 - 69) > 0x408)
			goto LABEL_24;
		v5 = a1[4];
		if ((unsigned int)v5 > 0xB)
		{
			v6 = v5 / 12;
			v7 = v5 % 12;
			v4 += v6;
			a1[4] = v7;
			v12 = v4;
			if (v7 < 0)
			{
				--v4;
				a1[4] = v7 + 12;
				v12 = v4;
			}
			if ((unsigned __int64)(v4 - 69) > 0x408)
				goto LABEL_24;
		}
		v8 = dword_140C1B170[a1[4]];
		if ((((((v4 >> 63) & 3) + (_BYTE)v4) & 3) == ((v4 >> 63) & 3) && v4 != 100 * (v4 / 100)
			|| v4 + 1900 == 400 * ((v4 + 1900) / 400))
			&& a1[4] > 1)
		{
			++v8;
		}
		v12 = 60
			* (60 * (24 * (365 * v4 + a1[3] + (v4 + 299) / 400 - (v4 - 1) / 100 - 25567 + v8 + (v4 - 1) / 4) + a1[2]) + a1[1])
			+ *a1;
		if (a2)
		{
			sub_140905788();
			if ((unsigned int)sub_140905728(&v13))
			{
				sub_1407DC390();
				JUMPOUT(0x14090150Di64);
			}
			if ((unsigned int)sub_140905758(&v14))
			{
				sub_1407DC390();
				__debugbreak();
			}
			v12 += v14;
			if ((unsigned int)sub_140901AB0(v15, &v12))
				goto LABEL_24;
			v9 = a1[8];
			if (v9 <= 0 && (v9 >= 0 || v16 <= 0))
				goto LABEL_23;
			v12 += v13;
			v10 = sub_140901AB0(v15, &v12);
		}
		else
		{
			v10 = sub_140901564(v15, &v12);
		}
		if (!v10)
		{
		LABEL_23:
			*a1 = v15[0];
			a1[1] = v15[1];
			a1[2] = v15[2];
			a1[3] = v15[3];
			a1[4] = v15[4];
			a1[5] = v15[5];
			a1[6] = v15[6];
			a1[7] = v15[7];
			a1[8] = v16;
			return v12;
		}
	LABEL_24:
		*(_DWORD*)sub_1407DE1B0() = 22;
		return -1i64;
	}
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	return -1i64;
}
// 140901508: control flows out of bounds to 14090150D
// 140C1B170: using guessed type int dword_140C1B170[13];

