//----- (00000001407E6BB8) ----------------------------------------------------
__int64 __fastcall sub_1407E6BB8(char* a1, char* a2)
{
	int v2; // r8d
	__int64 result; // rax
	signed __int64 v4; // rcx

	v2 = *(unsigned __int16*)a2;
	result = (unsigned int)*(unsigned __int16*)a1 - v2;
	if (!(_DWORD)result)
	{
		v4 = a1 - a2;
		do
		{
			if (!(_WORD)v2)
				break;
			a2 += 2;
			v2 = *(unsigned __int16*)a2;
			result = (unsigned int)*(unsigned __int16*)&a2[v4] - v2;
		} while (!(_DWORD)result);
	}
	if ((int)result < 0)
		return 0xFFFFFFFFi64;
	if ((int)result > 0)
		return 1i64;
	return result;
}

