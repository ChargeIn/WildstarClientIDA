//----- (0000000140400010) ----------------------------------------------------
unsigned __int64 __fastcall sub_140400010(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(__int64, __int64))
{
	__int64 v3; // rbx
	unsigned __int64 v6; // rdx
	unsigned __int64 result; // rax
	__int64 v8; // rdi

	v3 = a2;
	v6 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0x4924924924924925i64) >> 64) >> 5;
	result = v6 >> 63;
	if ((__int64)((v6 >> 63) + v6) > 1)
	{
		v8 = -a1;
		do
		{
			sub_140400730(a1, v3, (__int64)a3, a3);
			v3 -= 112i64;
			result = (unsigned __int64)((unsigned __int128)((v8 + v3) * (__int128)0x4924924924924925i64) >> 64) >> 63;
		} while ((v8 + v3) / 112 > 1);
	}
	return result;
}
// 140400079: variable 'a3' is possibly undefined

