//----- (00000001402883C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402883C0(unsigned int* a1)
{
	return (int)a1[5]
		+ 0x8DBFB38E27BD8821ui64 * (int)a1[2]
		+ 0x3F7B69F4E4E9F0B9i64 * a1[3]
		+ 0x630FF64FD0002BC9i64 * (int)a1[1]
		+ 2860486313u * (2860486313i64 * a1[4] + sub_1400564A0(*((unsigned __int16**)a1 + 3)))
		+ 0x71E22D399B1D65B1i64 * *a1;
}

