//----- (00000001402B21E0) ----------------------------------------------------
LPVOID sub_1402B21E0()
{
	LPVOID result; // rax

	result = ppv;
	if (!ppv)
	{
		if (CoCreateInstance(&stru_140964B50, 0i64, (_DWORD)ppv + 1, &stru_140B62038, &ppv) < 0)
		{
			if (CoCreateInstance(&stru_140964B40, 0i64, 1u, &stru_140B62048, &ppv) < 0)
			{
				ppv = 0i64;
				return 0i64;
			}
		}
		else
		{
			byte_140C63663 = 1;
		}
		return ppv;
	}
	return result;
}
// 140C63663: using guessed type char byte_140C63663;

