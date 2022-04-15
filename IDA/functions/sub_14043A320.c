//----- (000000014043A320) ----------------------------------------------------
void __fastcall sub_14043A320(__int64 a1, int* a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v6; // rbx
	__int64 i; // rax
	__int64 v8; // r8

	if ((int*)a1 != a2)
	{
		v3 = 0i64;
		v6 = ((__int64)a2 - a1) >> 3;
		for (i = v6; i != 1; ++v3)
			i >>= 1;
		sub_14043A3D0(
			(__int64*)a1,
			(unsigned __int64)a2,
			a3,
			2 * v3,
			(unsigned __int8(__fastcall*)(__int64, __int64))sub_140439FB0);
		if (v6 <= 16)
		{
			sub_14043A560((int*)a1, a2, (unsigned __int8(__fastcall*)(__int64, __int64))sub_140439FB0);
		}
		else
		{
			sub_14043A560((int*)a1, (int*)(a1 + 128), (unsigned __int8(__fastcall*)(__int64, __int64))sub_140439FB0);
			sub_14043A780((_QWORD*)(a1 + 128), a2, v8, (unsigned __int8(__fastcall*)(__int64, __int64))sub_140439FB0);
		}
	}
}
// 14043A3A5: variable 'v8' is possibly undefined

