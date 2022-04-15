//----- (0000000140876AC0) ----------------------------------------------------
__int64 __fastcall sub_140876AC0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 64);
	result = *(_QWORD*)(a1 + 72);
	if (v2 != result)
	{
		do
		{
			if ((_DWORD)a2 == *(_DWORD*)v2 && BYTE4(a2) == *(_BYTE*)(v2 + 4))
				break;
			v2 += 8i64;
		} while (v2 != result);
		if (v2 != result)
		{
			if (v2 < result - 8)
				qmemcpy((void*)v2, (const void*)(v2 + 8), 8 * (((result - 8 - v2 - 1) >> 3) + 1));
			*(_QWORD*)(a1 + 72) -= 8i64;
		}
	}
	return result;
}

