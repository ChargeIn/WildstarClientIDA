//----- (0000000140084F80) ----------------------------------------------------
__int64 __fastcall sub_140084F80(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = sub_140085170(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		result = sub_14006BD80(a1, *(float*)(a2 + 16));
		if ((int)result >= 0)
		{
			result = sub_14006BD80(a1, *(float*)(a2 + 20));
			if ((int)result >= 0)
				return sub_14006BD80(a1, *(float*)(a2 + 24));
		}
	}
	return result;
}

