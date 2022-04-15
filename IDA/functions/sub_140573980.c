//----- (0000000140573980) ----------------------------------------------------
void __fastcall sub_140573980(int* a1, int* a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v6; // rbx
	__int64 i; // rax
	__int64 v8; // r8

	if (a1 != a2)
	{
		v3 = 0i64;
		v6 = ((char*)a2 - (char*)a1) >> 4;
		for (i = v6; i != 1; ++v3)
			i >>= 1;
		sub_140574980(a1, (unsigned __int64)a2, a3, 2 * v3, (unsigned __int8(__fastcall*)(int*, int*))sub_14056FBD0);
		if (v6 <= 16)
		{
			sub_140574F40(a1, a2, (unsigned __int8(__fastcall*)(int*, int*))sub_14056FBD0);
		}
		else
		{
			sub_140574F40(a1, a1 + 64, (unsigned __int8(__fastcall*)(int*, int*))sub_14056FBD0);
			sub_1405752F0(a1 + 64, a2, v8, (unsigned __int8(__fastcall*)(int*, int*))sub_14056FBD0);
		}
	}
}
// 140573A05: variable 'v8' is possibly undefined

