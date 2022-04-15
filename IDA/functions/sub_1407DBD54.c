//----- (00000001407DBD54) ----------------------------------------------------
__int64 __fastcall sub_1407DBD54(__int64 (**a1)(void), unsigned __int64 a2)
{
	__int64 result; // rax
	__int64 (**i)(void); // rbx

	result = 0i64;
	for (i = a1; (unsigned __int64)i < a2; ++i)
	{
		if ((_DWORD)result)
			break;
		if (*i)
			result = (*i)();
	}
	return result;
}

