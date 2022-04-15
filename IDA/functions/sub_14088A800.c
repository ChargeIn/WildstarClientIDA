//----- (000000014088A800) ----------------------------------------------------
void __fastcall sub_14088A800(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	int v3; // eax
	int v4; // edi
	__int64 j; // rax

	for (i = qword_140C62A30; i; i = *(_QWORD*)i)
	{
		if (i + 8 == a2)
			break;
	}
	*(_DWORD*)(i + 16) &= ~2u;
	v3 = *(_DWORD*)(i + 16);
	if ((v3 & 1) == 0)
	{
		*(_DWORD*)(i + 16) = v3 | 1;
		v4 = *(_DWORD*)(i + 8);
		sub_140828A50(v4, *(_DWORD*)(i + 12), 0, 1);
		for (j = *(_QWORD*)i; j; j = *(_QWORD*)j)
		{
			if (*(_DWORD*)(j + 8) == v4)
				*(_DWORD*)(j + 16) |= 1u;
		}
	}
	sub_14088A380();
}
// 140C62A30: using guessed type __int64 qword_140C62A30;

