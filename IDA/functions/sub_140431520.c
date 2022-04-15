//----- (0000000140431520) ----------------------------------------------------
int* __fastcall sub_140431520(__int64 a1, unsigned int a2, int a3)
{
	int* result; // rax
	int v6; // [rsp+20h] [rbp-18h]

	result = sub_1400B5DF0(qword_140C658F0, a2, 0i64);
	if (result)
	{
		v6 = a3;
		return (int*)sub_1400EA3E0(a1, "CostumeUnlockResult", "oi", result, v6);
	}
	return result;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

