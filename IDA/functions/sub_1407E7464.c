//----- (00000001407E7464) ----------------------------------------------------
int __fastcall sub_1407E7464(_WORD* a1)
{
	int result; // eax
	int v3; // ebx
	WCHAR v4[12]; // [rsp+20h] [rbp-28h] BYREF

	result = sub_1407E8688((__int64)a1, 0x59u, v4, 9);
	v3 = 0;
	if (result)
	{
		LOBYTE(v3) = (unsigned int)sub_1407E6CDC(v4, a1, 9i64) == 0;
		return v3;
	}
	return result;
}
// 1407E7464: using guessed type WCHAR var_28[12];

